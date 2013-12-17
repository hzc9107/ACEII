#include "playerscontrol.h"
#include "ui_playerscontrol.h"

PlayersControl::PlayersControl(QVector<Player> &PlayersPtr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayersControl),
    PlayIter(PlayersPtr),
    Players(PlayersPtr)
{
    ui->setupUi(this);
    ui->tableWidget_2->setRowCount(PlayersPtr.size());
    ui->tableWidget_2->setColumnCount(3);
    int counter = 0;
    QStringList Jugadores;
    Jugadores<<"Number"<<"Player"<<"Label";
    ui->tableWidget_2->setHorizontalHeaderLabels(Jugadores);
    for(int i = 0; i< ui->tableWidget_2->columnCount();++i){
            ui->tableWidget_2->horizontalHeader()->setResizeMode(i,QHeaderView::Stretch);
    }
    while(PlayIter.hasNext()){
        Player play = PlayIter.next();
        ui->tableWidget_2->setItem(counter,0,new QTableWidgetItem(play.Name));
        ui->tableWidget_2->setItem(counter,1,new QTableWidgetItem(play.Number));
        ui->tableWidget_2->setItem(counter,2,new QTableWidgetItem(play.Tag));
        counter++;
    }
}

void PlayersControl::addPlayer(){
    if(ui->radioButton->isChecked()){
        Players.append( Player(ui->lineEdit->text(),"Away"+ui->lineEdit_2->text(),ui->lineEdit_2->text().toInt()));
    } else {
        Players.append(Player(ui->lineEdit->text(),"Home"+ui->lineEdit_2->text(),ui->lineEdit_2->text().toInt()));
    }
}

PlayersControl::~PlayersControl()
{
    delete ui;
}
