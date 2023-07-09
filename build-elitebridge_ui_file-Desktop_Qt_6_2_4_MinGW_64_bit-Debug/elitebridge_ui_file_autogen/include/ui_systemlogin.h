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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SystemLogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *user_name;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *password;
    QPushButton *pushButton;

    void setupUi(QDialog *SystemLogin)
    {
        if (SystemLogin->objectName().isEmpty())
            SystemLogin->setObjectName(QString::fromUtf8("SystemLogin"));
        SystemLogin->resize(787, 524);
        verticalLayout = new QVBoxLayout(SystemLogin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SystemLogin);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(34);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/elitebridgelogollp.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        frame = new QFrame(SystemLogin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(5);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(322, 319));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/lock-svgrepo-com.svg")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(16);
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        user_name = new QLineEdit(frame_3);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setFont(font1);

        horizontalLayout_2->addWidget(user_name);


        verticalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Sunken);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        password = new QLineEdit(frame_4);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font1);

        horizontalLayout_3->addWidget(password);


        verticalLayout_2->addWidget(frame_4);


        horizontalLayout->addWidget(frame_2);


        verticalLayout->addWidget(frame);

        pushButton = new QPushButton(SystemLogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setPointSize(23);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:green;"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(SystemLogin);

        QMetaObject::connectSlotsByName(SystemLogin);
    } // setupUi

    void retranslateUi(QDialog *SystemLogin)
    {
        SystemLogin->setWindowTitle(QCoreApplication::translate("SystemLogin", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("SystemLogin", "User Name", nullptr));
        label_4->setText(QCoreApplication::translate("SystemLogin", "password   ", nullptr));
        pushButton->setText(QCoreApplication::translate("SystemLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemLogin: public Ui_SystemLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMLOGIN_H
