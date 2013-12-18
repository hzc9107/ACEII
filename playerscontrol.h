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
    explicit PlayersControl(QVector<Player> &, QWidget *parent = 0);
    ~PlayersControl();
    int getRow();

private slots:
    void addPlayer();
    void selectionChanged();

private:
    Ui::PlayersControl *ui;
    QVectorIterator<Player> PlayIter;
    QVector<Player> &Players;
    int counter, seleccion;
};

#endif // PLAYERSCONTROL_H
