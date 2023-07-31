/********************************************************************************
** Form generated from reading UI file 'usergroupmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERGROUPMAINWINDOW_H
#define UI_USERGROUPMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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

class Ui_UserGroupMainWindow
{
public:
    QAction *actionGroup_Transaction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidget;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *groupID;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *name;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuRecord;
    QMenu *menuAudit;
    QMenu *menuLocation;
    QMenu *menuUser;
    QMenu *menuTransaction;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserGroupMainWindow)
    {
        if (UserGroupMainWindow->objectName().isEmpty())
            UserGroupMainWindow->setObjectName(QString::fromUtf8("UserGroupMainWindow"));
        UserGroupMainWindow->resize(730, 480);
        actionGroup_Transaction = new QAction(UserGroupMainWindow);
        actionGroup_Transaction->setObjectName(QString::fromUtf8("actionGroup_Transaction"));
        centralwidget = new QWidget(UserGroupMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tableWidget = new QTableWidget(frame_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);

        horizontalLayout_3->addWidget(tableWidget);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(1);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        groupID = new QLineEdit(frame_5);
        groupID->setObjectName(QString::fromUtf8("groupID"));

        horizontalLayout->addWidget(groupID);


        verticalLayout_2->addWidget(frame_5);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        name = new QLineEdit(frame_6);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_2->addWidget(name);


        verticalLayout_2->addWidget(frame_6);


        gridLayout_2->addWidget(frame_4, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(frame_3);


        verticalLayout->addWidget(frame_2);

        UserGroupMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserGroupMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 730, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
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
        UserGroupMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserGroupMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UserGroupMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuRecord->menuAction());
        menubar->addAction(menuAudit->menuAction());
        menubar->addAction(menuLocation->menuAction());
        menubar->addAction(menuUser->menuAction());
        menuUser->addAction(menuTransaction->menuAction());
        menuTransaction->addAction(actionGroup_Transaction);

        retranslateUi(UserGroupMainWindow);

        QMetaObject::connectSlotsByName(UserGroupMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserGroupMainWindow)
    {
        UserGroupMainWindow->setWindowTitle(QCoreApplication::translate("UserGroupMainWindow", "MainWindow", nullptr));
        actionGroup_Transaction->setText(QCoreApplication::translate("UserGroupMainWindow", "Group Transaction", nullptr));
        label_2->setText(QCoreApplication::translate("UserGroupMainWindow", "groupID     ", nullptr));
        label_3->setText(QCoreApplication::translate("UserGroupMainWindow", "Description", nullptr));
        menuFile->setTitle(QCoreApplication::translate("UserGroupMainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("UserGroupMainWindow", "View", nullptr));
        menuRecord->setTitle(QCoreApplication::translate("UserGroupMainWindow", "Record", nullptr));
        menuAudit->setTitle(QCoreApplication::translate("UserGroupMainWindow", "Audit", nullptr));
        menuLocation->setTitle(QCoreApplication::translate("UserGroupMainWindow", "Location", nullptr));
        menuUser->setTitle(QCoreApplication::translate("UserGroupMainWindow", "User", nullptr));
        menuTransaction->setTitle(QCoreApplication::translate("UserGroupMainWindow", "Transaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserGroupMainWindow: public Ui_UserGroupMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERGROUPMAINWINDOW_H
