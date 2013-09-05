/********************************************************************************
** Form generated from reading UI file 'aceval.ui'
**
** Created: Mon Aug 5 15:00:47 2013
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
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
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
    QGridLayout *gridLayout;
    QLabel *label_5;
    QFrame *frame;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QGridLayout *gridLayout_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;
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
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QFrame *frame_5;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
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
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMaximumSize(QSize(91, 15));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 0, 1, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(57, 15));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(57, 15));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMaximumSize(QSize(57, 15));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(113, 23));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMaximumSize(QSize(113, 23));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setMaximumSize(QSize(113, 23));

        verticalLayout->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_3, 0, 1, 1, 1);

        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_4, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMaximumSize(QSize(57, 15));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMaximumSize(QSize(84, 15));

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);
        lineEdit_4->setMaximumSize(QSize(113, 23));

        verticalLayout_4->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        sizePolicy1.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy1);
        lineEdit_5->setMaximumSize(QSize(113, 23));

        verticalLayout_4->addWidget(lineEdit_5);


        horizontalLayout_2->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMaximumSize(QSize(91, 15));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


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

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMaximumSize(QSize(200, 40));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(frame_5, 0, 1, 1, 1);

        frame_6 = new QFrame(centralWidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(frame_6, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMaximumSize(QSize(111, 15));

        horizontalLayout_4->addWidget(label_10);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_3->addWidget(toolButton);

        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout_3->addWidget(toolButton_2);


        verticalLayout_6->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout_6, 1, 1, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_4);


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
        label_5->setText(QApplication::translate("AceVal", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Player Info:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AceVal", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AceVal", "Number:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AceVal", "Team:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AceVal", "Type:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AceVal", "Completion:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AceVal", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Action Info:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("AceVal", "Current Frame:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("AceVal", "Speed:", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("AceVal", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Scene Control:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("AceVal", "Scene Selection:", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("AceVal", "...", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("AceVal", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("AceVal", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AceVal: public Ui_AceVal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACEVAL_H
