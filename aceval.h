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

#ifndef ACEVAL_H
#define ACEVAL_H

#include <QMainWindow>
#include <QVector>
#include <QtSql>
#include <QTimer>
#include <QQueue>
#include "scene.h"
#include "player.h"
#include "dbthread.h"
class pipeline;

namespace Ui {
class AceVal;
}

class AceVal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit AceVal(QWidget *parent = 0);
    ~AceVal();
    pipeline *Pipeline;
    QVector<Scene> Scenes;
    QVector<Player> Players;

signals:
    void Connect(QString Host, QString User, QString Password);
    void openThreadDB(QString query);
    void newDBCreate(QString query, QString DBname);
    void storeInfo(QVector<Frame> * framesToInsert);
    void storePlayers(int start, int end, QVector<Player> *players);

private slots:
    void on_toolButton_3_clicked();
    void on_toolButton_4_clicked();
    void on_toolButton_5_clicked();
    void on_spinBox_2_valueChanged(int arg1);
    void OnExit();
    void OnOpen();
    void connectDB();
    void newDB();
    void openDB();
    void firstTimer();
    void Timer();
    void ResultConnection(bool result);
    void openFailedDB(bool result);
    void queryResult(bool result, QString Error);
    void selectPlayer();
    void FrameByFrame();
private:
    bool firstTime;
    int firstFrame, nextFramePos, playerSizeOld, currentPlayer;
    float Miliseconds;
    QTimer Time;
    DBthread *thread1;
    QThread *thread;
    QVector<Frame> *FramesInf;
    Ui::AceVal *ui;
    bool DBConnected, DBOpened,rangeSet;
    bool ShiftPressed;
    void CusLay(void);
    void GstIFace(const char *filename);
    void ConnectMenu(void);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void CreateScene();
    void ChoosePlayer();
    void StoringInfo(QVector<Frame> *framesToInsert);
};

#endif // ACEVAL_H
