/********************************************************************************
** Form generated from reading UI file 'adminsetup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSETUP_H
#define UI_ADMINSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminSetup
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_userName;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *update;
    QPushButton *add;
    QPushButton *delete_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminSetup)
    {
        if (AdminSetup->objectName().isEmpty())
            AdminSetup->setObjectName(QString::fromUtf8("AdminSetup"));
        AdminSetup->resize(665, 351);
        centralwidget = new QWidget(AdminSetup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_3->addWidget(tableWidget);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_userName = new QLineEdit(frame_2);
        lineEdit_userName->setObjectName(QString::fromUtf8("lineEdit_userName"));

        horizontalLayout->addWidget(lineEdit_userName);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(frame_3);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout->addWidget(frame_3);

        update = new QPushButton(frame);
        update->setObjectName(QString::fromUtf8("update"));

        verticalLayout->addWidget(update);

        add = new QPushButton(frame);
        add->setObjectName(QString::fromUtf8("add"));

        verticalLayout->addWidget(add);

        delete_2 = new QPushButton(frame);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        verticalLayout->addWidget(delete_2);


        horizontalLayout_3->addWidget(frame);

        AdminSetup->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminSetup);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 665, 25));
        AdminSetup->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminSetup);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminSetup->setStatusBar(statusbar);

        retranslateUi(AdminSetup);

        QMetaObject::connectSlotsByName(AdminSetup);
    } // setupUi

    void retranslateUi(QMainWindow *AdminSetup)
    {
        AdminSetup->setWindowTitle(QCoreApplication::translate("AdminSetup", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AdminSetup", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("AdminSetup", "Password   ", nullptr));
        update->setText(QCoreApplication::translate("AdminSetup", "update", nullptr));
        add->setText(QCoreApplication::translate("AdminSetup", "add", nullptr));
        delete_2->setText(QCoreApplication::translate("AdminSetup", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminSetup: public Ui_AdminSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSETUP_H
