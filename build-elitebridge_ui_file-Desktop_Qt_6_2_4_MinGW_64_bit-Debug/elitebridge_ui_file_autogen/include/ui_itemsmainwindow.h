/********************************************************************************
** Form generated from reading UI file 'itemsmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSMAINWINDOW_H
#define UI_ITEMSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemsMainWindow
{
public:
    QAction *actioncreate_item_group;
    QAction *actioncreate_item_sub_group;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QTableWidget *tableWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditID;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditName;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEditAlias;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QComboBox *lineEditGroup;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *lineEditSubGroup;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditSupplier;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditUnitCost;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEditUnitUsed;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditPacket;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditBrand;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditImage;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QComboBox *lineEditNewUsed;
    QMenuBar *menubar;
    QMenu *menuFiles;
    QMenu *menuView;
    QMenu *menuRecord;
    QMenu *menuAudit;
    QMenu *menuLocations;
    QMenu *menuItems;
    QMenu *menuItems_Group;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ItemsMainWindow)
    {
        if (ItemsMainWindow->objectName().isEmpty())
            ItemsMainWindow->setObjectName(QString::fromUtf8("ItemsMainWindow"));
        ItemsMainWindow->resize(1033, 696);
        actioncreate_item_group = new QAction(ItemsMainWindow);
        actioncreate_item_group->setObjectName(QString::fromUtf8("actioncreate_item_group"));
        actioncreate_item_sub_group = new QAction(ItemsMainWindow);
        actioncreate_item_sub_group->setObjectName(QString::fromUtf8("actioncreate_item_sub_group"));
        centralwidget = new QWidget(ItemsMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(tableWidget);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 167));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -558, 992, 723));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditID = new QLineEdit(frame_2);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lineEditID);


        verticalLayout_2->addWidget(frame_2);

        frame_9 = new QFrame(scrollAreaWidgetContents);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(frame_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEditName = new QLineEdit(frame_9);
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

        lineEditAlias = new QLineEdit(frame_10);
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

        lineEditGroup = new QComboBox(frame_11);
        lineEditGroup->setObjectName(QString::fromUtf8("lineEditGroup"));

        horizontalLayout_10->addWidget(lineEditGroup);


        verticalLayout_2->addWidget(frame_11);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditSubGroup = new QComboBox(frame_3);
        lineEditSubGroup->setObjectName(QString::fromUtf8("lineEditSubGroup"));

        horizontalLayout_2->addWidget(lineEditSubGroup);


        verticalLayout_2->addWidget(frame_3);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(frame_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditSupplier = new QLineEdit(frame_7);
        lineEditSupplier->setObjectName(QString::fromUtf8("lineEditSupplier"));

        horizontalLayout_6->addWidget(lineEditSupplier);


        verticalLayout_2->addWidget(frame_7);

        frame_5 = new QFrame(scrollAreaWidgetContents);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditUnitCost = new QLineEdit(frame_5);
        lineEditUnitCost->setObjectName(QString::fromUtf8("lineEditUnitCost"));

        horizontalLayout_4->addWidget(lineEditUnitCost);


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

        lineEditUnitUsed = new QLineEdit(frame_13);
        lineEditUnitUsed->setObjectName(QString::fromUtf8("lineEditUnitUsed"));

        horizontalLayout_12->addWidget(lineEditUnitUsed);


        verticalLayout_2->addWidget(frame_13);

        frame_6 = new QFrame(scrollAreaWidgetContents);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditPacket = new QLineEdit(frame_6);
        lineEditPacket->setObjectName(QString::fromUtf8("lineEditPacket"));

        horizontalLayout_5->addWidget(lineEditPacket);


        verticalLayout_2->addWidget(frame_6);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(frame_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEditBrand = new QLineEdit(frame_8);
        lineEditBrand->setObjectName(QString::fromUtf8("lineEditBrand"));

        horizontalLayout_7->addWidget(lineEditBrand);


        verticalLayout_2->addWidget(frame_8);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditImage = new QLineEdit(frame_4);
        lineEditImage->setObjectName(QString::fromUtf8("lineEditImage"));

        horizontalLayout_3->addWidget(lineEditImage);


        verticalLayout_2->addWidget(frame_4);

        frame_14 = new QFrame(scrollAreaWidgetContents);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_14);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(frame_14);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        lineEditNewUsed = new QComboBox(frame_14);
        lineEditNewUsed->addItem(QString());
        lineEditNewUsed->addItem(QString());
        lineEditNewUsed->addItem(QString());
        lineEditNewUsed->setObjectName(QString::fromUtf8("lineEditNewUsed"));

        horizontalLayout_13->addWidget(lineEditNewUsed);


        verticalLayout_2->addWidget(frame_14);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        ItemsMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ItemsMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1033, 25));
        menuFiles = new QMenu(menubar);
        menuFiles->setObjectName(QString::fromUtf8("menuFiles"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuRecord = new QMenu(menubar);
        menuRecord->setObjectName(QString::fromUtf8("menuRecord"));
        menuAudit = new QMenu(menubar);
        menuAudit->setObjectName(QString::fromUtf8("menuAudit"));
        menuLocations = new QMenu(menubar);
        menuLocations->setObjectName(QString::fromUtf8("menuLocations"));
        menuItems = new QMenu(menubar);
        menuItems->setObjectName(QString::fromUtf8("menuItems"));
        menuItems_Group = new QMenu(menuItems);
        menuItems_Group->setObjectName(QString::fromUtf8("menuItems_Group"));
        ItemsMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ItemsMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ItemsMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFiles->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuRecord->menuAction());
        menubar->addAction(menuAudit->menuAction());
        menubar->addAction(menuLocations->menuAction());
        menubar->addAction(menuItems->menuAction());
        menuItems->addAction(menuItems_Group->menuAction());
        menuItems_Group->addAction(actioncreate_item_group);
        menuItems_Group->addAction(actioncreate_item_sub_group);

        retranslateUi(ItemsMainWindow);

        QMetaObject::connectSlotsByName(ItemsMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ItemsMainWindow)
    {
        ItemsMainWindow->setWindowTitle(QCoreApplication::translate("ItemsMainWindow", "MainWindow", nullptr));
        actioncreate_item_group->setText(QCoreApplication::translate("ItemsMainWindow", "create item group", nullptr));
        actioncreate_item_sub_group->setText(QCoreApplication::translate("ItemsMainWindow", "create item sub group", nullptr));
        label->setText(QCoreApplication::translate("ItemsMainWindow", "ItemID                         ", nullptr));
        label_8->setText(QCoreApplication::translate("ItemsMainWindow", "Name                          ", nullptr));
        label_9->setText(QCoreApplication::translate("ItemsMainWindow", "Alias                            ", nullptr));
        label_10->setText(QCoreApplication::translate("ItemsMainWindow", "Item Group                 ", nullptr));
        label_2->setText(QCoreApplication::translate("ItemsMainWindow", "Item Sub Group         ", nullptr));
        label_6->setText(QCoreApplication::translate("ItemsMainWindow", "Supplier Part Number", nullptr));
        label_4->setText(QCoreApplication::translate("ItemsMainWindow", "Unit Cost                     ", nullptr));
        label_12->setText(QCoreApplication::translate("ItemsMainWindow", "Used Unit Cost            ", nullptr));
        label_5->setText(QCoreApplication::translate("ItemsMainWindow", "Packet Size                  ", nullptr));
        label_7->setText(QCoreApplication::translate("ItemsMainWindow", "Brand                           ", nullptr));
        label_3->setText(QCoreApplication::translate("ItemsMainWindow", "Image File                    ", nullptr));
        label_13->setText(QCoreApplication::translate("ItemsMainWindow", "New/Used Sensitive     ", nullptr));
        lineEditNewUsed->setItemText(0, QString());
        lineEditNewUsed->setItemText(1, QCoreApplication::translate("ItemsMainWindow", "yes", nullptr));
        lineEditNewUsed->setItemText(2, QCoreApplication::translate("ItemsMainWindow", "no", nullptr));

        menuFiles->setTitle(QCoreApplication::translate("ItemsMainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("ItemsMainWindow", "View", nullptr));
        menuRecord->setTitle(QCoreApplication::translate("ItemsMainWindow", "Record", nullptr));
        menuAudit->setTitle(QCoreApplication::translate("ItemsMainWindow", "Audit", nullptr));
        menuLocations->setTitle(QCoreApplication::translate("ItemsMainWindow", "Locations", nullptr));
        menuItems->setTitle(QCoreApplication::translate("ItemsMainWindow", "Items", nullptr));
        menuItems_Group->setTitle(QCoreApplication::translate("ItemsMainWindow", "Items Group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemsMainWindow: public Ui_ItemsMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSMAINWINDOW_H
