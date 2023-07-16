/********************************************************************************
** Form generated from reading UI file 'userdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDETAILS_H
#define UI_USERDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDetails
{
public:
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *imageDisplay;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLabel *UserID;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLabel *Name;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *Alias;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *Password;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *ImageFile;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLabel *CostCenter;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *AlowToLogin;

    void setupUi(QDialog *UserDetails)
    {
        if (UserDetails->objectName().isEmpty())
            UserDetails->setObjectName(QString::fromUtf8("UserDetails"));
        UserDetails->resize(480, 640);
        horizontalLayout_19 = new QHBoxLayout(UserDetails);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(UserDetails);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16777215, 215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(200, 200));
        frame_2->setMaximumSize(QSize(16777215, 16777213));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        imageDisplay = new QLabel(frame_2);
        imageDisplay->setObjectName(QString::fromUtf8("imageDisplay"));
        imageDisplay->setMaximumSize(QSize(100, 100));
        imageDisplay->setScaledContents(true);

        horizontalLayout->addWidget(imageDisplay);


        horizontalLayout_2->addWidget(frame_2);

        horizontalSpacer_2 = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(UserDetails);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 380));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 454, 378));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_10 = new QFrame(scrollAreaWidgetContents);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(frame_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        UserID = new QLabel(frame_10);
        UserID->setObjectName(QString::fromUtf8("UserID"));

        horizontalLayout_9->addWidget(UserID);


        verticalLayout_2->addWidget(frame_10);

        frame_11 = new QFrame(scrollAreaWidgetContents);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(frame_11);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        Name = new QLabel(frame_11);
        Name->setObjectName(QString::fromUtf8("Name"));

        horizontalLayout_10->addWidget(Name);


        verticalLayout_2->addWidget(frame_11);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        Alias = new QLabel(frame_4);
        Alias->setObjectName(QString::fromUtf8("Alias"));

        horizontalLayout_4->addWidget(Alias);


        verticalLayout_2->addWidget(frame_4);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(frame_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        Password = new QLabel(frame_7);
        Password->setObjectName(QString::fromUtf8("Password"));

        horizontalLayout_6->addWidget(Password);


        verticalLayout_2->addWidget(frame_7);

        frame_5 = new QFrame(scrollAreaWidgetContents);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        ImageFile = new QLabel(frame_5);
        ImageFile->setObjectName(QString::fromUtf8("ImageFile"));

        horizontalLayout_5->addWidget(ImageFile);


        verticalLayout_2->addWidget(frame_5);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_8);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(frame_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        CostCenter = new QLabel(frame_8);
        CostCenter->setObjectName(QString::fromUtf8("CostCenter"));

        horizontalLayout_12->addWidget(CostCenter);


        verticalLayout_2->addWidget(frame_8);

        frame_6 = new QFrame(scrollAreaWidgetContents);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        AlowToLogin = new QLabel(frame_6);
        AlowToLogin->setObjectName(QString::fromUtf8("AlowToLogin"));

        horizontalLayout_7->addWidget(AlowToLogin);


        verticalLayout_2->addWidget(frame_6);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        horizontalLayout_19->addLayout(verticalLayout);


        retranslateUi(UserDetails);

        QMetaObject::connectSlotsByName(UserDetails);
    } // setupUi

    void retranslateUi(QDialog *UserDetails)
    {
        UserDetails->setWindowTitle(QCoreApplication::translate("UserDetails", "Dialog", nullptr));
        imageDisplay->setText(QCoreApplication::translate("UserDetails", "User Image", nullptr));
        label_9->setText(QCoreApplication::translate("UserDetails", "User ID :-                           ", nullptr));
        UserID->setText(QCoreApplication::translate("UserDetails", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("UserDetails", "Name :-                 ", nullptr));
        Name->setText(QCoreApplication::translate("UserDetails", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("UserDetails", "Alias :-        ", nullptr));
        Alias->setText(QCoreApplication::translate("UserDetails", "lineEditSubGroup", nullptr));
        label_6->setText(QCoreApplication::translate("UserDetails", "Password :-", nullptr));
        Password->setText(QCoreApplication::translate("UserDetails", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("UserDetails", "Image File:-                    ", nullptr));
        ImageFile->setText(QCoreApplication::translate("UserDetails", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("UserDetails", "Cost Center :-           ", nullptr));
        CostCenter->setText(QCoreApplication::translate("UserDetails", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("UserDetails", "Alow to Login:-                  ", nullptr));
        AlowToLogin->setText(QCoreApplication::translate("UserDetails", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDetails: public Ui_UserDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDETAILS_H
