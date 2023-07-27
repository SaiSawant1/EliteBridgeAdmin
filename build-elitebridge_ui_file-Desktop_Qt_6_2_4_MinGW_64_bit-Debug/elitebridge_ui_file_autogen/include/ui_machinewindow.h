/********************************************************************************
** Form generated from reading UI file 'machinewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINEWINDOW_H
#define UI_MACHINEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MachineWindow
{
public:
    QVBoxLayout *verticalLayout_5;
    QMenuBar *menubar;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QTableWidget *tableWidget_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *Machine_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *Description_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *Alias_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *purchaseDate_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *MachineGroup_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLineEdit *MachineEnable_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *DateCreated_2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *CreatedBy_2;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QLineEdit *DatelastModified_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QLineEdit *LastModifiedBy_2;

    void setupUi(QDialog *MachineWindow)
    {
        if (MachineWindow->objectName().isEmpty())
            MachineWindow->setObjectName(QString::fromUtf8("MachineWindow"));
        MachineWindow->resize(480, 640);
        verticalLayout_5 = new QVBoxLayout(MachineWindow);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        menubar = new QMenuBar(MachineWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));

        verticalLayout_5->addWidget(menubar);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_3 = new QFrame(MachineWindow);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame_3);

        tableWidget_2 = new QTableWidget(MachineWindow);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        verticalLayout_3->addWidget(tableWidget_2);

        frame_4 = new QFrame(MachineWindow);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        Machine_3 = new QLineEdit(frame_4);
        Machine_3->setObjectName(QString::fromUtf8("Machine_3"));

        horizontalLayout_11->addWidget(Machine_3);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(frame_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        Description_2 = new QLineEdit(frame_4);
        Description_2->setObjectName(QString::fromUtf8("Description_2"));

        horizontalLayout_12->addWidget(Description_2);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(frame_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        Alias_2 = new QLineEdit(frame_4);
        Alias_2->setObjectName(QString::fromUtf8("Alias_2"));

        horizontalLayout_13->addWidget(Alias_2);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(frame_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        purchaseDate_2 = new QLineEdit(frame_4);
        purchaseDate_2->setObjectName(QString::fromUtf8("purchaseDate_2"));

        horizontalLayout_14->addWidget(purchaseDate_2);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        MachineGroup_2 = new QLineEdit(frame_4);
        MachineGroup_2->setObjectName(QString::fromUtf8("MachineGroup_2"));

        horizontalLayout_15->addWidget(MachineGroup_2);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(frame_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        MachineEnable_2 = new QLineEdit(frame_4);
        MachineEnable_2->setObjectName(QString::fromUtf8("MachineEnable_2"));

        horizontalLayout_16->addWidget(MachineEnable_2);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(frame_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_17->addWidget(label_17);

        DateCreated_2 = new QLineEdit(frame_4);
        DateCreated_2->setObjectName(QString::fromUtf8("DateCreated_2"));

        horizontalLayout_17->addWidget(DateCreated_2);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_18 = new QLabel(frame_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_18->addWidget(label_18);

        CreatedBy_2 = new QLineEdit(frame_4);
        CreatedBy_2->setObjectName(QString::fromUtf8("CreatedBy_2"));

        horizontalLayout_18->addWidget(CreatedBy_2);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_19->addWidget(label_19);

        DatelastModified_2 = new QLineEdit(frame_4);
        DatelastModified_2->setObjectName(QString::fromUtf8("DatelastModified_2"));

        horizontalLayout_19->addWidget(DatelastModified_2);


        verticalLayout_4->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(frame_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_20->addWidget(label_20);

        LastModifiedBy_2 = new QLineEdit(frame_4);
        LastModifiedBy_2->setObjectName(QString::fromUtf8("LastModifiedBy_2"));

        horizontalLayout_20->addWidget(LastModifiedBy_2);


        verticalLayout_4->addLayout(horizontalLayout_20);


        verticalLayout_3->addWidget(frame_4);


        verticalLayout_5->addLayout(verticalLayout_3);


        retranslateUi(MachineWindow);

        QMetaObject::connectSlotsByName(MachineWindow);
    } // setupUi

    void retranslateUi(QDialog *MachineWindow)
    {
        MachineWindow->setWindowTitle(QCoreApplication::translate("MachineWindow", "Dialog", nullptr));
        label_11->setText(QCoreApplication::translate("MachineWindow", "Machine              ", nullptr));
        label_12->setText(QCoreApplication::translate("MachineWindow", "Description         ", nullptr));
        label_13->setText(QCoreApplication::translate("MachineWindow", "Alias                    ", nullptr));
        label_14->setText(QCoreApplication::translate("MachineWindow", "PurchaseDate    ", nullptr));
        label_15->setText(QCoreApplication::translate("MachineWindow", "MachineGroup   ", nullptr));
        label_16->setText(QCoreApplication::translate("MachineWindow", "MachineEnable   ", nullptr));
        label_17->setText(QCoreApplication::translate("MachineWindow", "DateCreated        ", nullptr));
        label_18->setText(QCoreApplication::translate("MachineWindow", "CreatedBy            ", nullptr));
        label_19->setText(QCoreApplication::translate("MachineWindow", "DatelastModified", nullptr));
        label_20->setText(QCoreApplication::translate("MachineWindow", "LastModifiedBy   ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MachineWindow: public Ui_MachineWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINEWINDOW_H
