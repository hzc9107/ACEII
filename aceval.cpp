#include "aceval.h"
#include "ui_aceval.h"
#include "pipeline.h"
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

void AceVal::ConnectMenu(){
    connect(ui->actionOpen_File,SIGNAL(triggered()),this,SLOT(OnOpen()));
}

AceVal::~AceVal()
{
    delete ui;
}

void AceVal::on_toolButton_3_clicked()
{
    Pipeline->SetPlaying();
}



void AceVal::on_toolButton_4_clicked()
{
    Pipeline->SetPaused();
    std::cout<<"Duration is: "<<Pipeline->GetDuration()<<std::endl;
    std::cout<<"Duration is: "<<Pipeline->GetPosition()<<std::endl;
}

void AceVal::on_toolButton_5_clicked()
{
    Pipeline->SetNull();
}

void AceVal::on_spinBox_2_valueChanged(int arg1)
{
    Pipeline->ChangeSpeed(arg1);
}

void AceVal::OnExit(){
    Pipeline->SetNull();

}

void AceVal::OnOpen(){
    Pipeline->SetNull();
    delete Pipeline;
    QString filename = QFileDialog::getOpenFileName();
    QByteArray Bit8Filename = filename.toLocal8Bit();
    const char *filename_char = Bit8Filename.data();
    std::cout<<filename_char<<std::endl;
    GstIFace(filename_char);
}

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
