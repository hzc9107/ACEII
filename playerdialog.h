#ifndef PLAYERDIALOG_H
#define PLAYERDIALOG_H

#include <QDialog>

namespace Ui {
class PlayerDialog;
}

class PlayerDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit PlayerDialog(QWidget *parent = 0);
    ~PlayerDialog();
    QString GetName();
    QString GetNum();
    QString GetTeam();

private slots:
    void Accepted();
    
private:
    Ui::PlayerDialog *ui;
};

#endif // PLAYERDIALOG_H
