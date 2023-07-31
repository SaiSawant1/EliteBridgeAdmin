/********************************************************************************
** Form generated from reading UI file 'selectgroup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTGROUP_H
#define UI_SELECTGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectGroup
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *selectedIDLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *addToGroup;

    void setupUi(QDialog *selectGroup)
    {
        if (selectGroup->objectName().isEmpty())
            selectGroup->setObjectName(QString::fromUtf8("selectGroup"));
        selectGroup->resize(480, 640);
        verticalLayout = new QVBoxLayout(selectGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(selectGroup);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        selectedIDLabel = new QLabel(frame);
        selectedIDLabel->setObjectName(QString::fromUtf8("selectedIDLabel"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setUnderline(true);
        font.setStrikeOut(false);
        selectedIDLabel->setFont(font);

        horizontalLayout->addWidget(selectedIDLabel);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(selectGroup);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 456, 509));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        addToGroup = new QPushButton(selectGroup);
        addToGroup->setObjectName(QString::fromUtf8("addToGroup"));

        verticalLayout->addWidget(addToGroup);


        retranslateUi(selectGroup);

        QMetaObject::connectSlotsByName(selectGroup);
    } // setupUi

    void retranslateUi(QDialog *selectGroup)
    {
        selectGroup->setWindowTitle(QCoreApplication::translate("selectGroup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("selectGroup", "Select Group For UserID:-", nullptr));
        selectedIDLabel->setText(QCoreApplication::translate("selectGroup", "userID", nullptr));
        addToGroup->setText(QCoreApplication::translate("selectGroup", "add user to Groups", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectGroup: public Ui_selectGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTGROUP_H
