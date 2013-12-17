/********************************************************************************
** Form generated from reading UI file 'dbconnection.ui'
**
** Created: Mon Dec 16 22:43:31 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBCONNECTION_H
#define UI_DBCONNECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DBConnection
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DBConnection)
    {
        if (DBConnection->objectName().isEmpty())
            DBConnection->setObjectName(QString::fromUtf8("DBConnection"));
        DBConnection->resize(400, 300);
        verticalLayout = new QVBoxLayout(DBConnection);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_2 = new QLineEdit(DBConnection);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(DBConnection);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(DBConnection);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit = new QLineEdit(DBConnection);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(DBConnection);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(DBConnection);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(DBConnection);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DBConnection);
        QObject::connect(buttonBox, SIGNAL(accepted()), DBConnection, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DBConnection, SLOT(reject()));

        QMetaObject::connectSlotsByName(DBConnection);
    } // setupUi

    void retranslateUi(QDialog *DBConnection)
    {
        DBConnection->setWindowTitle(QApplication::translate("DBConnection", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DBConnection", "Password:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DBConnection", "Username:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DBConnection", "Host:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DBConnection: public Ui_DBConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBCONNECTION_H
