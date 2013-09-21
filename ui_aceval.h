/********************************************************************************
** Form generated from reading UI file 'aceval.ui'
**
** Created: Tue Sep 10 22:39:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACEVAL_H
#define UI_ACEVAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AceVal
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionClose;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_8;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AceVal)
    {
        if (AceVal->objectName().isEmpty())
            AceVal->setObjectName(QString::fromUtf8("AceVal"));
        AceVal->resize(758, 499);
        actionOpen_File = new QAction(AceVal);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionSave_File = new QAction(AceVal);
        actionSave_File->setObjectName(QString::fromUtf8("actionSave_File"));
        actionClose = new QAction(AceVal);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        centralWidget = new QWidget(AceVal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_10 = new QVBoxLayout(centralWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame_7 = new QFrame(centralWidget);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy);
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(frame_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));

        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_10->addLayout(horizontalLayout_5);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMaximumSize(QSize(111, 15));

        verticalLayout_7->addWidget(label_11);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMaximumSize(QSize(57, 15));

        verticalLayout_7->addWidget(label_12);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(horizontalSlider);

        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy1.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy1);
        spinBox_2->setMaximumSize(QSize(70, 24));
        spinBox_2->setAlignment(Qt::AlignCenter);
        spinBox_2->setSuffix(QString::fromUtf8("%"));
        spinBox_2->setMaximum(9999);
        spinBox_2->setValue(100);

        verticalLayout_8->addWidget(spinBox_2);


        horizontalLayout_6->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(35, 35));

        horizontalLayout_7->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(35, 35));

        horizontalLayout_7->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setMinimumSize(QSize(35, 35));

        horizontalLayout_7->addWidget(toolButton_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_9);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line);


        verticalLayout_10->addLayout(horizontalLayout_8);

        AceVal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AceVal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 758, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        AceVal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AceVal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AceVal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AceVal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AceVal->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionSave_File);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);

        retranslateUi(AceVal);

        QMetaObject::connectSlotsByName(AceVal);
    } // setupUi

    void retranslateUi(QMainWindow *AceVal)
    {
        AceVal->setWindowTitle(QApplication::translate("AceVal", "AceVal", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setText(QApplication::translate("AceVal", "Open File", 0, QApplication::UnicodeUTF8));
        actionSave_File->setText(QApplication::translate("AceVal", "Recent Files", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("AceVal", "Close", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("AceVal", "Current Frame:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("AceVal", "Speed:", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("AceVal", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("AceVal", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AceVal: public Ui_AceVal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACEVAL_H
