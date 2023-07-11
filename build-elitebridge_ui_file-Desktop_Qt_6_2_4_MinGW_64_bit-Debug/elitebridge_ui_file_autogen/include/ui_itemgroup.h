/********************************************************************************
** Form generated from reading UI file 'itemgroup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMGROUP_H
#define UI_ITEMGROUP_H

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

class Ui_ItemGroup
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *itemgroupid;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *itemgroupname;
    QPushButton *update;
    QPushButton *add;
    QPushButton *delete_2;

    void setupUi(QDialog *ItemGroup)
    {
        if (ItemGroup->objectName().isEmpty())
            ItemGroup->setObjectName(QString::fromUtf8("ItemGroup"));
        ItemGroup->resize(713, 327);
        horizontalLayout_3 = new QHBoxLayout(ItemGroup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tableWidget = new QTableWidget(ItemGroup);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_3->addWidget(tableWidget);

        frame = new QFrame(ItemGroup);
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

        itemgroupid = new QLineEdit(frame_2);
        itemgroupid->setObjectName(QString::fromUtf8("itemgroupid"));

        horizontalLayout->addWidget(itemgroupid);


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

        itemgroupname = new QLineEdit(frame_3);
        itemgroupname->setObjectName(QString::fromUtf8("itemgroupname"));

        horizontalLayout_2->addWidget(itemgroupname);


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


        retranslateUi(ItemGroup);

        QMetaObject::connectSlotsByName(ItemGroup);
    } // setupUi

    void retranslateUi(QDialog *ItemGroup)
    {
        ItemGroup->setWindowTitle(QCoreApplication::translate("ItemGroup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ItemGroup", "Item Group ID", nullptr));
        label_2->setText(QCoreApplication::translate("ItemGroup", "Name   ", nullptr));
        update->setText(QCoreApplication::translate("ItemGroup", "update", nullptr));
        add->setText(QCoreApplication::translate("ItemGroup", "add", nullptr));
        delete_2->setText(QCoreApplication::translate("ItemGroup", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemGroup: public Ui_ItemGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMGROUP_H
