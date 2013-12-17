#ifndef NEWDB_H
#define NEWDB_H

#include <QDialog>

namespace Ui {
class NewDB;
}

class NewDB : public QDialog
{
    Q_OBJECT
    
public:
    explicit NewDB(QWidget *parent = 0);
    ~NewDB();
    QString getHome();
    QString getAway();
    QString getDay();
    QString getMonth();
    QString getYear();
    
private:
    Ui::NewDB *ui;
};

#endif // NEWDB_H
