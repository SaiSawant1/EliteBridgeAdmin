/********************************************************************************
** Form generated from reading UI file 'updateuser.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEUSER_H
#define UI_UPDATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateUser
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
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
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_19;
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
    QPushButton *updateUser;

    void setupUi(QDialog *UpdateUser)
    {
        if (UpdateUser->objectName().isEmpty())
            UpdateUser->setObjectName(QString::fromUtf8("UpdateUser"));
        UpdateUser->resize(480, 571);
        verticalLayout = new QVBoxLayout(UpdateUser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(UpdateUser);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(UpdateUser);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 456, 484));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
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


        verticalLayout_3->addWidget(frame_2);

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


        verticalLayout_3->addWidget(frame_14);

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


        verticalLayout_3->addWidget(frame_3);

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


        verticalLayout_3->addWidget(frame_5);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_4);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(92, 16777215));
        label_19->setBaseSize(QSize(154, 0));

        horizontalLayout_18->addWidget(label_19);

        user_costCenter = new QLineEdit(frame_4);
        user_costCenter->setObjectName(QString::fromUtf8("user_costCenter"));

        horizontalLayout_18->addWidget(user_costCenter);


        verticalLayout_3->addWidget(frame_4);

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


        verticalLayout_3->addWidget(frame_8);

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


        verticalLayout_3->addWidget(frame_11);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        updateUser = new QPushButton(UpdateUser);
        updateUser->setObjectName(QString::fromUtf8("updateUser"));

        verticalLayout->addWidget(updateUser);


        retranslateUi(UpdateUser);

        QMetaObject::connectSlotsByName(UpdateUser);
    } // setupUi

    void retranslateUi(QDialog *UpdateUser)
    {
        UpdateUser->setWindowTitle(QCoreApplication::translate("UpdateUser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UpdateUser", "Update User", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateUser", "User ID           ", nullptr));
        label_23->setText(QCoreApplication::translate("UpdateUser", "  Name           ", nullptr));
        label_18->setText(QCoreApplication::translate("UpdateUser", "Alias               ", nullptr));
        label_20->setText(QCoreApplication::translate("UpdateUser", "Password         ", nullptr));
        label_19->setText(QCoreApplication::translate("UpdateUser", "Cost Center    ", nullptr));
        label_21->setText(QCoreApplication::translate("UpdateUser", "Image File       ", nullptr));
        label_22->setText(QCoreApplication::translate("UpdateUser", "Allow to login", nullptr));
        allowedToLogin->setText(QString());
        updateUser->setText(QCoreApplication::translate("UpdateUser", "update user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateUser: public Ui_UpdateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEUSER_H
