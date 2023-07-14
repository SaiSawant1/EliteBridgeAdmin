/********************************************************************************
** Form generated from reading UI file 'itemdetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMDETAILDIALOG_H
#define UI_ITEMDETAILDIALOG_H

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

class Ui_ItemDetailDialog
{
public:
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
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *lineEditID;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLabel *lineEditName;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLabel *lineEditAlias;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLabel *lineEditGroup;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *lineEditSubGroup;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *lineEditSupplier;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *lineEditUnitCost;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLabel *lineEditUnitUsed;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *lineEditPacket;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLabel *lineEditBrand;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QLabel *lineEditImage;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QLabel *lineEditNewUsed;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLabel *lineEditLocation;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QLabel *lineEditmax;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLabel *lineEditmin;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QLabel *lineEditcritical;

    void setupUi(QDialog *ItemDetailDialog)
    {
        if (ItemDetailDialog->objectName().isEmpty())
            ItemDetailDialog->setObjectName(QString::fromUtf8("ItemDetailDialog"));
        ItemDetailDialog->resize(480, 640);
        verticalLayout = new QVBoxLayout(ItemDetailDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ItemDetailDialog);
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

        scrollArea = new QScrollArea(ItemDetailDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 380));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -453, 439, 831));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEditID = new QLabel(frame_3);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));

        horizontalLayout_3->addWidget(lineEditID);


        verticalLayout_2->addWidget(frame_3);

        frame_9 = new QFrame(scrollAreaWidgetContents);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(frame_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEditName = new QLabel(frame_9);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_8->addWidget(lineEditName);


        verticalLayout_2->addWidget(frame_9);

        frame_10 = new QFrame(scrollAreaWidgetContents);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(frame_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEditAlias = new QLabel(frame_10);
        lineEditAlias->setObjectName(QString::fromUtf8("lineEditAlias"));

        horizontalLayout_9->addWidget(lineEditAlias);


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

        lineEditGroup = new QLabel(frame_11);
        lineEditGroup->setObjectName(QString::fromUtf8("lineEditGroup"));

        horizontalLayout_10->addWidget(lineEditGroup);


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

        lineEditSubGroup = new QLabel(frame_4);
        lineEditSubGroup->setObjectName(QString::fromUtf8("lineEditSubGroup"));

        horizontalLayout_4->addWidget(lineEditSubGroup);


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

        lineEditSupplier = new QLabel(frame_7);
        lineEditSupplier->setObjectName(QString::fromUtf8("lineEditSupplier"));

        horizontalLayout_6->addWidget(lineEditSupplier);


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

        lineEditUnitCost = new QLabel(frame_5);
        lineEditUnitCost->setObjectName(QString::fromUtf8("lineEditUnitCost"));

        horizontalLayout_5->addWidget(lineEditUnitCost);


        verticalLayout_2->addWidget(frame_5);

        frame_13 = new QFrame(scrollAreaWidgetContents);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_13);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(frame_13);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        lineEditUnitUsed = new QLabel(frame_13);
        lineEditUnitUsed->setObjectName(QString::fromUtf8("lineEditUnitUsed"));

        horizontalLayout_12->addWidget(lineEditUnitUsed);


        verticalLayout_2->addWidget(frame_13);

        frame_6 = new QFrame(scrollAreaWidgetContents);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEditPacket = new QLabel(frame_6);
        lineEditPacket->setObjectName(QString::fromUtf8("lineEditPacket"));

        horizontalLayout_7->addWidget(lineEditPacket);


        verticalLayout_2->addWidget(frame_6);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_8);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_7 = new QLabel(frame_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_11->addWidget(label_7);

        lineEditBrand = new QLabel(frame_8);
        lineEditBrand->setObjectName(QString::fromUtf8("lineEditBrand"));

        horizontalLayout_11->addWidget(lineEditBrand);


        verticalLayout_2->addWidget(frame_8);

        frame_12 = new QFrame(scrollAreaWidgetContents);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_12);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(frame_12);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_13->addWidget(label_11);

        lineEditImage = new QLabel(frame_12);
        lineEditImage->setObjectName(QString::fromUtf8("lineEditImage"));

        horizontalLayout_13->addWidget(lineEditImage);


        verticalLayout_2->addWidget(frame_12);

        frame_14 = new QFrame(scrollAreaWidgetContents);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_14);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_13 = new QLabel(frame_14);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_14->addWidget(label_13);

        lineEditNewUsed = new QLabel(frame_14);
        lineEditNewUsed->setObjectName(QString::fromUtf8("lineEditNewUsed"));

        horizontalLayout_14->addWidget(lineEditNewUsed);


        verticalLayout_2->addWidget(frame_14);

        frame_17 = new QFrame(scrollAreaWidgetContents);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame_17);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(frame_17);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        lineEditLocation = new QLabel(frame_17);
        lineEditLocation->setObjectName(QString::fromUtf8("lineEditLocation"));

        horizontalLayout_16->addWidget(lineEditLocation);


        verticalLayout_2->addWidget(frame_17);

        frame_15 = new QFrame(scrollAreaWidgetContents);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_15);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_14 = new QLabel(frame_15);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_15->addWidget(label_14);

        lineEditmax = new QLabel(frame_15);
        lineEditmax->setObjectName(QString::fromUtf8("lineEditmax"));

        horizontalLayout_15->addWidget(lineEditmax);


        verticalLayout_2->addWidget(frame_15);

        frame_16 = new QFrame(scrollAreaWidgetContents);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_16);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(frame_16);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_17->addWidget(label_15);

        lineEditmin = new QLabel(frame_16);
        lineEditmin->setObjectName(QString::fromUtf8("lineEditmin"));

        horizontalLayout_17->addWidget(lineEditmin);


        verticalLayout_2->addWidget(frame_16);

        frame_18 = new QFrame(scrollAreaWidgetContents);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_18);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_17 = new QLabel(frame_18);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_18->addWidget(label_17);

        lineEditcritical = new QLabel(frame_18);
        lineEditcritical->setObjectName(QString::fromUtf8("lineEditcritical"));

        horizontalLayout_18->addWidget(lineEditcritical);


        verticalLayout_2->addWidget(frame_18);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ItemDetailDialog);

        QMetaObject::connectSlotsByName(ItemDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *ItemDetailDialog)
    {
        ItemDetailDialog->setWindowTitle(QCoreApplication::translate("ItemDetailDialog", "Dialog", nullptr));
        imageDisplay->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("ItemDetailDialog", "ItemID :-                         ", nullptr));
        lineEditID->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("ItemDetailDialog", "Name :-                        ", nullptr));
        lineEditName->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("ItemDetailDialog", "Alias :-                           ", nullptr));
        lineEditAlias->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("ItemDetailDialog", "Item Group:-                 ", nullptr));
        lineEditGroup->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ItemDetailDialog", "Item Sub Group :-        ", nullptr));
        lineEditSubGroup->setText(QCoreApplication::translate("ItemDetailDialog", "lineEditSubGroup", nullptr));
        label_6->setText(QCoreApplication::translate("ItemDetailDialog", "Supplier Part Number :-", nullptr));
        lineEditSupplier->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ItemDetailDialog", "Unit Cost :-                    ", nullptr));
        lineEditUnitCost->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("ItemDetailDialog", "Used Unit Cost :-           ", nullptr));
        lineEditUnitUsed->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("ItemDetailDialog", "Packet Size:-                  ", nullptr));
        lineEditPacket->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("ItemDetailDialog", "Brand :-                          ", nullptr));
        lineEditBrand->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("ItemDetailDialog", "Image File :-                   ", nullptr));
        lineEditImage->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("ItemDetailDialog", "New/Used Sensitive :-     ", nullptr));
        lineEditNewUsed->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("ItemDetailDialog", "Location :-", nullptr));
        lineEditLocation->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("ItemDetailDialog", "Maximum :-                  ", nullptr));
        lineEditmax->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("ItemDetailDialog", "Minimum  :-", nullptr));
        lineEditmin->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("ItemDetailDialog", "Critical Point :-", nullptr));
        lineEditcritical->setText(QCoreApplication::translate("ItemDetailDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemDetailDialog: public Ui_ItemDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMDETAILDIALOG_H
