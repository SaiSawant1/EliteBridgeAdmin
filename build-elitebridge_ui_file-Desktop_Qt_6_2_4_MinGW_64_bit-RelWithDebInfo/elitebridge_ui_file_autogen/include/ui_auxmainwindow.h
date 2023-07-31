/********************************************************************************
** Form generated from reading UI file 'auxmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUXMAINWINDOW_H
#define UI_AUXMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AuxMainWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QTableWidget *tableWidget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Aux;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Auxiliary;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *AuxiliaryAlias;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *AuxEnable;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *DateCreated;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *CreatedBy;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *DatelastModified;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *LastModifiedBy;

    void setupUi(QDialog *AuxMainWindow)
    {
        if (AuxMainWindow->objectName().isEmpty())
            AuxMainWindow->setObjectName(QString::fromUtf8("AuxMainWindow"));
        AuxMainWindow->resize(480, 640);
        verticalLayout_3 = new QVBoxLayout(AuxMainWindow);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        statusbar = new QStatusBar(AuxMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));

        verticalLayout_3->addWidget(statusbar);

        menubar = new QMenuBar(AuxMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));

        verticalLayout_3->addWidget(menubar);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(AuxMainWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame);

        tableWidget = new QTableWidget(AuxMainWindow);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        frame_2 = new QFrame(AuxMainWindow);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Aux = new QLineEdit(frame_2);
        Aux->setObjectName(QString::fromUtf8("Aux"));

        horizontalLayout->addWidget(Aux);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Auxiliary = new QLineEdit(frame_2);
        Auxiliary->setObjectName(QString::fromUtf8("Auxiliary"));

        horizontalLayout_2->addWidget(Auxiliary);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        AuxiliaryAlias = new QLineEdit(frame_2);
        AuxiliaryAlias->setObjectName(QString::fromUtf8("AuxiliaryAlias"));

        horizontalLayout_3->addWidget(AuxiliaryAlias);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        AuxEnable = new QLineEdit(frame_2);
        AuxEnable->setObjectName(QString::fromUtf8("AuxEnable"));

        horizontalLayout_4->addWidget(AuxEnable);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        DateCreated = new QLineEdit(frame_2);
        DateCreated->setObjectName(QString::fromUtf8("DateCreated"));

        horizontalLayout_7->addWidget(DateCreated);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        CreatedBy = new QLineEdit(frame_2);
        CreatedBy->setObjectName(QString::fromUtf8("CreatedBy"));

        horizontalLayout_8->addWidget(CreatedBy);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        DatelastModified = new QLineEdit(frame_2);
        DatelastModified->setObjectName(QString::fromUtf8("DatelastModified"));

        horizontalLayout_9->addWidget(DatelastModified);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        LastModifiedBy = new QLineEdit(frame_2);
        LastModifiedBy->setObjectName(QString::fromUtf8("LastModifiedBy"));

        horizontalLayout_10->addWidget(LastModifiedBy);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_2->addWidget(frame_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(AuxMainWindow);

        QMetaObject::connectSlotsByName(AuxMainWindow);
    } // setupUi

    void retranslateUi(QDialog *AuxMainWindow)
    {
        AuxMainWindow->setWindowTitle(QCoreApplication::translate("AuxMainWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AuxMainWindow", "Aux                        ", nullptr));
        label_2->setText(QCoreApplication::translate("AuxMainWindow", "Auxiliary               ", nullptr));
        label_3->setText(QCoreApplication::translate("AuxMainWindow", "AuxiliaryAlias       ", nullptr));
        label_4->setText(QCoreApplication::translate("AuxMainWindow", "AuxEnable             ", nullptr));
        label_7->setText(QCoreApplication::translate("AuxMainWindow", "Date Created        ", nullptr));
        label_8->setText(QCoreApplication::translate("AuxMainWindow", "Created By            ", nullptr));
        label_9->setText(QCoreApplication::translate("AuxMainWindow", "Date last Modified", nullptr));
        label_10->setText(QCoreApplication::translate("AuxMainWindow", "Last Modified By   ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuxMainWindow: public Ui_AuxMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUXMAINWINDOW_H
