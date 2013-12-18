#include "playerscontrol.h"
#include "ui_playerscontrol.h"
#include <QDebug>
PlayersControl::PlayersControl(QVector<Player> &PlayersPtr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayersControl),
    PlayIter(PlayersPtr),
    Players(PlayersPtr),
    counter(0)
{
    ui->setupUi(this);
    ui->tableWidget_2->setRowCount(40);
    ui->tableWidget_2->setColumnCount(3);
    QStringList Jugadores;
    Jugadores<<"Number"<<"Player"<<"Label";
    ui->tableWidget_2->setHorizontalHeaderLabels(Jugadores);
    for(int i = 0; i< ui->tableWidget_2->columnCount();++i){
            ui->tableWidget_2->horizontalHeader()->setResizeMode(i,QHeaderView::Stretch);
    }
    while(PlayIter.hasNext()){
        Player play = PlayIter.next();
        ui->tableWidget_2->setItem(counter,0,new QTableWidgetItem(QString::number(play.Number)));
        ui->tableWidget_2->setItem(counter,1,new QTableWidgetItem(play.Name));
        ui->tableWidget_2->setItem(counter,2,new QTableWidgetItem(play.Tag));
        counter++;
    }
    for(int i = Players.size(); i<40;++i){
        ui->tableWidget_2->setItem(i,0,new QTableWidgetItem());
        ui->tableWidget_2->setItem(i,1,new QTableWidgetItem());
        ui->tableWidget_2->setItem(i,2,new QTableWidgetItem());
    }
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(addPlayer()));
    connect(ui->tableWidget_2,SIGNAL(itemSelectionChanged()),this,SLOT(selectionChanged()));
}

void PlayersControl::selectionChanged(){
    QList<QTableWidgetItem *> prueba = ui->tableWidget_2->selectedItems();
    seleccion = prueba[0]->row();
}

int PlayersControl::getRow(){
    return seleccion;
}

void PlayersControl::addPlayer(){
    qDebug()<<"Player added";
    if(ui->radioButton->isChecked()){
        Players.append( Player(ui->lineEdit->text(),"Away"+ui->lineEdit_2->text(),ui->lineEdit_2->text().toInt()));
    } else {
        Players.append(Player(ui->lineEdit->text(),"Home"+ui->lineEdit_2->text(),ui->lineEdit_2->text().toInt()));
    }
    ui->tableWidget_2->setItem(counter,0,new QTableWidgetItem(QString::number(Players.last().Number)));
    ui->tableWidget_2->setItem(counter,1,new QTableWidgetItem(Players.last().Name));
    ui->tableWidget_2->setItem(counter++,2,new QTableWidgetItem(Players.last().Tag));
}

PlayersControl::~PlayersControl()
{
    delete ui;
}
