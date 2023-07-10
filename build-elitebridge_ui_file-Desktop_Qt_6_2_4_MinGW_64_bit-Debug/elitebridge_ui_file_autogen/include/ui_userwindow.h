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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
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
    QAction *actionAdd_User_To_Group;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QTableWidget *tableWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *user_id;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_23;
    QLineEdit *user_name;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_18;
    QLineEdit *user_alias;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_20;
    QLineEdit *user_password;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *user_costCenter;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_21;
    QLineEdit *user_image;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer;
    QRadioButton *allowedToLogin;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuView;
    QMenu *menuRecord;
    QMenu *menuAudit;
    QMenu *menuLocation;
    QMenu *menuUser;
    QMenu *menuTransaction;
    QMenu *menuGroups;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userWindow)
    {
        if (userWindow->objectName().isEmpty())
            userWindow->setObjectName(QString::fromUtf8("userWindow"));
        userWindow->resize(1163, 637);
        userWindow->setMaximumSize(QSize(16777215, 16777215));
        create_transaction = new QAction(userWindow);
        create_transaction->setObjectName(QString::fromUtf8("create_transaction"));
        actionupdate_transaction = new QAction(userWindow);
        actionupdate_transaction->setObjectName(QString::fromUtf8("actionupdate_transaction"));
        actionuser_grants = new QAction(userWindow);
        actionuser_grants->setObjectName(QString::fromUtf8("actionuser_grants"));
        actionAdd_User_To_Group = new QAction(userWindow);
        actionAdd_User_To_Group->setObjectName(QString::fromUtf8("actionAdd_User_To_Group"));
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
        tableWidget->setMaximumSize(QSize(16777215, 16777215));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(tableWidget);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 167));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1122, 420));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(92, 16777215));
        label_2->setBaseSize(QSize(154, 0));

        horizontalLayout->addWidget(label_2);

        user_id = new QLineEdit(frame_2);
        user_id->setObjectName(QString::fromUtf8("user_id"));

        horizontalLayout->addWidget(user_id);


        verticalLayout_2->addWidget(frame_2);

        frame_14 = new QFrame(scrollAreaWidgetContents);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_22 = new QHBoxLayout(frame_14);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_23 = new QLabel(frame_14);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMaximumSize(QSize(92, 16777215));
        label_23->setBaseSize(QSize(154, 0));

        horizontalLayout_22->addWidget(label_23);

        user_name = new QLineEdit(frame_14);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setBaseSize(QSize(29, 0));

        horizontalLayout_22->addWidget(user_name);


        verticalLayout_2->addWidget(frame_14);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_3);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMaximumSize(QSize(92, 16777215));
        label_18->setBaseSize(QSize(154, 0));

        horizontalLayout_17->addWidget(label_18);

        user_alias = new QLineEdit(frame_3);
        user_alias->setObjectName(QString::fromUtf8("user_alias"));

        horizontalLayout_17->addWidget(user_alias);


        verticalLayout_2->addWidget(frame_3);

        frame_5 = new QFrame(scrollAreaWidgetContents);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_19 = new QHBoxLayout(frame_5);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_20 = new QLabel(frame_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(92, 16777215));
        label_20->setBaseSize(QSize(154, 0));

        horizontalLayout_19->addWidget(label_20);

        user_password = new QLineEdit(frame_5);
        user_password->setObjectName(QString::fromUtf8("user_password"));

        horizontalLayout_19->addWidget(user_password);


        verticalLayout_2->addWidget(frame_5);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        user_costCenter = new QLineEdit(frame_4);
        user_costCenter->setObjectName(QString::fromUtf8("user_costCenter"));

        horizontalLayout_2->addWidget(user_costCenter);


        verticalLayout_2->addWidget(frame_4);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_8);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_21 = new QLabel(frame_8);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMaximumSize(QSize(92, 16777215));
        label_21->setBaseSize(QSize(154, 0));

        horizontalLayout_20->addWidget(label_21);

        user_image = new QLineEdit(frame_8);
        user_image->setObjectName(QString::fromUtf8("user_image"));

        horizontalLayout_20->addWidget(user_image);


        verticalLayout_2->addWidget(frame_8);

        frame_11 = new QFrame(scrollAreaWidgetContents);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_21 = new QHBoxLayout(frame_11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_22 = new QLabel(frame_11);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_21->addWidget(label_22);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer);

        allowedToLogin = new QRadioButton(frame_11);
        allowedToLogin->setObjectName(QString::fromUtf8("allowedToLogin"));

        horizontalLayout_21->addWidget(allowedToLogin);


        verticalLayout_2->addWidget(frame_11);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

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
        menuGroups = new QMenu(menuUser);
        menuGroups->setObjectName(QString::fromUtf8("menuGroups"));
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
        menuUser->addAction(menuGroups->menuAction());
        menuTransaction->addSeparator();
        menuTransaction->addSeparator();
        menuTransaction->addAction(create_transaction);
        menuTransaction->addAction(actionupdate_transaction);
        menuTransaction->addAction(actionuser_grants);
        menuGroups->addAction(actionAdd_User_To_Group);

        retranslateUi(userWindow);

        QMetaObject::connectSlotsByName(userWindow);
    } // setupUi

    void retranslateUi(QMainWindow *userWindow)
    {
        userWindow->setWindowTitle(QCoreApplication::translate("userWindow", "MainWindow", nullptr));
        create_transaction->setText(QCoreApplication::translate("userWindow", "create transaction", nullptr));
        actionupdate_transaction->setText(QCoreApplication::translate("userWindow", "update transaction", nullptr));
        actionuser_grants->setText(QCoreApplication::translate("userWindow", "user grants", nullptr));
        actionAdd_User_To_Group->setText(QCoreApplication::translate("userWindow", "Add User To Group", nullptr));
        label_2->setText(QCoreApplication::translate("userWindow", "User ID           ", nullptr));
        label_23->setText(QCoreApplication::translate("userWindow", "  Name           ", nullptr));
        label_18->setText(QCoreApplication::translate("userWindow", "Alias               ", nullptr));
        label_20->setText(QCoreApplication::translate("userWindow", "Password         ", nullptr));
        label->setText(QCoreApplication::translate("userWindow", "Cost Center    ", nullptr));
        label_21->setText(QCoreApplication::translate("userWindow", "Image File       ", nullptr));
        label_22->setText(QCoreApplication::translate("userWindow", "Allow to login", nullptr));
        allowedToLogin->setText(QString());
        menufile->setTitle(QCoreApplication::translate("userWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("userWindow", "View", nullptr));
        menuRecord->setTitle(QCoreApplication::translate("userWindow", "Record", nullptr));
        menuAudit->setTitle(QCoreApplication::translate("userWindow", "Audit", nullptr));
        menuLocation->setTitle(QCoreApplication::translate("userWindow", "Location", nullptr));
        menuUser->setTitle(QCoreApplication::translate("userWindow", "User", nullptr));
        menuTransaction->setTitle(QCoreApplication::translate("userWindow", "Transaction", nullptr));
        menuGroups->setTitle(QCoreApplication::translate("userWindow", "Groups", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userWindow: public Ui_userWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
