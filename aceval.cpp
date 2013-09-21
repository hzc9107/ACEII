#include "aceval.h"
#include "ui_aceval.h"
#include "pipeline.h"
#include "scenedialog.h"
#include "playerdialog.h"
#include "playerscontrol.h"
#include <iostream>
#include <QFileDialog>
#include <QMouseEvent>

AceVal::AceVal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AceVal)
{
    ui->setupUi(this);
    CusLay();
    GstIFace(NULL);
    ConnectMenu();
    ShiftPressed = false;

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
}


/*AceVal::on_toolButton_4_clicked
 *  Arguments: None
 *  Purpose: To pause the video in the frame
 */
void AceVal::on_toolButton_4_clicked()
{
    Pipeline->SetPaused();
    std::cout<<"Duration is: "<<Pipeline->GetDuration()<<std::endl;
    std::cout<<"Duration is: "<<Pipeline->GetPosition()<<std::endl;
}

/*AceVal::on_toolButton_5_clicked
 *  Arguments:None
 *  Purpose: To stop the playback and release the pipeline
 */
void AceVal::on_toolButton_5_clicked()
{
    Pipeline->SetNull();
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
}

/*AceVal::mousePressEvent
 *  Arguments:
 */
void AceVal::mousePressEvent(QMouseEvent *event){
    int x = (event->pos()).x()-ui->frame_7->pos().x();
    int y = (event->pos()).y()-ui->frame_7->pos().y();
    if(0<=x && x<ui->frame_7->width() && 0<=y && y<ui->frame_7->height()){
        if (event->button() == Qt::LeftButton) {
            std::cout<<x<<","<<y<<std::endl;
         }
    }
}

void AceVal::mouseMoveEvent(QMouseEvent *event){
    int x = (event->pos()).x()-ui->frame_7->pos().x();
    int y = (event->pos()).y()-ui->frame_7->pos().y();
    if(0<=x && x<ui->frame_7->width() && 0<=y && y<ui->frame_7->height()){
        std::cout<<x<<","<<y<<std::endl;
    }
}

void AceVal::keyPressEvent(QKeyEvent * event){
    switch(event->key()){
        case 16777248:
            ShiftPressed = true;
            break;
        case 'S':
            if(ShiftPressed){
                Pipeline->SetPaused();
                CreateScene();
                Pipeline->SetPlaying();
            }
            break;
        case 'A':
            if(ShiftPressed)
            {
                Pipeline->SetPaused();
                AddPlayer();
                Pipeline->SetPlaying();
            }
            break;
        case 'P':
            if(ShiftPressed)
            {
                Pipeline->SetPaused();
                ChoosePlayer();
                Pipeline->SetPlaying();
            }
            break;
        default:
            break;
    }
}

void AceVal::keyReleaseEvent(QKeyEvent *event){
    if(event->key()==16777248){
        ShiftPressed = false;
    }
}

void AceVal::CreateScene(){
    SceneDialog Dialog(this);
    if(Dialog.exec() == QDialog::Accepted){
        Scene scene(Pipeline->GetPosition(),Dialog.GetLabel());
        Scenes << scene;
    }
}

void AceVal::AddPlayer(){
    PlayerDialog Dialog(this);
    if(Dialog.exec() == QDialog::Accepted){
        Player player(Dialog.GetName(), Dialog.GetTeam() + Dialog.GetNum(),Dialog.GetNum().toInt());
        if(Players.isEmpty() || (!Players.contains(player)))
            Players << player;
    }
}

void AceVal::ChoosePlayer(){
    PlayersControl Dialog(this,&Players, &Scenes[0].Players);
}
