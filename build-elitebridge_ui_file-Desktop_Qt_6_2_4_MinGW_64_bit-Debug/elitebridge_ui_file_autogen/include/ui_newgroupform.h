/********************************************************************************
** Form generated from reading UI file 'newgroupform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGROUPFORM_H
#define UI_NEWGROUPFORM_H

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

class Ui_NewGroupForm
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *groupID;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *name;
    QPushButton *createNewGroup;

    void setupUi(QDialog *NewGroupForm)
    {
        if (NewGroupForm->objectName().isEmpty())
            NewGroupForm->setObjectName(QString::fromUtf8("NewGroupForm"));
        NewGroupForm->resize(533, 320);
        gridLayout = new QGridLayout(NewGroupForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(NewGroupForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:2px solid black"));

        verticalLayout->addWidget(label);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(1);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        groupID = new QLineEdit(frame_3);
        groupID->setObjectName(QString::fromUtf8("groupID"));

        horizontalLayout->addWidget(groupID);


        verticalLayout_2->addWidget(frame_3);

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        name = new QLineEdit(frame_5);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_2->addWidget(name);


        verticalLayout_2->addWidget(frame_5);


        gridLayout_2->addWidget(frame_4, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        createNewGroup = new QPushButton(frame);
        createNewGroup->setObjectName(QString::fromUtf8("createNewGroup"));

        verticalLayout->addWidget(createNewGroup);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(NewGroupForm);

        QMetaObject::connectSlotsByName(NewGroupForm);
    } // setupUi

    void retranslateUi(QDialog *NewGroupForm)
    {
        NewGroupForm->setWindowTitle(QCoreApplication::translate("NewGroupForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewGroupForm", "Create New Group", nullptr));
        label_2->setText(QCoreApplication::translate("NewGroupForm", "groupID     ", nullptr));
        label_3->setText(QCoreApplication::translate("NewGroupForm", "Description", nullptr));
        createNewGroup->setText(QCoreApplication::translate("NewGroupForm", "create new group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewGroupForm: public Ui_NewGroupForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGROUPFORM_H
