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
#include <QtWidgets/QHeaderView>
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
    QAction *create_transaction;
    QAction *actionupdate_transaction;
    QAction *actionuser_grants;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuView;
    QMenu *menuRecord;
    QMenu *menuAudit;
    QMenu *menuLocation;
    QMenu *menuUser;
    QMenu *menuTransaction;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userWindow)
    {
        if (userWindow->objectName().isEmpty())
            userWindow->setObjectName(QString::fromUtf8("userWindow"));
        userWindow->resize(1163, 523);
        create_transaction = new QAction(userWindow);
        create_transaction->setObjectName(QString::fromUtf8("create_transaction"));
        actionupdate_transaction = new QAction(userWindow);
        actionupdate_transaction->setObjectName(QString::fromUtf8("actionupdate_transaction"));
        actionuser_grants = new QAction(userWindow);
        actionuser_grants->setObjectName(QString::fromUtf8("actionuser_grants"));
        centralwidget = new QWidget(userWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);

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
        menuTransaction = new QMenu(menuUser);
        menuTransaction->setObjectName(QString::fromUtf8("menuTransaction"));
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
        menuUser->addAction(menuTransaction->menuAction());
        menuTransaction->addSeparator();
        menuTransaction->addSeparator();
        menuTransaction->addAction(create_transaction);
        menuTransaction->addAction(actionupdate_transaction);
        menuTransaction->addAction(actionuser_grants);

        retranslateUi(userWindow);

        QMetaObject::connectSlotsByName(userWindow);
    } // setupUi

    void retranslateUi(QMainWindow *userWindow)
    {
        userWindow->setWindowTitle(QCoreApplication::translate("userWindow", "MainWindow", nullptr));
        create_transaction->setText(QCoreApplication::translate("userWindow", "create transaction", nullptr));
        actionupdate_transaction->setText(QCoreApplication::translate("userWindow", "update transaction", nullptr));
        actionuser_grants->setText(QCoreApplication::translate("userWindow", "user grants", nullptr));
        menufile->setTitle(QCoreApplication::translate("userWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("userWindow", "View", nullptr));
        menuRecord->setTitle(QCoreApplication::translate("userWindow", "Record", nullptr));
        menuAudit->setTitle(QCoreApplication::translate("userWindow", "Audit", nullptr));
        menuLocation->setTitle(QCoreApplication::translate("userWindow", "Location", nullptr));
        menuUser->setTitle(QCoreApplication::translate("userWindow", "User", nullptr));
        menuTransaction->setTitle(QCoreApplication::translate("userWindow", "Transaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userWindow: public Ui_userWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
