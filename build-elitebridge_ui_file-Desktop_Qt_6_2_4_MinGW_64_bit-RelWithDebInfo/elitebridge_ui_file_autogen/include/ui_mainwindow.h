/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton_7;
    QLabel *label_2;
    QPushButton *users;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_48;
    QPushButton *jobs;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QPushButton *items;
    QLabel *label_39;
    QPushButton *pushButton_39;
    QLabel *label_41;
    QLabel *label_38;
    QPushButton *pushButton_36;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuData;
    QMenu *menuConfig;
    QMenu *menuUtilites;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 601);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_16 = new QGridLayout(centralwidget);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/clean.png")));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 1, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 100));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/warehouse-svgrepo-com.svg")));
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        users = new QPushButton(centralwidget);
        users->setObjectName(QString::fromUtf8("users"));

        gridLayout->addWidget(users, 1, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/auxfiled.png")));

        gridLayout->addWidget(label_7, 0, 4, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8("img/user-svgrepo-com.svg")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/termino.png")));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_48 = new QLabel(centralwidget);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/jobs.png")));

        gridLayout->addWidget(label_48, 0, 5, 1, 1);

        jobs = new QPushButton(centralwidget);
        jobs->setObjectName(QString::fromUtf8("jobs"));

        gridLayout->addWidget(jobs, 1, 5, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));

        gridLayout_15->addLayout(gridLayout_13, 2, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        items = new QPushButton(centralwidget);
        items->setObjectName(QString::fromUtf8("items"));

        gridLayout_12->addWidget(items, 1, 1, 1, 1);

        label_39 = new QLabel(centralwidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setMaximumSize(QSize(100, 100));
        label_39->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/group-svgrepo-com.svg")));
        label_39->setScaledContents(true);

        gridLayout_12->addWidget(label_39, 0, 0, 1, 1);

        pushButton_39 = new QPushButton(centralwidget);
        pushButton_39->setObjectName(QString::fromUtf8("pushButton_39"));

        gridLayout_12->addWidget(pushButton_39, 1, 2, 1, 1);

        label_41 = new QLabel(centralwidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMaximumSize(QSize(100, 100));
        label_41->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/general-repair-repair-tool-svgrepo-com (1).svg")));
        label_41->setScaledContents(true);

        gridLayout_12->addWidget(label_41, 0, 1, 1, 1);

        label_38 = new QLabel(centralwidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMaximumSize(QSize(100, 100));
        label_38->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/admin-svgrepo-com.svg")));
        label_38->setScaledContents(true);

        gridLayout_12->addWidget(label_38, 0, 2, 1, 1);

        pushButton_36 = new QPushButton(centralwidget);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));

        gridLayout_12->addWidget(pushButton_36, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 0, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_11, 1, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_15, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuData = new QMenu(menubar);
        menuData->setObjectName(QString::fromUtf8("menuData"));
        menuConfig = new QMenu(menubar);
        menuConfig->setObjectName(QString::fromUtf8("menuConfig"));
        menuUtilites = new QMenu(menubar);
        menuUtilites->setObjectName(QString::fromUtf8("menuUtilites"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuData->menuAction());
        menubar->addAction(menuConfig->menuAction());
        menubar->addAction(menuUtilites->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "machine", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Terminology", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        label_4->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Aux", nullptr));
        label_2->setText(QString());
        users->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
        label_7->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        label_48->setText(QString());
        jobs->setText(QCoreApplication::translate("MainWindow", "Jobs", nullptr));
        items->setText(QCoreApplication::translate("MainWindow", "Items", nullptr));
        label_39->setText(QString());
        pushButton_39->setText(QCoreApplication::translate("MainWindow", " Setup User", nullptr));
        label_41->setText(QString());
        label_38->setText(QString());
        pushButton_36->setText(QCoreApplication::translate("MainWindow", "User Group", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuData->setTitle(QCoreApplication::translate("MainWindow", "Data", nullptr));
        menuConfig->setTitle(QCoreApplication::translate("MainWindow", "Config", nullptr));
        menuUtilites->setTitle(QCoreApplication::translate("MainWindow", "Utilites", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
