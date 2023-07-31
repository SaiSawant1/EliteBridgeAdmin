/********************************************************************************
** Form generated from reading UI file 'newitemform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWITEMFORM_H
#define UI_NEWITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_NewItemForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *item_Id;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *item_name;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *item_alias;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *item_group;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *item_subGroup;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *item_supplierPartNumber;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *item_unitCost;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *item_usedUnitCost;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QLineEdit *item_packetSize;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *item_brand;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QLineEdit *item_image;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *item_NewUsed;
    QPushButton *pushButton;

    void setupUi(QDialog *NewItemForm)
    {
        if (NewItemForm->objectName().isEmpty())
            NewItemForm->setObjectName(QString::fromUtf8("NewItemForm"));
        NewItemForm->resize(589, 521);
        verticalLayout = new QVBoxLayout(NewItemForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(NewItemForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(NewItemForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -11, 548, 723));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        item_Id = new QLineEdit(frame_2);
        item_Id->setObjectName(QString::fromUtf8("item_Id"));

        horizontalLayout->addWidget(item_Id);


        verticalLayout_2->addWidget(frame_2);

        frame_9 = new QFrame(scrollAreaWidgetContents);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(frame_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        item_name = new QLineEdit(frame_9);
        item_name->setObjectName(QString::fromUtf8("item_name"));

        horizontalLayout_8->addWidget(item_name);


        verticalLayout_2->addWidget(frame_9);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(frame_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        item_alias = new QLineEdit(frame_7);
        item_alias->setObjectName(QString::fromUtf8("item_alias"));

        horizontalLayout_6->addWidget(item_alias);


        verticalLayout_2->addWidget(frame_7);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        item_group = new QLineEdit(frame_3);
        item_group->setObjectName(QString::fromUtf8("item_group"));

        horizontalLayout_2->addWidget(item_group);


        verticalLayout_2->addWidget(frame_3);

        frame_6 = new QFrame(scrollAreaWidgetContents);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        item_subGroup = new QLineEdit(frame_6);
        item_subGroup->setObjectName(QString::fromUtf8("item_subGroup"));

        horizontalLayout_5->addWidget(item_subGroup);


        verticalLayout_2->addWidget(frame_6);

        frame_10 = new QFrame(scrollAreaWidgetContents);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(frame_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        item_supplierPartNumber = new QLineEdit(frame_10);
        item_supplierPartNumber->setObjectName(QString::fromUtf8("item_supplierPartNumber"));

        horizontalLayout_9->addWidget(item_supplierPartNumber);


        verticalLayout_2->addWidget(frame_10);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        item_unitCost = new QLineEdit(frame_4);
        item_unitCost->setObjectName(QString::fromUtf8("item_unitCost"));

        horizontalLayout_3->addWidget(item_unitCost);


        verticalLayout_2->addWidget(frame_4);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(frame_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        item_usedUnitCost = new QLineEdit(frame_8);
        item_usedUnitCost->setObjectName(QString::fromUtf8("item_usedUnitCost"));

        horizontalLayout_7->addWidget(item_usedUnitCost);


        verticalLayout_2->addWidget(frame_8);

        frame_15 = new QFrame(scrollAreaWidgetContents);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_15);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_15 = new QLabel(frame_15);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_14->addWidget(label_15);

        item_packetSize = new QLineEdit(frame_15);
        item_packetSize->setObjectName(QString::fromUtf8("item_packetSize"));

        horizontalLayout_14->addWidget(item_packetSize);


        verticalLayout_2->addWidget(frame_15);

        frame_11 = new QFrame(scrollAreaWidgetContents);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(frame_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        item_brand = new QLineEdit(frame_11);
        item_brand->setObjectName(QString::fromUtf8("item_brand"));

        horizontalLayout_10->addWidget(item_brand);


        verticalLayout_2->addWidget(frame_11);

        frame_14 = new QFrame(scrollAreaWidgetContents);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_14);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_14 = new QLabel(frame_14);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_13->addWidget(label_14);

        item_image = new QLineEdit(frame_14);
        item_image->setObjectName(QString::fromUtf8("item_image"));

        horizontalLayout_13->addWidget(item_image);


        verticalLayout_2->addWidget(frame_14);

        frame_13 = new QFrame(scrollAreaWidgetContents);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_13);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(frame_13);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_12->addWidget(label_13);

        item_NewUsed = new QLineEdit(frame_13);
        item_NewUsed->setObjectName(QString::fromUtf8("item_NewUsed"));

        horizontalLayout_12->addWidget(item_NewUsed);


        verticalLayout_2->addWidget(frame_13);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton = new QPushButton(NewItemForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(NewItemForm);

        QMetaObject::connectSlotsByName(NewItemForm);
    } // setupUi

    void retranslateUi(QDialog *NewItemForm)
    {
        NewItemForm->setWindowTitle(QCoreApplication::translate("NewItemForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewItemForm", "Add New item", nullptr));
        label_2->setText(QCoreApplication::translate("NewItemForm", "Item Number              ", nullptr));
        label_9->setText(QCoreApplication::translate("NewItemForm", "Description                 ", nullptr));
        label_7->setText(QCoreApplication::translate("NewItemForm", "Alias                            ", nullptr));
        label_3->setText(QCoreApplication::translate("NewItemForm", "Item Group                 ", nullptr));
        label_6->setText(QCoreApplication::translate("NewItemForm", "Item Sub Group          ", nullptr));
        label_10->setText(QCoreApplication::translate("NewItemForm", "Supplier Part Number", nullptr));
        label_4->setText(QCoreApplication::translate("NewItemForm", "Unit Cost                     ", nullptr));
        label_8->setText(QCoreApplication::translate("NewItemForm", "Used Unit Cost           ", nullptr));
        label_15->setText(QCoreApplication::translate("NewItemForm", "Packet Size                  ", nullptr));
        label_11->setText(QCoreApplication::translate("NewItemForm", "Brand                          ", nullptr));
        label_14->setText(QCoreApplication::translate("NewItemForm", "Image File                   ", nullptr));
        label_13->setText(QCoreApplication::translate("NewItemForm", "New/Used Sensitive   ", nullptr));
        pushButton->setText(QCoreApplication::translate("NewItemForm", "Add New Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewItemForm: public Ui_NewItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWITEMFORM_H
