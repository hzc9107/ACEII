#include "playerdialog.h"
#include "ui_playerdialog.h"
#include <QMessageBox>

PlayerDialog::PlayerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayerDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(Accepted()));
}

PlayerDialog::~PlayerDialog()
{
    delete ui;
}

QString PlayerDialog::GetName(){
    return ui->lineEdit->text();
}

QString PlayerDialog::GetNum(){
    return ui->lineEdit_2->text();
}

QString PlayerDialog::GetTeam(){
    QString Team;
    if(ui->radioButton_2->isChecked())
        Team = "Away";
    else
        Team = "Home";
    return Team;
}

void PlayerDialog::Accepted(){
    if(ui->radioButton->isChecked() || ui->radioButton_2->isChecked())
        this->accept();
    else
        QMessageBox::critical(this, tr("Error"),tr("Please Choose one of the Options Home or Away\n"),QMessageBox::Ok);
}
