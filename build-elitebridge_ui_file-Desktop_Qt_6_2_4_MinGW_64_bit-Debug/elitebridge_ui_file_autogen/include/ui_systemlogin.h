/********************************************************************************
** Form generated from reading UI file 'systemlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMLOGIN_H
#define UI_SYSTEMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SystemLogin
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *user_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QPushButton *pushButton;

    void setupUi(QDialog *SystemLogin)
    {
        if (SystemLogin->objectName().isEmpty())
            SystemLogin->setObjectName(QString::fromUtf8("SystemLogin"));
        SystemLogin->resize(640, 480);
        hboxLayout = new QHBoxLayout(SystemLogin);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SystemLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777155, 131));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);

        verticalLayout->addWidget(label);

        frame = new QFrame(SystemLogin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(21);
        font1.setBold(true);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        user_name = new QLineEdit(frame);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        QFont font2;
        font2.setPointSize(21);
        user_name->setFont(font2);

        horizontalLayout->addWidget(user_name);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font2);

        horizontalLayout_2->addWidget(password);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setPointSize(18);
        pushButton->setFont(font3);

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        verticalLayout->addWidget(frame);


        hboxLayout->addLayout(verticalLayout);


        retranslateUi(SystemLogin);

        QMetaObject::connectSlotsByName(SystemLogin);
    } // setupUi

    void retranslateUi(QDialog *SystemLogin)
    {
        SystemLogin->setWindowTitle(QCoreApplication::translate("SystemLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SystemLogin", "System Login", nullptr));
        label_2->setText(QCoreApplication::translate("SystemLogin", "User Name:", nullptr));
        label_3->setText(QCoreApplication::translate("SystemLogin", "password:", nullptr));
        pushButton->setText(QCoreApplication::translate("SystemLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemLogin: public Ui_SystemLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMLOGIN_H
