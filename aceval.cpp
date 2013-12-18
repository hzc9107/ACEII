#include "aceval.h"
#include "ui_aceval.h"
#include "pipeline.h"
#include "scenedialog.h"
#include "playerdialog.h"
#include "playerscontrol.h"
#include "dbconnection.h"
#include "newdb.h"
#include <iostream>
#include <QFileDialog>
#include <QMouseEvent>
#include <QMessageBox>
#include <QDebug>


/*!
 * \brief AceVal::AceVal
 * \param parent
 *  This class is the main implementation of the application, it contains all the controls for the tracking,
 *  also it stablishes the connection with the sql database in order to store the results
 */
AceVal::AceVal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AceVal),
    DBConnected(false),
    Time(this),
    firstTime(true),
    firstFrame(0),
    nextFramePos(0),
    DBOpened(false),
    currentPlayer(0),
    playerSizeOld(0),
    rangeSet(false)
{
    thread = new QThread;
    thread1 = new DBthread;
    ui->setupUi(this);
    CusLay();
    GstIFace(NULL);
    ConnectMenu();
    ShiftPressed = false;
    FramesInf = new QVector<Frame>(500);
    thread1->moveToThread(thread);
    thread->start();
}

/*!
 * \brief AceVal::CusLay
 *
 *  This function generates the icon buttons that are display to control the video playback
 */
void AceVal::CusLay(void) {
    // Customizing tool buttons for showing control icons.
	ui->toolButton_3->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->toolButton_4->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->toolButton_5->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
}

/*!
 * \brief AceVal::GstIFace
 * \param filename
 *
 *  The gstreamer interface is initialized here, the filename contains the
 *  address of the video to open.
 */
void AceVal::GstIFace(const char *filename){
    unsigned long WinID;
    WinID = ui->frame_7->winId();
    QApplication::syncX();
    Pipeline = new pipeline(WinID,filename);
}


/*!
 * \brief AceVal::ConnectMenu
 *
 *  All the signal/slot connections are carried out in this function
 */
void AceVal::ConnectMenu(){
    connect(ui->actionOpen_File,SIGNAL(triggered()),this,SLOT(OnOpen()));
    connect(ui->actionConnect,SIGNAL(triggered()),this,SLOT(connectDB()));
    connect(ui->actionNew_DB,SIGNAL(triggered()),this,SLOT(newDB()));
    connect(ui->actionOpen_DB,SIGNAL(triggered()),this,SLOT(openDB()));
    connect(ui->actionSelect_Player,SIGNAL(triggered()),this,SLOT(selectPlayer()));
    connect(&Time, SIGNAL(timeout()),this,SLOT(Timer()));
    connect(this,SIGNAL(Connect(QString,QString,QString)),thread1,SLOT(connectDB(QString,QString,QString)));
    connect(thread1,SIGNAL(connected(bool)),this,SLOT(ResultConnection(bool)));
    connect(this,SIGNAL(openThreadDB(QString)),thread1,SLOT(openDB(QString)));
    connect(thread1,SIGNAL(openDBFail(bool)),this,SLOT(openFailedDB(bool)));
    connect(this,SIGNAL(newDBCreate(QString,QString)),thread1,SLOT(newDB(QString,QString)));
    connect(this,SIGNAL(storeInfo(QVector<Frame>*)),thread1,SLOT(storeInfor(QVector<Frame>*)));
    connect(this,SIGNAL(storePlayers(int,int,QVector<Player>*)),thread1,SLOT(storePlayers(int,int,QVector<Player>*)));
    connect(thread1,SIGNAL(querResult(bool,QString)),this,SLOT(queryResult(bool,QString)));
    connect(ui->actionFrame_by_frame,SIGNAL(triggered()),this,SLOT(FrameByFrame()));
}

/*!
 * \brief AceVal::FrameByFrame
 *
 *  Slot to control video playback showing one frame per second
 */
void AceVal::FrameByFrame(){
    Pipeline->ChangeSpeed(100 * Pipeline->FrameRate_Num / Pipeline->FrameRate_Den);
}

/*!
 * \brief AceVal::openFailedDB
 * \param result
 *
 *  Slot used to inform the user if there is a problem while opening the database
 */
void AceVal::openFailedDB(bool result){
    if(result){
        DBOpened = true;
    } else {
    QMessageBox msg;
    msg.setText("No DB Found");
    msg.setInformativeText("Correct the parameters or create a new DB");
    msg.setIcon(QMessageBox::Warning);
    msg.exec();
    }
}

/*!
 * \brief AceVal::ResultConnection
 * \param result
 *
 *  Slot used to determine if the connection to the database was succesfull
 */
void AceVal::ResultConnection(bool result){
    qDebug()<<result;
    DBConnected = result ? true : false;
    if(!result){
        QMessageBox msg;
        msg.setText("Connection not created");
        msg.setInformativeText("Check the parameters");
        msg.setIcon(QMessageBox::Warning);
        msg.exec();
    }
}

/*!
 * \brief AceVal::queryResult
 * \param result
 * \param Error
 *
 *  Slot used to determine if there is an error while performing a query to
 *  the database
 *
 */
void AceVal::queryResult(bool result, QString Error){
    if(!result){
        QMessageBox msg;
        msg.setText(Error);
        msg.setIcon(QMessageBox::Warning);
        msg.exec();
    } else {
        DBOpened = true;
    }
}

/*!
 * \brief AceVal::openDB
 *
 *  Function used to show the dbconnection dialog, it communicates
 *  with the thread connected to the db in order to use an existing
 *  database
 */
void AceVal::openDB(){
    if(DBConnected){
        NewDB dialog(this);
        if(dialog.exec() == QDialog::Accepted){
            QString DBname = dialog.getHome()+"_"+dialog.getAway()+"_"+dialog.getDay()+"_"+dialog.getMonth()+"_"+dialog.getYear();
            DBname = DBname.toUpper();
            emit openThreadDB("use " + DBname);
        }
    } else{
        QMessageBox msg;
        msg.setText("There is no DB driver connected");
        msg.setInformativeText("Please connect to a DB driver befor creating a new DB");
        msg.setIcon(QMessageBox::Information);
        msg.exec();
    }
}

/*!
 * \brief AceVal::newDB
 *
 *  Displays the newDB dialog in order to open an existing database and continue the tracking
 *  it communicates with the dbthread in order to get it to use the right database
 */
void AceVal::newDB(){
    if(DBConnected){
        NewDB dialog(this);
        if(dialog.exec() == QDialog::Accepted){
            QString DBname = dialog.getHome()+"_"+dialog.getAway()+"_"+dialog.getDay()+"_"+dialog.getMonth()+"_"+dialog.getYear();
            DBname = DBname.toUpper();
            emit newDBCreate("create database " + DBname, DBname);
        }
    } else{
        QMessageBox msg;
        msg.setText("There is no DB driver connected");
        msg.setInformativeText("Please connect to a DB driver befor creating a new DB");
        msg.setIcon(QMessageBox::Information);
        msg.exec();
    }
}

/*!
 * \brief AceVal::connectDB
 *  Displays the connectionDialog in order to start a mysql process linked to the program
 *  in this process.
 */
void AceVal::connectDB(){
    DBConnection dialog(this);
    if(dialog.exec() == QDialog::Accepted){
        emit Connect(dialog.getHostName(),dialog.getUser(),dialog.getPassword());
    }
}

/*!
 * \brief AceVal::~AceVal
 *
 *  Destructor created by qt
 */
AceVal::~AceVal()
{

    delete ui;
}

/*!
 * \brief AceVal::on_toolButton_3_clicked
 *  Slot to control the play button
 */
void AceVal::on_toolButton_3_clicked()
{
    Pipeline->SetPlaying();
    if(firstTime){
        firstTime = false;
        QTimer::singleShot(100,this,SLOT(firstTimer()));
    }
}

/*!
 * \brief AceVal::firstTimer
 *  Begins the callback for the frame counting, sets the timer so that
 *  it synchronizes with the framerate of the video.
 */
void AceVal::firstTimer(){
    Pipeline->ChangeSpeed(99);
    Pipeline->ChangeSpeed(100);
    Pipeline->ProveMethod();
    Miliseconds = 1000.0f * (float) Pipeline->FrameRate_Num / (float) Pipeline->FrameRate_Den;
    Time.start(Miliseconds);
}

/*!
 * \brief AceVal::Timer
 *  Slot used by the timer in order to determine the current frame number
 */
void AceVal::Timer(){
    if(!rangeSet){
        ui->horizontalSlider->setRange(0,(int) Pipeline->GetDuration()* 1000 / Miliseconds);
        rangeSet = true;
    }
    double StartTime = Pipeline->GetPosition();
    firstFrame = StartTime * 1000 / Miliseconds;
    ui->horizontalSlider->setValue(firstFrame);

}

/*!
 * \brief AceVal::on_toolButton_4_clicked
 *  Slot to control the pause button.
 */
void AceVal::on_toolButton_4_clicked()
{
    Pipeline->SetPaused();
}

/*!
 * \brief AceVal::on_toolButton_5_clicked
 *
 *  Slot to control the stop button
 */
void AceVal::on_toolButton_5_clicked()
{
    Pipeline->SetNull();
    firstTime = true;
    Time.stop();
}

/*!
 * \brief AceVal::on_spinBox_2_valueChanged
 * \param arg1
 *  Slot to control the spinBox, which controls the speed of
 * video playback.
 */
void AceVal::on_spinBox_2_valueChanged(int arg1)
{
    Pipeline->ChangeSpeed(arg1);
}

/*!
 * \brief AceVal::OnExit
 *  Makes sure that the pipeline is finished properly before exiting
 *  program.
 */
void AceVal::OnExit(){
    Pipeline->SetNull();

}

/*!
 * \brief AceVal::OnOpen
 *  Used to open a file and initialize the pipeline
 */
void AceVal::OnOpen(){
    //Pipeline is released and rebuild in order to create a new pipeline to play the new video.
    Pipeline->SetNull();
    delete Pipeline;
    QString filename = QFileDialog::getOpenFileName();
    QByteArray Bit8Filename = filename.toLocal8Bit();
    const char *filename_char = Bit8Filename.data();
    GstIFace(filename_char);
    firstTime = true;
    rangeSet = false;
}

/*!
 * \brief AceVal::mousePressEvent
 * \param event
 *  Reimplementation of the mousePressEvent, used to perform the player
 *  tracking by filling the database.
 */
void AceVal::mousePressEvent(QMouseEvent *event){
    qDebug() << DBOpened << DBConnected << currentPlayer;
     if(DBOpened && DBConnected && currentPlayer){
        int x = (event->pos()).x()-ui->frame_7->pos().x();
        int y = (event->pos()).y()-ui->frame_7->pos().y();
        if(0<=x && x<ui->frame_7->width() && 0<=y && y<ui->frame_7->height()){
            if (event->button() == Qt::LeftButton) {
                FramesInf->operator [](nextFramePos++) = Frame(firstFrame,currentPlayer,x/ui->frame_7->width(),y/ui->frame_7->height());
                if(nextFramePos == 500){
                    nextFramePos = 0;
                    StoringInfo(FramesInf);
                    FramesInf = new QVector<Frame>(500);
                }
             }
        }
    } else {
         if(!DBOpened || !DBConnected){
                 QMessageBox msg;
                 msg.setText("Open the database or set to yaml");
                 msg.setIcon(QMessageBox::Warning);
                 msg.exec();
         } else {
             QMessageBox msg;
             msg.setText("Please add players");
             msg.setIcon(QMessageBox::Warning);
             msg.exec();
         }
     }
}

/*!
 * \brief AceVal::StoringInfo
 * \param framesToInsert
 *
 *  Callback created for starting the information storing in the database
 */
void AceVal::StoringInfo(QVector<Frame> *framesToInsert){
    emit storeInfo(framesToInsert);
}

/*!
 * \brief AceVal::mouseMoveEvent
 * \param event
 * Reimplementation of the mouseMoveEvent used for performing the tracking.
 */
void AceVal::mouseMoveEvent(QMouseEvent *event){
    if(DBOpened && DBConnected && currentPlayer){
        int x = (event->pos()).x()-ui->frame_7->pos().x();
        int y = (event->pos()).y()-ui->frame_7->pos().y();
        if(0<=x && x<ui->frame_7->width() && 0<=y && y<ui->frame_7->height()){
            FramesInf->operator [](nextFramePos++) = Frame(firstFrame,currentPlayer,(double)x/(double)ui->frame_7->width(),(double)y/(double)ui->frame_7->height());
            if(nextFramePos == 500){
                nextFramePos = 0;
                StoringInfo(FramesInf);
                FramesInf = new QVector<Frame>(500);
            }
        }
    } else {

        if(!DBOpened || !DBConnected){
                QMessageBox msg;
                msg.setText("Open the database or set to yaml");
                msg.setIcon(QMessageBox::Warning);
                msg.exec();
        } else {
            QMessageBox msg;
            msg.setText("Please add players");
            msg.setIcon(QMessageBox::Warning);
            msg.exec();
        }
    }
}

void AceVal::CreateScene(){
    SceneDialog Dialog(this);
    if(Dialog.exec() == QDialog::Accepted){
        Scene scene(Pipeline->GetPosition(),Dialog.GetLabel());
        Scenes << scene;
    }
}

/*!
 * \brief AceVal::selectPlayer
 *  Displays the playerscontrol dialog and calls the dbthread
 *  for inserting new players
 */
void AceVal::selectPlayer(){
    Pipeline->SetPaused();
    PlayersControl Dialog(Players,this);
    if(Dialog.exec() == QDialog::Accepted){
        currentPlayer = Dialog.getRow()+1;
        emit storePlayers(playerSizeOld,Players.size(),&Players);
        playerSizeOld =  Players.size() - 1;
    }
}

void AceVal::ChoosePlayer(){
   // PlayersControl Dialog(this,&Players, &Scenes[0].Players);
}
