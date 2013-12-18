#include "newdb.h"
#include "ui_newdb.h"

/*!
 * \brief NewDB::NewDB
 * \param parent
 *  Constructor for initializing the new db dialog
 */
NewDB::NewDB(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewDB)
{
    ui->setupUi(this);
}

/*!
 * \brief NewDB::~NewDB
 *
 *  Destructor for the NewDb dialog created by qt
 */
NewDB::~NewDB()
{
    delete ui;
}

/*!
 * \brief NewDB::getHome
 * \return Name of the Home team
 * Function to access the name of the home team
 */
QString NewDB::getHome(){
    return ui->lineEdit_5->text();
}

/*!
 * \brief NewDB::getAway
 * \return Name of the visitor team
 *
 *  Function to access the name of the visitor team
 */
QString NewDB::getAway(){
    return ui->lineEdit_4->text();
}

/*!
 * \brief NewDB::getDay
 * \return Day of the match
 *  Function to access the day number of the match
 */
QString NewDB::getDay(){
    return ui->lineEdit_2->text();
}

/*!
 * \brief NewDB::getMonth
 * \return Month of the match
 *
 *  Function to access the month number of the match
 */
QString NewDB::getMonth(){
    return ui->lineEdit_3->text();
}

/*!
 * \brief NewDB::getYear
 * \return The year
 *
 *  Function to access the year in which the match was carried out
 */
QString NewDB::getYear(){
    return ui->lineEdit->text();
}
