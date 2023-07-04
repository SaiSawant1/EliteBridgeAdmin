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
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *user_name;
    QPushButton *pushButton;

    void setupUi(QDialog *SystemLogin)
    {
        if (SystemLogin->objectName().isEmpty())
            SystemLogin->setObjectName(QString::fromUtf8("SystemLogin"));
        SystemLogin->resize(787, 524);
        hboxLayout = new QHBoxLayout(SystemLogin);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(SystemLogin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color:black;\n"
"font: 300 14pt \"Segoe UI Light\";"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        QFont font1;
        font1.setPointSize(21);
        password->setFont(font1);

        horizontalLayout_2->addWidget(password);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(34);
        label->setFont(font2);
        label->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/elitebridgelogollp.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"font: 300 10pt \"Segoe UI Light\";"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color:black;\n"
"font: 300 14pt \"Segoe UI Light\";"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        user_name = new QLineEdit(frame);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setFont(font1);

        horizontalLayout->addWidget(user_name);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"font: 300 10pt \"Segoe UI Light\";"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);


        verticalLayout->addWidget(frame);


        hboxLayout->addLayout(verticalLayout);


        retranslateUi(SystemLogin);

        QMetaObject::connectSlotsByName(SystemLogin);
    } // setupUi

    void retranslateUi(QDialog *SystemLogin)
    {
        SystemLogin->setWindowTitle(QCoreApplication::translate("SystemLogin", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("SystemLogin", "Password:                        ", nullptr));
        label->setText(QCoreApplication::translate("SystemLogin", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("SystemLogin", "Copyright \302\251 2023 EliteBridge Business Solution India LLP - All Rights Reserved.", nullptr));
        label_2->setText(QCoreApplication::translate("SystemLogin", "User Name:                     ", nullptr));
        pushButton->setText(QCoreApplication::translate("SystemLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemLogin: public Ui_SystemLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMLOGIN_H
