/********************************************************************************
** Form generated from reading UI file 'itemlocationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMLOCATIONWINDOW_H
#define UI_ITEMLOCATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_ItemLocationWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *Location;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *Minimum;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *Maximum;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *Critical;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *UsedMinimumQuantity;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *ReworkPickupLevel;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QCheckBox *DoNotOrder;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QCheckBox *Swappable;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *SwapQuantity;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QCheckBox *SwapByUser;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QCheckBox *SwapByUser_2;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QCheckBox *SwapByMachine;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *TicketTable;
    QCheckBox *Ticketable;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QCheckBox *CanBeReturned;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QCheckBox *CanBeRework;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_18;
    QCheckBox *CanBeScrap;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_19;
    QCheckBox *LifeTracked;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_21;
    QLineEdit *InititalLife;
    QFrame *frame_21;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_22;
    QLineEdit *MinimumLife;
    QPushButton *addLocation;

    void setupUi(QDialog *ItemLocationWindow)
    {
        if (ItemLocationWindow->objectName().isEmpty())
            ItemLocationWindow->setObjectName(QString::fromUtf8("ItemLocationWindow"));
        ItemLocationWindow->resize(480, 640);
        verticalLayout = new QVBoxLayout(ItemLocationWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ItemLocationWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(ItemLocationWindow);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -447, 439, 1056));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        Location = new QComboBox(frame_2);
        Location->setObjectName(QString::fromUtf8("Location"));

        horizontalLayout_2->addWidget(Location);


        verticalLayout_2->addWidget(frame_2);

        frame_11 = new QFrame(scrollAreaWidgetContents);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(frame_11);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        Minimum = new QLineEdit(frame_11);
        Minimum->setObjectName(QString::fromUtf8("Minimum"));

        horizontalLayout_11->addWidget(Minimum);


        verticalLayout_2->addWidget(frame_11);

        frame_10 = new QFrame(scrollAreaWidgetContents);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(frame_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        Maximum = new QLineEdit(frame_10);
        Maximum->setObjectName(QString::fromUtf8("Maximum"));

        horizontalLayout_10->addWidget(Maximum);


        verticalLayout_2->addWidget(frame_10);

        frame_9 = new QFrame(scrollAreaWidgetContents);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(frame_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        Critical = new QLineEdit(frame_9);
        Critical->setObjectName(QString::fromUtf8("Critical"));

        horizontalLayout_9->addWidget(Critical);


        verticalLayout_2->addWidget(frame_9);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(frame_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        UsedMinimumQuantity = new QLineEdit(frame_7);
        UsedMinimumQuantity->setObjectName(QString::fromUtf8("UsedMinimumQuantity"));

        horizontalLayout_7->addWidget(UsedMinimumQuantity);


        verticalLayout_2->addWidget(frame_7);

        frame_6 = new QFrame(scrollAreaWidgetContents);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        ReworkPickupLevel = new QLineEdit(frame_6);
        ReworkPickupLevel->setObjectName(QString::fromUtf8("ReworkPickupLevel"));

        horizontalLayout_6->addWidget(ReworkPickupLevel);


        verticalLayout_2->addWidget(frame_6);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        DoNotOrder = new QCheckBox(frame_4);
        DoNotOrder->setObjectName(QString::fromUtf8("DoNotOrder"));

        horizontalLayout_4->addWidget(DoNotOrder);


        verticalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(scrollAreaWidgetContents);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        Swappable = new QCheckBox(frame_5);
        Swappable->setObjectName(QString::fromUtf8("Swappable"));

        horizontalLayout_5->addWidget(Swappable);


        verticalLayout_2->addWidget(frame_5);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        SwapQuantity = new QLineEdit(frame_3);
        SwapQuantity->setObjectName(QString::fromUtf8("SwapQuantity"));

        horizontalLayout_3->addWidget(SwapQuantity);


        verticalLayout_2->addWidget(frame_3);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(frame_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        SwapByUser = new QCheckBox(frame_8);
        SwapByUser->setObjectName(QString::fromUtf8("SwapByUser"));

        horizontalLayout_8->addWidget(SwapByUser);


        verticalLayout_2->addWidget(frame_8);

        frame_14 = new QFrame(scrollAreaWidgetContents);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_14);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_15 = new QLabel(frame_14);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_14->addWidget(label_15);

        SwapByUser_2 = new QCheckBox(frame_14);
        SwapByUser_2->setObjectName(QString::fromUtf8("SwapByUser_2"));

        horizontalLayout_14->addWidget(SwapByUser_2);


        verticalLayout_2->addWidget(frame_14);

        frame_13 = new QFrame(scrollAreaWidgetContents);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_13);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_14 = new QLabel(frame_13);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_13->addWidget(label_14);

        SwapByMachine = new QCheckBox(frame_13);
        SwapByMachine->setObjectName(QString::fromUtf8("SwapByMachine"));

        horizontalLayout_13->addWidget(SwapByMachine);


        verticalLayout_2->addWidget(frame_13);

        frame_12 = new QFrame(scrollAreaWidgetContents);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_12);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        TicketTable = new QLabel(frame_12);
        TicketTable->setObjectName(QString::fromUtf8("TicketTable"));

        horizontalLayout_12->addWidget(TicketTable);

        Ticketable = new QCheckBox(frame_12);
        Ticketable->setObjectName(QString::fromUtf8("Ticketable"));

        horizontalLayout_12->addWidget(Ticketable);


        verticalLayout_2->addWidget(frame_12);

        frame_15 = new QFrame(scrollAreaWidgetContents);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_15);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_13 = new QLabel(frame_15);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_15->addWidget(label_13);

        CanBeReturned = new QCheckBox(frame_15);
        CanBeReturned->setObjectName(QString::fromUtf8("CanBeReturned"));

        horizontalLayout_15->addWidget(CanBeReturned);


        verticalLayout_2->addWidget(frame_15);

        frame_16 = new QFrame(scrollAreaWidgetContents);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame_16);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_17 = new QLabel(frame_16);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_16->addWidget(label_17);

        CanBeRework = new QCheckBox(frame_16);
        CanBeRework->setObjectName(QString::fromUtf8("CanBeRework"));

        horizontalLayout_16->addWidget(CanBeRework);


        verticalLayout_2->addWidget(frame_16);

        frame_17 = new QFrame(scrollAreaWidgetContents);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_17);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_18 = new QLabel(frame_17);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_17->addWidget(label_18);

        CanBeScrap = new QCheckBox(frame_17);
        CanBeScrap->setObjectName(QString::fromUtf8("CanBeScrap"));

        horizontalLayout_17->addWidget(CanBeScrap);


        verticalLayout_2->addWidget(frame_17);

        frame_18 = new QFrame(scrollAreaWidgetContents);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_18);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_19 = new QLabel(frame_18);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_18->addWidget(label_19);

        LifeTracked = new QCheckBox(frame_18);
        LifeTracked->setObjectName(QString::fromUtf8("LifeTracked"));

        horizontalLayout_18->addWidget(LifeTracked);


        verticalLayout_2->addWidget(frame_18);

        frame_20 = new QFrame(scrollAreaWidgetContents);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_20);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_21 = new QLabel(frame_20);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_20->addWidget(label_21);

        InititalLife = new QLineEdit(frame_20);
        InititalLife->setObjectName(QString::fromUtf8("InititalLife"));

        horizontalLayout_20->addWidget(InititalLife);


        verticalLayout_2->addWidget(frame_20);

        frame_21 = new QFrame(scrollAreaWidgetContents);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        horizontalLayout_21 = new QHBoxLayout(frame_21);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_22 = new QLabel(frame_21);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_21->addWidget(label_22);

        MinimumLife = new QLineEdit(frame_21);
        MinimumLife->setObjectName(QString::fromUtf8("MinimumLife"));

        horizontalLayout_21->addWidget(MinimumLife);


        verticalLayout_2->addWidget(frame_21);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        addLocation = new QPushButton(ItemLocationWindow);
        addLocation->setObjectName(QString::fromUtf8("addLocation"));

        verticalLayout->addWidget(addLocation);


        retranslateUi(ItemLocationWindow);

        QMetaObject::connectSlotsByName(ItemLocationWindow);
    } // setupUi

    void retranslateUi(QDialog *ItemLocationWindow)
    {
        ItemLocationWindow->setWindowTitle(QCoreApplication::translate("ItemLocationWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ItemLocationWindow", "Add Location For Item ", nullptr));
        label_2->setText(QCoreApplication::translate("ItemLocationWindow", "Item ID", nullptr));
        label_3->setText(QCoreApplication::translate("ItemLocationWindow", "Location", nullptr));
        label_12->setText(QCoreApplication::translate("ItemLocationWindow", "Minmum Quantity", nullptr));
        label_11->setText(QCoreApplication::translate("ItemLocationWindow", "Maximum Quantity", nullptr));
        label_10->setText(QCoreApplication::translate("ItemLocationWindow", "Critical level", nullptr));
        label_8->setText(QCoreApplication::translate("ItemLocationWindow", "Used Minimum Quantity", nullptr));
        label_7->setText(QCoreApplication::translate("ItemLocationWindow", "Rework Pickup Level", nullptr));
        label_5->setText(QCoreApplication::translate("ItemLocationWindow", "Do Not Order ", nullptr));
        DoNotOrder->setText(QString());
        label_6->setText(QCoreApplication::translate("ItemLocationWindow", "Swappable", nullptr));
        Swappable->setText(QString());
        label_4->setText(QCoreApplication::translate("ItemLocationWindow", "Swap Quantity", nullptr));
        label_9->setText(QCoreApplication::translate("ItemLocationWindow", "Swap By User", nullptr));
        SwapByUser->setText(QString());
        label_15->setText(QCoreApplication::translate("ItemLocationWindow", "Swap By Job", nullptr));
        SwapByUser_2->setText(QString());
        label_14->setText(QCoreApplication::translate("ItemLocationWindow", "Swap By Machine", nullptr));
        SwapByMachine->setText(QString());
        TicketTable->setText(QCoreApplication::translate("ItemLocationWindow", "Ticketable", nullptr));
        Ticketable->setText(QString());
        label_13->setText(QCoreApplication::translate("ItemLocationWindow", "Can Be Returned", nullptr));
        CanBeReturned->setText(QString());
        label_17->setText(QCoreApplication::translate("ItemLocationWindow", "Can Be Rework", nullptr));
        CanBeRework->setText(QString());
        label_18->setText(QCoreApplication::translate("ItemLocationWindow", "Can Be Scrap", nullptr));
        CanBeScrap->setText(QString());
        label_19->setText(QCoreApplication::translate("ItemLocationWindow", "Life Tracked", nullptr));
        LifeTracked->setText(QString());
        label_21->setText(QCoreApplication::translate("ItemLocationWindow", "Initial Life", nullptr));
        label_22->setText(QCoreApplication::translate("ItemLocationWindow", "Minimum Life", nullptr));
        addLocation->setText(QCoreApplication::translate("ItemLocationWindow", "Add Location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemLocationWindow: public Ui_ItemLocationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMLOCATIONWINDOW_H
