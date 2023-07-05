/********************************************************************************
** Form generated from reading UI file 'createusertransaction.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSERTRANSACTION_H
#define UI_CREATEUSERTRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateUserTransaction
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *change_password;
    QCheckBox *change_privileges;
    QCheckBox *cycle_count;
    QCheckBox *free_issue_withdraw;
    QCheckBox *initiate_stock_transfer;
    QCheckBox *scrap;
    QCheckBox *load_rework;
    QCheckBox *move_stock;
    QPushButton *pushButton;

    void setupUi(QDialog *CreateUserTransaction)
    {
        if (CreateUserTransaction->objectName().isEmpty())
            CreateUserTransaction->setObjectName(QString::fromUtf8("CreateUserTransaction"));
        CreateUserTransaction->resize(640, 480);
        verticalLayout = new QVBoxLayout(CreateUserTransaction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(CreateUserTransaction);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(CreateUserTransaction);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 616, 361));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        change_password = new QCheckBox(scrollAreaWidgetContents);
        change_password->setObjectName(QString::fromUtf8("change_password"));

        verticalLayout_2->addWidget(change_password);

        change_privileges = new QCheckBox(scrollAreaWidgetContents);
        change_privileges->setObjectName(QString::fromUtf8("change_privileges"));

        verticalLayout_2->addWidget(change_privileges);

        cycle_count = new QCheckBox(scrollAreaWidgetContents);
        cycle_count->setObjectName(QString::fromUtf8("cycle_count"));

        verticalLayout_2->addWidget(cycle_count);

        free_issue_withdraw = new QCheckBox(scrollAreaWidgetContents);
        free_issue_withdraw->setObjectName(QString::fromUtf8("free_issue_withdraw"));

        verticalLayout_2->addWidget(free_issue_withdraw);

        initiate_stock_transfer = new QCheckBox(scrollAreaWidgetContents);
        initiate_stock_transfer->setObjectName(QString::fromUtf8("initiate_stock_transfer"));

        verticalLayout_2->addWidget(initiate_stock_transfer);

        scrap = new QCheckBox(scrollAreaWidgetContents);
        scrap->setObjectName(QString::fromUtf8("scrap"));

        verticalLayout_2->addWidget(scrap);

        load_rework = new QCheckBox(scrollAreaWidgetContents);
        load_rework->setObjectName(QString::fromUtf8("load_rework"));

        verticalLayout_2->addWidget(load_rework);

        move_stock = new QCheckBox(scrollAreaWidgetContents);
        move_stock->setObjectName(QString::fromUtf8("move_stock"));

        verticalLayout_2->addWidget(move_stock);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton = new QPushButton(CreateUserTransaction);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(CreateUserTransaction);

        QMetaObject::connectSlotsByName(CreateUserTransaction);
    } // setupUi

    void retranslateUi(QDialog *CreateUserTransaction)
    {
        CreateUserTransaction->setWindowTitle(QCoreApplication::translate("CreateUserTransaction", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateUserTransaction", "User ID               ", nullptr));
        change_password->setText(QCoreApplication::translate("CreateUserTransaction", "Change Password", nullptr));
        change_privileges->setText(QCoreApplication::translate("CreateUserTransaction", "Change Privileges", nullptr));
        cycle_count->setText(QCoreApplication::translate("CreateUserTransaction", "Cycle Count", nullptr));
        free_issue_withdraw->setText(QCoreApplication::translate("CreateUserTransaction", "Free Issue Withdraw", nullptr));
        initiate_stock_transfer->setText(QCoreApplication::translate("CreateUserTransaction", "Initiate Stock Transfer", nullptr));
        scrap->setText(QCoreApplication::translate("CreateUserTransaction", "Scrap", nullptr));
        load_rework->setText(QCoreApplication::translate("CreateUserTransaction", "Load Rework", nullptr));
        move_stock->setText(QCoreApplication::translate("CreateUserTransaction", "Move Stock", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateUserTransaction", "Grant Transaction Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateUserTransaction: public Ui_CreateUserTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSERTRANSACTION_H
