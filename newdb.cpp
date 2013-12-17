#include "newdb.h"
#include "ui_newdb.h"

NewDB::NewDB(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewDB)
{
    ui->setupUi(this);
}

NewDB::~NewDB()
{
    delete ui;
}

QString NewDB::getHome(){
    return ui->lineEdit_5->text();
}

QString NewDB::getAway(){
    return ui->lineEdit_4->text();
}

QString NewDB::getDay(){
    return ui->lineEdit_2->text();
}

QString NewDB::getMonth(){
    return ui->lineEdit_3->text();
}

QString NewDB::getYear(){
    return ui->lineEdit->text();
}
