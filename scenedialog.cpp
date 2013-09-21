#include "scenedialog.h"
#include "ui_scenedialog.h"
#include<iostream>
SceneDialog::SceneDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SceneDialog)
{
    ui->setupUi(this);
}

SceneDialog::~SceneDialog()
{
    delete ui;
}

QString SceneDialog::GetLabel(){
    return ui->lineEdit->text();
}
