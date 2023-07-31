/********************************************************************************
** Form generated from reading UI file 'newlocationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLOCATIONWINDOW_H
#define UI_NEWLOCATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewLocationWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout;
    QPushButton *update;
    QPushButton *delete_2;
    QPushButton *add;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_userName;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Type;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Description;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_Welcome_1;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_Welcome_2;

    void setupUi(QDialog *NewLocationWindow)
    {
        if (NewLocationWindow->objectName().isEmpty())
            NewLocationWindow->setObjectName(QString::fromUtf8("NewLocationWindow"));
        NewLocationWindow->resize(1017, 640);
        verticalLayout_2 = new QVBoxLayout(NewLocationWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(NewLocationWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tableWidget = new QTableWidget(frame_6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout_4->addWidget(tableWidget);

        frame_5 = new QFrame(frame_6);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        update = new QPushButton(frame_5);
        update->setObjectName(QString::fromUtf8("update"));

        verticalLayout->addWidget(update);

        delete_2 = new QPushButton(frame_5);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        verticalLayout->addWidget(delete_2);

        add = new QPushButton(frame_5);
        add->setObjectName(QString::fromUtf8("add"));

        verticalLayout->addWidget(add);


        horizontalLayout_4->addWidget(frame_5);


        verticalLayout_3->addWidget(frame_6);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 952, 310));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_userName = new QLineEdit(frame_2);
        lineEdit_userName->setObjectName(QString::fromUtf8("lineEdit_userName"));

        horizontalLayout->addWidget(lineEdit_userName);


        verticalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Type = new QLineEdit(frame_3);
        lineEdit_Type->setObjectName(QString::fromUtf8("lineEdit_Type"));

        horizontalLayout_2->addWidget(lineEdit_Type);


        verticalLayout_4->addWidget(frame_3);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Description = new QLineEdit(frame_4);
        lineEdit_Description->setObjectName(QString::fromUtf8("lineEdit_Description"));

        horizontalLayout_3->addWidget(lineEdit_Description);


        verticalLayout_4->addWidget(frame_4);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(frame_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_Welcome_1 = new QLineEdit(frame_7);
        lineEdit_Welcome_1->setObjectName(QString::fromUtf8("lineEdit_Welcome_1"));

        horizontalLayout_5->addWidget(lineEdit_Welcome_1);


        verticalLayout_4->addWidget(frame_7);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(frame_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_Welcome_2 = new QLineEdit(frame_8);
        lineEdit_Welcome_2->setObjectName(QString::fromUtf8("lineEdit_Welcome_2"));

        horizontalLayout_6->addWidget(lineEdit_Welcome_2);


        verticalLayout_4->addWidget(frame_8);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout_2->addWidget(frame);


        retranslateUi(NewLocationWindow);

        QMetaObject::connectSlotsByName(NewLocationWindow);
    } // setupUi

    void retranslateUi(QDialog *NewLocationWindow)
    {
        NewLocationWindow->setWindowTitle(QCoreApplication::translate("NewLocationWindow", "Dialog", nullptr));
        update->setText(QCoreApplication::translate("NewLocationWindow", "update", nullptr));
        delete_2->setText(QCoreApplication::translate("NewLocationWindow", "delete", nullptr));
        add->setText(QCoreApplication::translate("NewLocationWindow", "add", nullptr));
        label->setText(QCoreApplication::translate("NewLocationWindow", "Location ID", nullptr));
        label_2->setText(QCoreApplication::translate("NewLocationWindow", "Type            ", nullptr));
        label_3->setText(QCoreApplication::translate("NewLocationWindow", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("NewLocationWindow", "Welcome Message 1", nullptr));
        label_5->setText(QCoreApplication::translate("NewLocationWindow", "Welcome Message 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewLocationWindow: public Ui_NewLocationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLOCATIONWINDOW_H
