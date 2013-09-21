#ifndef PLAYERSCONTROL_H
#define PLAYERSCONTROL_H

#include <QDialog>
#include "scene.h"
#include "player.h"

namespace Ui {
class PlayersControl;
}

class PlayersControl : public QDialog
{
    Q_OBJECT
    
public:
    explicit PlayersControl(QWidget *parent = 0, QVector<Player> * = 0, QVector<int>* = 0);
    ~PlayersControl();
    
private:
    Ui::PlayersControl *ui;
    QVectorIterator<int> SceneIter;
    QVectorIterator<Player> PlayIter;
    QVector<int> Scenes;
    QVector<Player> Players;
};

#endif // PLAYERSCONTROL_H
