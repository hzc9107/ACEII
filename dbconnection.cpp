#include "dbconnection.h"
#include "ui_dbconnection.h"

DBConnection::DBConnection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DBConnection)
{
    ui->setupUi(this);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
}

DBConnection::~DBConnection()
{
    delete ui;
}

QString DBConnection::getHostName(){
    return ui->lineEdit->text();
}

QString DBConnection::getUser(){
    return ui->lineEdit_2->text();
}

QString DBConnection::getPassword(){
    return ui->lineEdit_3->text();
}
