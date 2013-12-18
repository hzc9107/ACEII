#include "dbconnection.h"
#include "ui_dbconnection.h"

/*!
 * \brief DBConnection::DBConnection
 * \param parent
 *  Building the connection dialog for creating a link with
 *  DB driver.
 */
DBConnection::DBConnection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DBConnection)
{
    ui->setupUi(this);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
}

/*!
 * \brief DBConnection::~DBConnection
 *  DBConnection destructor created by qt
 */
DBConnection::~DBConnection()
{
    delete ui;
}

/*!
 * \brief DBConnection::getHostName
 * \return the host name
 *  Public function for accesing the hostname attribute
 */
QString DBConnection::getHostName(){
    return ui->lineEdit->text();
}

/*!
 * \brief DBConnection::getUser
 * \return The user name
 *  Public function for accesing the username attribute
 */
QString DBConnection::getUser(){
    return ui->lineEdit_2->text();
}

/*!
 * \brief DBConnection::getPassword
 * \return The db password
 *  Public function for accesing the password attribute.
 */
QString DBConnection::getPassword(){
    return ui->lineEdit_3->text();
}
