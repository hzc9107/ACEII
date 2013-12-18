#ifndef FrameStruct
#define FrameStruct
struct Frame{
    unsigned long int frameNum;
    unsigned int player_id;
    double xpos, ypos;
    Frame(unsigned long int frameNumA, unsigned int player_idA, double xposA, double yposA):
        frameNum(frameNumA),
        player_id(player_idA),
        xpos(xposA),
        ypos(yposA)
    {
    }
    Frame(){}
};
#endif

#ifndef DBTHREAD_H
#define DBTHREAD_H

#include <QObject>
#include <QtSql>
#include "player.h"
class DBthread : public QObject
{
    Q_OBJECT
public:
    explicit DBthread(QObject *parent = 0);
    ~DBthread();
    void run();
signals:
    void connected(bool isConnected);
    void openDBFail(bool result);
    void querResult(bool result, QString Error);
public slots:
    void connectDB(QString Host, QString User, QString Password);
    void openDB(QString query);
    void newDB(QString query, QString DBname);
    void storeInfor(QVector<Frame> *framesToInsert);
    void storePlayers(int start,int end,QVector<Player> *players);
private:
    QSqlDatabase db;
    bool result;
};

#endif // DBTHREAD_H
