/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *browser;
    QPushButton *telegram;
    QPushButton *ide;
    QPushButton *terminal;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pvctrl;
    QPushButton *cTime;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 31);
        MainWindow->setMinimumSize(QSize(1920, 31));
        MainWindow->setMaximumSize(QSize(1920, 31));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 80);\n"
"color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 25));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        browser = new QPushButton(frame_2);
        browser->setObjectName("browser");
        browser->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        browser->setStyleSheet(QString::fromUtf8("selection-background-color: rgba(0, 0, 0, 189);\n"
"alternate-background-color: rgba(0, 0, 0, 189);"));
        browser->setFlat(true);

        horizontalLayout_2->addWidget(browser);

        telegram = new QPushButton(frame_2);
        telegram->setObjectName("telegram");
        telegram->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        telegram->setStyleSheet(QString::fromUtf8("selection-background-color: rgba(0, 0, 0, 189);"));
        telegram->setFlat(true);

        horizontalLayout_2->addWidget(telegram);

        ide = new QPushButton(frame_2);
        ide->setObjectName("ide");
        ide->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        ide->setStyleSheet(QString::fromUtf8("selection-background-color: rgba(0, 0, 0, 189);"));
        ide->setFlat(true);

        horizontalLayout_2->addWidget(ide);

        terminal = new QPushButton(frame_2);
        terminal->setObjectName("terminal");
        terminal->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        terminal->setAutoFillBackground(false);
        terminal->setStyleSheet(QString::fromUtf8("selection-background-color: rgba(0, 0, 0, 189);"));
        terminal->setFlat(true);

        horizontalLayout_2->addWidget(terminal);


        horizontalLayout->addWidget(frame_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pvctrl = new QPushButton(frame);
        pvctrl->setObjectName("pvctrl");
        pvctrl->setMaximumSize(QSize(35, 16777215));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        pvctrl->setFont(font1);
        pvctrl->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        pvctrl->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 104);"));
        pvctrl->setFlat(true);

        horizontalLayout->addWidget(pvctrl);

        cTime = new QPushButton(frame);
        cTime->setObjectName("cTime");
        cTime->setMaximumSize(QSize(40, 16777215));
        cTime->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 104);"));
        cTime->setAutoDefault(false);
        cTime->setFlat(true);

        horizontalLayout->addWidget(cTime);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        browser->setDefault(false);
        telegram->setDefault(true);
        ide->setDefault(true);
        terminal->setDefault(true);
        pvctrl->setDefault(false);
        cTime->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\363\260\243\207", nullptr));
        browser->setText(QCoreApplication::translate("MainWindow", "\357\211\251", nullptr));
        telegram->setText(QCoreApplication::translate("MainWindow", "\356\210\227", nullptr));
        ide->setText(QCoreApplication::translate("MainWindow", "\356\243\232", nullptr));
        terminal->setText(QCoreApplication::translate("MainWindow", "\356\252\205", nullptr));
        pvctrl->setText(QCoreApplication::translate("MainWindow", "\363\260\225\276", nullptr));
        cTime->setText(QCoreApplication::translate("MainWindow", "time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
