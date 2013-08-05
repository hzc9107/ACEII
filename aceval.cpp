#include "aceval.h"
#include "ui_aceval.h"
#include "pipeline.h"
#include <iostream>
AceVal::AceVal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AceVal)
{
    ui->setupUi(this);
    CusLay();
    GstIFace();

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

void AceVal::GstIFace(){
    unsigned long WinID;
    WinID = ui->frame_7->winId();
    QApplication::syncX();
    Pipeline = new pipeline(WinID);
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
