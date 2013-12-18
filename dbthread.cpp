#include "dbthread.h"

/*!
 * \brief DBthread::DBthread
 * \param parent
 *
 *  Constructor for building the DBthread,
 *  initializes the db driver.
 */
DBthread::DBthread(QObject *parent) :
    QObject(parent),
    result(true)
{
    db =  QSqlDatabase::addDatabase("QMYSQL");
    qDebug()<<"Running DBthread";
}

/*!
 * \brief DBthread::~DBthread
 *
 *  Destructor for the DBthread
 *  removes the db driver.
 */
DBthread::~DBthread(){
    QSqlDatabase::removeDatabase("QMYSQL");
}

/*!
 * \brief DBthread::connectDB
 * \param Host
 * \param User
 * \param Password
 *  Slot for communicating with the main thread and starting the database
 */
void DBthread::connectDB(QString Host, QString User, QString Password){
    db.setHostName(Host);
    db.setUserName(User);
    db.setPassword(Password);
    if(db.open()){
        emit connected(true);
    } else{
        emit connected(false);
    }
}

/*!
 * \brief DBthread::openDB
 * \param query
 *  Slot for getting the main's thread request of opening an existing DB
 */
void DBthread::openDB(QString query){
    QSqlQuery quer(query);
    if(!quer.isActive()){
        emit openDBFail(false);
    } else {
        emit openDBFail(true);
    }
}

/*!
 * \brief DBthread::newDB
 * \param query
 * \param DBname
 *
 *  Slot for creating a new db and all the tables needed inside it.
 */
void DBthread::newDB(QString query, QString DBname){
    QSqlQuery query1(query);
    if(query1.isActive())
        qDebug()<<"Base de Datos Creada";
    else{
        if(result){
            result = false;
            emit querResult(result,query1.lastError().text());
            qDebug()<<"Base de Datos no Creada";
        }
    }
    QSqlQuery query2("use " + DBname);
    if(query2.isActive())
        qDebug()<<"Colocado en la base de datos " << DBname;
    else{
        if(result){
            result = false;
            emit querResult(result,query2.lastError().text());
            qDebug() << query2.lastError();
        }
    }
    QSqlQuery PlayTab("create table if not exists players(id TINYINT UNSIGNED NOT NULL AUTO_INCREMENT, player_label VARCHAR(10) NOT NULL, PRIMARY KEY(id))");
    if(PlayTab.isActive())
        qDebug()<<"Tabla de jugadores creada";
    else{
        if(result){
            result = false;
            emit querResult(result,PlayTab.lastError().text());
        qDebug()<<"Tabla de jugadores no creada";
        }
    }
    QSqlQuery FrameTab("create table if not exists data(id INT UNSIGNED NOT NULL AUTO_INCREMENT,frame BIGINT UNSIGNED NOT NULL, player_id TINYINT UNSIGNED NOT NULL, xpos DOUBLE PRECISION UNSIGNED NOT NULL, ypos DOUBLE PRECISION UNSIGNED NOT NULL, FOREIGN KEY (player_id) REFERENCES players(id) ON DELETE CASCADE, PRIMARY KEY (id))");
    if(FrameTab.isActive())
        qDebug()<<"Tabla de datos creada";
    else{
        if(result){
            result = false;
            emit querResult(result,FrameTab.lastError().text());
            qDebug()<<"Tabla de datos no creada";
        }
    }
    if(result){
        qDebug() << result;
        emit querResult(result,QString());
    }
}

/*!
 * \brief DBthread::storeInfor
 * \param framesToInsert
 *
 *  Slot for storing frame information into the database
 */
void DBthread::storeInfor(QVector<Frame> *framesToInsert){
    qDebug()<< "Storing Info";
    QVector<Frame>::const_iterator it = framesToInsert->begin();
    while(it != framesToInsert->end()){
        QString query = QString("INSERT INTO data (frame, player_id, xpos, ypos) Values ( %1, %2, %3, %4)").arg(it->frameNum).arg(it->player_id).arg(it->xpos).arg(it->ypos);
        QSqlQuery quer(query);
        if(!quer.isActive())
            qDebug() << quer.lastError();
        it++;
    }
    delete framesToInsert;
}

/*!
 * \brief DBthread::storePlayers
 * \param start
 * \param end
 * \param players
 *  Slot for storing player information in the database
 */

void DBthread::storePlayers(int start, int end, QVector<Player> *players){
    int contador = start;
    while(contador != end){
        QSqlQuery quer(QString("INSERT INTO players (player_label) Values (\"%1\")").arg(players->at(contador).Tag));
        qDebug() << QString("INSERT INTO players (player_label) Values (\"%1\")").arg(players->at(contador).Tag);
        contador++;
    }
}
