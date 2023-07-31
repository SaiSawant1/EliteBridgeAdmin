/********************************************************************************
** Form generated from reading UI file 'itemsubgroup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSUBGROUP_H
#define UI_ITEMSUBGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ItemSubGroup
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *itemSubGroupid;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *itemSubGroupname;
    QPushButton *update;
    QPushButton *add;
    QPushButton *delete_2;

    void setupUi(QDialog *ItemSubGroup)
    {
        if (ItemSubGroup->objectName().isEmpty())
            ItemSubGroup->setObjectName(QString::fromUtf8("ItemSubGroup"));
        ItemSubGroup->resize(975, 640);
        horizontalLayout_3 = new QHBoxLayout(ItemSubGroup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tableWidget = new QTableWidget(ItemSubGroup);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_3->addWidget(tableWidget);

        frame = new QFrame(ItemSubGroup);
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

        itemSubGroupid = new QLineEdit(frame_2);
        itemSubGroupid->setObjectName(QString::fromUtf8("itemSubGroupid"));

        horizontalLayout->addWidget(itemSubGroupid);


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

        itemSubGroupname = new QLineEdit(frame_3);
        itemSubGroupname->setObjectName(QString::fromUtf8("itemSubGroupname"));

        horizontalLayout_2->addWidget(itemSubGroupname);


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


        retranslateUi(ItemSubGroup);

        QMetaObject::connectSlotsByName(ItemSubGroup);
    } // setupUi

    void retranslateUi(QDialog *ItemSubGroup)
    {
        ItemSubGroup->setWindowTitle(QCoreApplication::translate("ItemSubGroup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ItemSubGroup", "Item Group ID", nullptr));
        label_2->setText(QCoreApplication::translate("ItemSubGroup", "Name   ", nullptr));
        update->setText(QCoreApplication::translate("ItemSubGroup", "update", nullptr));
        add->setText(QCoreApplication::translate("ItemSubGroup", "add", nullptr));
        delete_2->setText(QCoreApplication::translate("ItemSubGroup", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemSubGroup: public Ui_ItemSubGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSUBGROUP_H
