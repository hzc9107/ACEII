#include "aceval.h"
#include "ui_aceval.h"

AceVal::AceVal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AceVal)
{
    ui->setupUi(this);
}

AceVal::~AceVal()
{
    delete ui;
}
