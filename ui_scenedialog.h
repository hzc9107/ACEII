/********************************************************************************
** Form generated from reading UI file 'scenedialog.ui'
**
** Created: Mon Dec 16 22:43:31 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEDIALOG_H
#define UI_SCENEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SceneDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SceneDialog)
    {
        if (SceneDialog->objectName().isEmpty())
            SceneDialog->setObjectName(QString::fromUtf8("SceneDialog"));
        SceneDialog->resize(400, 127);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SceneDialog->sizePolicy().hasHeightForWidth());
        SceneDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SceneDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SceneDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(SceneDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SceneDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SceneDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SceneDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SceneDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SceneDialog);
    } // setupUi

    void retranslateUi(QDialog *SceneDialog)
    {
        SceneDialog->setWindowTitle(QApplication::translate("SceneDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SceneDialog", "Description:", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SceneDialog: public Ui_SceneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEDIALOG_H
