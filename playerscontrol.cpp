#include "playerscontrol.h"
#include "ui_playerscontrol.h"

PlayersControl::PlayersControl(QWidget *parent, QVector<Player> *PlayersPtr,QVector<int> *ScenePlayers) :
    QDialog(parent),
    ui(new Ui::PlayersControl),
    SceneIter(*ScenePlayers),
    PlayIter(*PlayersPtr)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(ScenePlayers->size());
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget_2->setRowCount(PlayersPtr->size());
    ui->tableWidget_2->setColumnCount(3);
    int counter = 0;
    while(SceneIter.hasNext()){
        int temp = SceneIter.next();
        ui->tableWidget->setItem(counter,0,new QTableWidgetItem(PlayersPtr->at(temp).Name));
        ui->tableWidget->setItem(counter,1,new QTableWidgetItem(QString::number(PlayersPtr->at(temp).Number)));
        ui->tableWidget->setItem(counter,2,new QTableWidgetItem(PlayersPtr->at(temp).Tag));
    }
}

PlayersControl::~PlayersControl()
{
    delete ui;
}
