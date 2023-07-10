/********************************************************************************
** Form generated from reading UI file 'grouptransaction.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPTRANSACTION_H
#define UI_GROUPTRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_groupTransaction
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *groupID;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *name;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *change_password;
    QCheckBox *cycle_count;
    QCheckBox *free_issue_withdraw;
    QCheckBox *initiate_stock_transfer;
    QCheckBox *scrap;
    QCheckBox *load_rework;
    QCheckBox *move_stock;
    QCheckBox *return_rework_to_general;
    QCheckBox *inventory_adjusment;
    QCheckBox *restock_used;
    QCheckBox *change_privileges;
    QCheckBox *restock_new;
    QCheckBox *return_rework_new;
    QCheckBox *retrun_rework_used;
    QCheckBox *capture_finger_print;
    QCheckBox *return_rework_scrap;
    QCheckBox *receive_stock_transfer;
    QCheckBox *reserve_item;
    QCheckBox *withdraw_reserved_item;
    QCheckBox *withdraw_kit;
    QCheckBox *receiveAndRestock;
    QCheckBox *withdraw_used;
    QCheckBox *restock_general;
    QCheckBox *withdraw_general;
    QCheckBox *withdraw_new;
    QCheckBox *priority_withdraw;
    QCheckBox *withdraw_inspection;
    QCheckBox *store_external_request;
    QCheckBox *supervisior_undo;
    QCheckBox *return_general;
    QCheckBox *return_key;
    QCheckBox *withdraw_external_request;
    QCheckBox *return_used;
    QCheckBox *RFID_insta_track;
    QCheckBox *withdraw_scrap_drawer;
    QCheckBox *return_new;
    QCheckBox *return_scrap;
    QCheckBox *RFID_STATIC_CABINET_SCAN;
    QCheckBox *return_serialized_item;
    QCheckBox *user_undo;
    QCheckBox *return_rework;
    QCheckBox *weigh_item;
    QCheckBox *withdraw_scrap_from_bin;
    QCheckBox *withdraw_rework_drawer;
    QCheckBox *withdraw_rework_from_bin;
    QPushButton *grantButton;

    void setupUi(QDialog *groupTransaction)
    {
        if (groupTransaction->objectName().isEmpty())
            groupTransaction->setObjectName(QString::fromUtf8("groupTransaction"));
        groupTransaction->resize(480, 640);
        verticalLayout = new QVBoxLayout(groupTransaction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(groupTransaction);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        groupID = new QLineEdit(frame);
        groupID->setObjectName(QString::fromUtf8("groupID"));

        horizontalLayout->addWidget(groupID);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        name = new QLineEdit(frame);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(groupTransaction);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 439, 1500));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        change_password = new QCheckBox(scrollAreaWidgetContents);
        change_password->setObjectName(QString::fromUtf8("change_password"));

        verticalLayout_2->addWidget(change_password);

        cycle_count = new QCheckBox(scrollAreaWidgetContents);
        cycle_count->setObjectName(QString::fromUtf8("cycle_count"));

        verticalLayout_2->addWidget(cycle_count);

        free_issue_withdraw = new QCheckBox(scrollAreaWidgetContents);
        free_issue_withdraw->setObjectName(QString::fromUtf8("free_issue_withdraw"));

        verticalLayout_2->addWidget(free_issue_withdraw);

        initiate_stock_transfer = new QCheckBox(scrollAreaWidgetContents);
        initiate_stock_transfer->setObjectName(QString::fromUtf8("initiate_stock_transfer"));

        verticalLayout_2->addWidget(initiate_stock_transfer);

        scrap = new QCheckBox(scrollAreaWidgetContents);
        scrap->setObjectName(QString::fromUtf8("scrap"));

        verticalLayout_2->addWidget(scrap);

        load_rework = new QCheckBox(scrollAreaWidgetContents);
        load_rework->setObjectName(QString::fromUtf8("load_rework"));

        verticalLayout_2->addWidget(load_rework);

        move_stock = new QCheckBox(scrollAreaWidgetContents);
        move_stock->setObjectName(QString::fromUtf8("move_stock"));

        verticalLayout_2->addWidget(move_stock);

        return_rework_to_general = new QCheckBox(scrollAreaWidgetContents);
        return_rework_to_general->setObjectName(QString::fromUtf8("return_rework_to_general"));

        verticalLayout_2->addWidget(return_rework_to_general);

        inventory_adjusment = new QCheckBox(scrollAreaWidgetContents);
        inventory_adjusment->setObjectName(QString::fromUtf8("inventory_adjusment"));

        verticalLayout_2->addWidget(inventory_adjusment);

        restock_used = new QCheckBox(scrollAreaWidgetContents);
        restock_used->setObjectName(QString::fromUtf8("restock_used"));

        verticalLayout_2->addWidget(restock_used);

        change_privileges = new QCheckBox(scrollAreaWidgetContents);
        change_privileges->setObjectName(QString::fromUtf8("change_privileges"));

        verticalLayout_2->addWidget(change_privileges);

        restock_new = new QCheckBox(scrollAreaWidgetContents);
        restock_new->setObjectName(QString::fromUtf8("restock_new"));

        verticalLayout_2->addWidget(restock_new);

        return_rework_new = new QCheckBox(scrollAreaWidgetContents);
        return_rework_new->setObjectName(QString::fromUtf8("return_rework_new"));

        verticalLayout_2->addWidget(return_rework_new);

        retrun_rework_used = new QCheckBox(scrollAreaWidgetContents);
        retrun_rework_used->setObjectName(QString::fromUtf8("retrun_rework_used"));

        verticalLayout_2->addWidget(retrun_rework_used);

        capture_finger_print = new QCheckBox(scrollAreaWidgetContents);
        capture_finger_print->setObjectName(QString::fromUtf8("capture_finger_print"));

        verticalLayout_2->addWidget(capture_finger_print);

        return_rework_scrap = new QCheckBox(scrollAreaWidgetContents);
        return_rework_scrap->setObjectName(QString::fromUtf8("return_rework_scrap"));

        verticalLayout_2->addWidget(return_rework_scrap);

        receive_stock_transfer = new QCheckBox(scrollAreaWidgetContents);
        receive_stock_transfer->setObjectName(QString::fromUtf8("receive_stock_transfer"));

        verticalLayout_2->addWidget(receive_stock_transfer);

        reserve_item = new QCheckBox(scrollAreaWidgetContents);
        reserve_item->setObjectName(QString::fromUtf8("reserve_item"));

        verticalLayout_2->addWidget(reserve_item);

        withdraw_reserved_item = new QCheckBox(scrollAreaWidgetContents);
        withdraw_reserved_item->setObjectName(QString::fromUtf8("withdraw_reserved_item"));

        verticalLayout_2->addWidget(withdraw_reserved_item);

        withdraw_kit = new QCheckBox(scrollAreaWidgetContents);
        withdraw_kit->setObjectName(QString::fromUtf8("withdraw_kit"));

        verticalLayout_2->addWidget(withdraw_kit);

        receiveAndRestock = new QCheckBox(scrollAreaWidgetContents);
        receiveAndRestock->setObjectName(QString::fromUtf8("receiveAndRestock"));

        verticalLayout_2->addWidget(receiveAndRestock);

        withdraw_used = new QCheckBox(scrollAreaWidgetContents);
        withdraw_used->setObjectName(QString::fromUtf8("withdraw_used"));

        verticalLayout_2->addWidget(withdraw_used);

        restock_general = new QCheckBox(scrollAreaWidgetContents);
        restock_general->setObjectName(QString::fromUtf8("restock_general"));

        verticalLayout_2->addWidget(restock_general);

        withdraw_general = new QCheckBox(scrollAreaWidgetContents);
        withdraw_general->setObjectName(QString::fromUtf8("withdraw_general"));

        verticalLayout_2->addWidget(withdraw_general);

        withdraw_new = new QCheckBox(scrollAreaWidgetContents);
        withdraw_new->setObjectName(QString::fromUtf8("withdraw_new"));

        verticalLayout_2->addWidget(withdraw_new);

        priority_withdraw = new QCheckBox(scrollAreaWidgetContents);
        priority_withdraw->setObjectName(QString::fromUtf8("priority_withdraw"));

        verticalLayout_2->addWidget(priority_withdraw);

        withdraw_inspection = new QCheckBox(scrollAreaWidgetContents);
        withdraw_inspection->setObjectName(QString::fromUtf8("withdraw_inspection"));

        verticalLayout_2->addWidget(withdraw_inspection);

        store_external_request = new QCheckBox(scrollAreaWidgetContents);
        store_external_request->setObjectName(QString::fromUtf8("store_external_request"));

        verticalLayout_2->addWidget(store_external_request);

        supervisior_undo = new QCheckBox(scrollAreaWidgetContents);
        supervisior_undo->setObjectName(QString::fromUtf8("supervisior_undo"));

        verticalLayout_2->addWidget(supervisior_undo);

        return_general = new QCheckBox(scrollAreaWidgetContents);
        return_general->setObjectName(QString::fromUtf8("return_general"));

        verticalLayout_2->addWidget(return_general);

        return_key = new QCheckBox(scrollAreaWidgetContents);
        return_key->setObjectName(QString::fromUtf8("return_key"));

        verticalLayout_2->addWidget(return_key);

        withdraw_external_request = new QCheckBox(scrollAreaWidgetContents);
        withdraw_external_request->setObjectName(QString::fromUtf8("withdraw_external_request"));

        verticalLayout_2->addWidget(withdraw_external_request);

        return_used = new QCheckBox(scrollAreaWidgetContents);
        return_used->setObjectName(QString::fromUtf8("return_used"));

        verticalLayout_2->addWidget(return_used);

        RFID_insta_track = new QCheckBox(scrollAreaWidgetContents);
        RFID_insta_track->setObjectName(QString::fromUtf8("RFID_insta_track"));

        verticalLayout_2->addWidget(RFID_insta_track);

        withdraw_scrap_drawer = new QCheckBox(scrollAreaWidgetContents);
        withdraw_scrap_drawer->setObjectName(QString::fromUtf8("withdraw_scrap_drawer"));

        verticalLayout_2->addWidget(withdraw_scrap_drawer);

        return_new = new QCheckBox(scrollAreaWidgetContents);
        return_new->setObjectName(QString::fromUtf8("return_new"));

        verticalLayout_2->addWidget(return_new);

        return_scrap = new QCheckBox(scrollAreaWidgetContents);
        return_scrap->setObjectName(QString::fromUtf8("return_scrap"));

        verticalLayout_2->addWidget(return_scrap);

        RFID_STATIC_CABINET_SCAN = new QCheckBox(scrollAreaWidgetContents);
        RFID_STATIC_CABINET_SCAN->setObjectName(QString::fromUtf8("RFID_STATIC_CABINET_SCAN"));

        verticalLayout_2->addWidget(RFID_STATIC_CABINET_SCAN);

        return_serialized_item = new QCheckBox(scrollAreaWidgetContents);
        return_serialized_item->setObjectName(QString::fromUtf8("return_serialized_item"));

        verticalLayout_2->addWidget(return_serialized_item);

        user_undo = new QCheckBox(scrollAreaWidgetContents);
        user_undo->setObjectName(QString::fromUtf8("user_undo"));

        verticalLayout_2->addWidget(user_undo);

        return_rework = new QCheckBox(scrollAreaWidgetContents);
        return_rework->setObjectName(QString::fromUtf8("return_rework"));

        verticalLayout_2->addWidget(return_rework);

        weigh_item = new QCheckBox(scrollAreaWidgetContents);
        weigh_item->setObjectName(QString::fromUtf8("weigh_item"));

        verticalLayout_2->addWidget(weigh_item);

        withdraw_scrap_from_bin = new QCheckBox(scrollAreaWidgetContents);
        withdraw_scrap_from_bin->setObjectName(QString::fromUtf8("withdraw_scrap_from_bin"));

        verticalLayout_2->addWidget(withdraw_scrap_from_bin);

        withdraw_rework_drawer = new QCheckBox(scrollAreaWidgetContents);
        withdraw_rework_drawer->setObjectName(QString::fromUtf8("withdraw_rework_drawer"));

        verticalLayout_2->addWidget(withdraw_rework_drawer);

        withdraw_rework_from_bin = new QCheckBox(scrollAreaWidgetContents);
        withdraw_rework_from_bin->setObjectName(QString::fromUtf8("withdraw_rework_from_bin"));

        verticalLayout_2->addWidget(withdraw_rework_from_bin);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        grantButton = new QPushButton(groupTransaction);
        grantButton->setObjectName(QString::fromUtf8("grantButton"));

        verticalLayout->addWidget(grantButton);


        retranslateUi(groupTransaction);

        QMetaObject::connectSlotsByName(groupTransaction);
    } // setupUi

    void retranslateUi(QDialog *groupTransaction)
    {
        groupTransaction->setWindowTitle(QCoreApplication::translate("groupTransaction", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("groupTransaction", "Group ID  ", nullptr));
        label_2->setText(QCoreApplication::translate("groupTransaction", "group name", nullptr));
        change_password->setText(QCoreApplication::translate("groupTransaction", "Change Password", nullptr));
        cycle_count->setText(QCoreApplication::translate("groupTransaction", "Cycle Count", nullptr));
        free_issue_withdraw->setText(QCoreApplication::translate("groupTransaction", "Free Issue Withdraw", nullptr));
        initiate_stock_transfer->setText(QCoreApplication::translate("groupTransaction", "Initiate Stock Transfer", nullptr));
        scrap->setText(QCoreApplication::translate("groupTransaction", "Scrap", nullptr));
        load_rework->setText(QCoreApplication::translate("groupTransaction", "Load Rework", nullptr));
        move_stock->setText(QCoreApplication::translate("groupTransaction", "Move Stock", nullptr));
        return_rework_to_general->setText(QCoreApplication::translate("groupTransaction", "Return from Rework to General", nullptr));
        inventory_adjusment->setText(QCoreApplication::translate("groupTransaction", "Inventory Adjustment ", nullptr));
        restock_used->setText(QCoreApplication::translate("groupTransaction", "Restock Used", nullptr));
        change_privileges->setText(QCoreApplication::translate("groupTransaction", "Change Privileges", nullptr));
        restock_new->setText(QCoreApplication::translate("groupTransaction", "Restock New", nullptr));
        return_rework_new->setText(QCoreApplication::translate("groupTransaction", "Return from Rework to New", nullptr));
        retrun_rework_used->setText(QCoreApplication::translate("groupTransaction", "Return from Rework to Used", nullptr));
        capture_finger_print->setText(QCoreApplication::translate("groupTransaction", "Capture Fingerprints", nullptr));
        return_rework_scrap->setText(QCoreApplication::translate("groupTransaction", "Return from Rework to Scrap", nullptr));
        receive_stock_transfer->setText(QCoreApplication::translate("groupTransaction", "Receive Stock Transfer", nullptr));
        reserve_item->setText(QCoreApplication::translate("groupTransaction", "Reserve Item", nullptr));
        withdraw_reserved_item->setText(QCoreApplication::translate("groupTransaction", "Withdraw Reserved Item", nullptr));
        withdraw_kit->setText(QCoreApplication::translate("groupTransaction", "Withdraw Kit", nullptr));
        receiveAndRestock->setText(QCoreApplication::translate("groupTransaction", "Receive and Restock", nullptr));
        withdraw_used->setText(QCoreApplication::translate("groupTransaction", "Withdraw Used", nullptr));
        restock_general->setText(QCoreApplication::translate("groupTransaction", "Restock General", nullptr));
        withdraw_general->setText(QCoreApplication::translate("groupTransaction", "Withdraw General", nullptr));
        withdraw_new->setText(QCoreApplication::translate("groupTransaction", "Withdraw New", nullptr));
        priority_withdraw->setText(QCoreApplication::translate("groupTransaction", "Priority Withdraw", nullptr));
        withdraw_inspection->setText(QCoreApplication::translate("groupTransaction", "Withdraw for Inspection", nullptr));
        store_external_request->setText(QCoreApplication::translate("groupTransaction", "Store External Request", nullptr));
        supervisior_undo->setText(QCoreApplication::translate("groupTransaction", "Supervisor Undo", nullptr));
        return_general->setText(QCoreApplication::translate("groupTransaction", "Return to General", nullptr));
        return_key->setText(QCoreApplication::translate("groupTransaction", "Return Key", nullptr));
        withdraw_external_request->setText(QCoreApplication::translate("groupTransaction", "Withdraw External Request", nullptr));
        return_used->setText(QCoreApplication::translate("groupTransaction", "Return to Used", nullptr));
        RFID_insta_track->setText(QCoreApplication::translate("groupTransaction", "RFID Insta-track", nullptr));
        withdraw_scrap_drawer->setText(QCoreApplication::translate("groupTransaction", "Withdraw Scrap from Drawer", nullptr));
        return_new->setText(QCoreApplication::translate("groupTransaction", "Return to New", nullptr));
        return_scrap->setText(QCoreApplication::translate("groupTransaction", "Return to Scrap", nullptr));
        RFID_STATIC_CABINET_SCAN->setText(QCoreApplication::translate("groupTransaction", "RFID-Static Cabinet Scan", nullptr));
        return_serialized_item->setText(QCoreApplication::translate("groupTransaction", "Return Serialized Item", nullptr));
        user_undo->setText(QCoreApplication::translate("groupTransaction", "User Undo", nullptr));
        return_rework->setText(QCoreApplication::translate("groupTransaction", "Return to Rework", nullptr));
        weigh_item->setText(QCoreApplication::translate("groupTransaction", "Weigh Item", nullptr));
        withdraw_scrap_from_bin->setText(QCoreApplication::translate("groupTransaction", "Withdraw Scrap from Bin", nullptr));
        withdraw_rework_drawer->setText(QCoreApplication::translate("groupTransaction", "Withdraw Rework From Drawer", nullptr));
        withdraw_rework_from_bin->setText(QCoreApplication::translate("groupTransaction", "Withdraw Rework from Bin", nullptr));
        grantButton->setText(QCoreApplication::translate("groupTransaction", "Grant Transaction Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class groupTransaction: public Ui_groupTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPTRANSACTION_H
