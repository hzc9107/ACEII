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

AceVal::AceVal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AceVal),
    DBConnected(false),
    Time(this),
    firstTime(true),
    firstFrame(0),
    nextFramePos(0),
    DBOpened(false)
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

/*AceVal::CusLay:
	Arguments: None
	Purpose: To customize the layout, to add features such as play, stop and pause icon, also to add any other feature that might be useful for the layout in order to make it attractive.
 */
void AceVal::CusLay(void) {
    // Customizing tool buttons for showing control icons.
	ui->toolButton_3->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->toolButton_4->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->toolButton_5->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
}

/*Aceval::GstIFace:
    Arguments: None
    Purpose: To create the gstreamer interface in order to play the video.
*/

void AceVal::GstIFace(const char *filename){
    unsigned long WinID;
    WinID = ui->frame_7->winId();
    QApplication::syncX();
    Pipeline = new pipeline(WinID,filename);
}

/*AceVal::ConnectMenu:
 *  Arguments:None
 *  Purpose: To connect Menu options in the GUI
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
}

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

/*AceVal::openDB:
 *  Arguments: None
 *  Purpose: Callback for opening Databases
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

/*AceVal::newDB:
 *  Arguments:None
 *  Purpose:To create a new database for a new video.
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

/*AceVal::connectDB:
 *  Arguments: None
 *  Purpose: Connect to the DB in the server
 */
void AceVal::connectDB(){
    DBConnection dialog(this);
    if(dialog.exec() == QDialog::Accepted){
        emit Connect(dialog.getHostName(),dialog.getUser(),dialog.getPassword());
    }
}

AceVal::~AceVal()
{

    delete ui;
}

/*AceVall::on_toolButton_3_clicked()
    Arguments: None
    Purpose: To start the video playback.
*/
void AceVal::on_toolButton_3_clicked()
{
    Pipeline->SetPlaying();
    if(firstTime){
        firstTime = false;
        QTimer::singleShot(100,this,SLOT(firstTimer()));
    }
}

void AceVal::firstTimer(){
    Pipeline->ChangeSpeed(99);
    Pipeline->ChangeSpeed(100);
    Pipeline->ProveMethod();
    Miliseconds = 1000.0f * (float) Pipeline->FrameRate_Num / (float) Pipeline->FrameRate_Den;
    Time.start(Miliseconds);
}

void AceVal::Timer(){
    double StartTime = Pipeline->GetPosition();
    firstFrame = StartTime * 1000 / Miliseconds;

}

/*AceVal::on_toolButton_4_clicked
 *  Arguments: None
 *  Purpose: To pause the video in the frame
 */
void AceVal::on_toolButton_4_clicked()
{
    Pipeline->SetPaused();
}

/*AceVal::on_toolButton_5_clicked
 *  Arguments:None
 *  Purpose: To stop the playback and release the pipeline
 */
void AceVal::on_toolButton_5_clicked()
{
    Pipeline->SetNull();
    firstTime = true;
    Time.stop();
}

/*AceVal::on_spinBox_2_valueChanged
 *  Arguments:
 *      arg1: Value introduced in the spinbox inside the main window
 *  Purpose: To change the video playback speed
*/
void AceVal::on_spinBox_2_valueChanged(int arg1)
{
    Pipeline->ChangeSpeed(arg1);
}

/*AceVal::OnExit()
 *  Arguments: None
 *  Purpose: To release the elements before exiting.
*/
void AceVal::OnExit(){
    Pipeline->SetNull();

}

/*AceVal::OnOpen
 *  Arguments: None
 *  Purpose: SLOT to open a new video file. It is connected to the File -> open
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
}

/*AceVal::mousePressEvent
 *  Arguments:
 */
void AceVal::mousePressEvent(QMouseEvent *event){
     if(DBOpened && DBConnected){
        int x = (event->pos()).x()-ui->frame_7->pos().x();
        int y = (event->pos()).y()-ui->frame_7->pos().y();
        if(0<=x && x<ui->frame_7->width() && 0<=y && y<ui->frame_7->height()){
            if (event->button() == Qt::LeftButton) {
                FramesInf->operator [](nextFramePos++) = Frame(firstFrame,1,x/ui->frame_7->width(),y/ui->frame_7->height());
                if(nextFramePos == 500){
                    nextFramePos = 0;
                    StoringInfo(FramesInf);
                    FramesInf = new QVector<Frame>(500);
                }
             }
        }
    } else {
                 QMessageBox msg;
                 msg.setText("Open the database or set to yaml");
                 msg.setIcon(QMessageBox::Warning);
                 msg.exec();
     }
}

void AceVal::StoringInfo(QVector<Frame> *framesToInsert){
    emit storeInfo(framesToInsert);
}

void AceVal::mouseMoveEvent(QMouseEvent *event){
    if(DBOpened && DBConnected){
        int x = (event->pos()).x()-ui->frame_7->pos().x();
        int y = (event->pos()).y()-ui->frame_7->pos().y();
        if(0<=x && x<ui->frame_7->width() && 0<=y && y<ui->frame_7->height()){
            FramesInf->operator [](nextFramePos++) = Frame(firstFrame,1,(double)x/(double)ui->frame_7->width(),(double)y/(double)ui->frame_7->height());
            if(nextFramePos == 500){
                nextFramePos = 0;
                StoringInfo(FramesInf);
                FramesInf = new QVector<Frame>(500);
            }
        }
    } else {
        QMessageBox msg;
        msg.setText("Open the database or set to yaml");
        msg.setIcon(QMessageBox::Warning);
        msg.exec();
    }
}

void AceVal::CreateScene(){
    SceneDialog Dialog(this);
    if(Dialog.exec() == QDialog::Accepted){
        Scene scene(Pipeline->GetPosition(),Dialog.GetLabel());
        Scenes << scene;
    }
}

void AceVal::selectPlayer(){
    Pipeline->SetPaused();
    PlayersControl Dialog(Players,this);
    if(Dialog.exec() == QDialog::Accepted){

   //     if(Players.isEmpty() || (!Players.contains(player)))
     //       Players << player;
    }
}

void AceVal::ChoosePlayer(){
   // PlayersControl Dialog(this,&Players, &Scenes[0].Players);
}
