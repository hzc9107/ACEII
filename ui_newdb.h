/********************************************************************************
** Form generated from reading UI file 'newdb.ui'
**
** Created: Mon Dec 16 22:43:31 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDB_H
#define UI_NEWDB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewDB
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewDB)
    {
        if (NewDB->objectName().isEmpty())
            NewDB->setObjectName(QString::fromUtf8("NewDB"));
        NewDB->resize(400, 300);
        verticalLayout = new QVBoxLayout(NewDB);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(NewDB);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(NewDB);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(NewDB);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_2 = new QLineEdit(NewDB);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(NewDB);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(NewDB);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_4 = new QLineEdit(NewDB);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_2->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_5 = new QLineEdit(NewDB);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_3->addWidget(lineEdit_5);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(NewDB);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        lineEdit->raise();

        retranslateUi(NewDB);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewDB, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewDB, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewDB);
    } // setupUi

    void retranslateUi(QDialog *NewDB)
    {
        NewDB->setWindowTitle(QApplication::translate("NewDB", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewDB", "Away:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewDB", "Date:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewDB", "Home:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewDB: public Ui_NewDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDB_H
