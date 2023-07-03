/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_9;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuView;
    QMenu *menuRecord;
    QMenu *menuAudit;
    QMenu *menuLocation;
    QMenu *menuUser;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userWindow)
    {
        if (userWindow->objectName().isEmpty())
            userWindow->setObjectName(QString::fromUtf8("userWindow"));
        userWindow->resize(1163, 421);
        centralwidget = new QWidget(userWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/auxfiled.png")));

        horizontalLayout->addWidget(label_7);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/jobgroup.png")));

        horizontalLayout->addWidget(label_6);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/save.png")));

        horizontalLayout->addWidget(label_5);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/undo.png")));

        horizontalLayout->addWidget(label_4);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/db.png")));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/search.png")));

        horizontalLayout->addWidget(label_3);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/delete.png")));

        horizontalLayout->addWidget(label);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/exit.png")));

        horizontalLayout->addWidget(label_9);


        verticalLayout->addWidget(frame);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        userWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1163, 25));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuRecord = new QMenu(menubar);
        menuRecord->setObjectName(QString::fromUtf8("menuRecord"));
        menuAudit = new QMenu(menubar);
        menuAudit->setObjectName(QString::fromUtf8("menuAudit"));
        menuLocation = new QMenu(menubar);
        menuLocation->setObjectName(QString::fromUtf8("menuLocation"));
        menuUser = new QMenu(menubar);
        menuUser->setObjectName(QString::fromUtf8("menuUser"));
        userWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(userWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        userWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuRecord->menuAction());
        menubar->addAction(menuAudit->menuAction());
        menubar->addAction(menuLocation->menuAction());
        menubar->addAction(menuUser->menuAction());

        retranslateUi(userWindow);

        QMetaObject::connectSlotsByName(userWindow);
    } // setupUi

    void retranslateUi(QMainWindow *userWindow)
    {
        userWindow->setWindowTitle(QCoreApplication::translate("userWindow", "MainWindow", nullptr));
        label_7->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_4->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QString());
        label_9->setText(QString());
        menufile->setTitle(QCoreApplication::translate("userWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("userWindow", "View", nullptr));
        menuRecord->setTitle(QCoreApplication::translate("userWindow", "Record", nullptr));
        menuAudit->setTitle(QCoreApplication::translate("userWindow", "Audit", nullptr));
        menuLocation->setTitle(QCoreApplication::translate("userWindow", "Location", nullptr));
        menuUser->setTitle(QCoreApplication::translate("userWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userWindow: public Ui_userWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
