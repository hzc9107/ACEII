#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QDialog>

namespace Ui {
class DBConnection;
}

class DBConnection : public QDialog
{
    Q_OBJECT
    
public:
    explicit DBConnection(QWidget *parent = 0);
    ~DBConnection();
    QString getHostName();
    QString getUser();
    QString getPassword();
    
private:
    Ui::DBConnection *ui;
};

#endif // DBCONNECTION_H
