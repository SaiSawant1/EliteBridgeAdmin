/********************************************************************************
** Form generated from reading UI file 'terminology.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINOLOGY_H
#define UI_TERMINOLOGY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Terminology
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *centralwidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QFrame *line;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_8;
    QComboBox *comboBox_7;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *Aux_lineEdit;
    QLineEdit *Aux2_lineEdit;
    QLineEdit *User_lineEdit;
    QLineEdit *job_lineEdit;
    QLineEdit *item_lineEdit;
    QLineEdit *machine_lineEdit;
    QLineEdit *rework_lineEdit;
    QLineEdit *scrap_lineEdit;
    QVBoxLayout *verticalLayout;
    QLabel *Aux_label;
    QLabel *Aux2;
    QLabel *User;
    QLabel *Job;
    QLabel *Item;
    QLabel *Machine;
    QLabel *Rework;
    QLabel *Scrap;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLineEdit *lineEdit1;
    QLineEdit *secondLineEdit;
    QPushButton *Apply;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Terminology)
    {
        if (Terminology->objectName().isEmpty())
            Terminology->setObjectName(QString::fromUtf8("Terminology"));
        Terminology->resize(480, 640);
        centralwidget = new QWidget(Terminology);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName(QString::fromUtf8("centralwidget_2"));
        verticalLayout_5 = new QVBoxLayout(centralwidget_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(centralwidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"Segoe UI Variable Display\";\n"
"color:black;"));

        verticalLayout_5->addWidget(label);

        line = new QFrame(centralwidget_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        frame = new QFrame(centralwidget_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        horizontalLayout_2->addWidget(label_4);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        horizontalLayout_2->addWidget(label_3);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_5->addWidget(frame);

        line_2 = new QFrame(centralwidget_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(centralwidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        comboBox_2 = new QComboBox(centralwidget_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(centralwidget_2);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        verticalLayout_2->addWidget(comboBox_3);

        comboBox_4 = new QComboBox(centralwidget_2);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        verticalLayout_2->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(centralwidget_2);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        verticalLayout_2->addWidget(comboBox_5);

        comboBox_6 = new QComboBox(centralwidget_2);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        verticalLayout_2->addWidget(comboBox_6);

        comboBox_8 = new QComboBox(centralwidget_2);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        verticalLayout_2->addWidget(comboBox_8);

        comboBox_7 = new QComboBox(centralwidget_2);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        verticalLayout_2->addWidget(comboBox_7);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Aux_lineEdit = new QLineEdit(centralwidget_2);
        Aux_lineEdit->setObjectName(QString::fromUtf8("Aux_lineEdit"));

        verticalLayout_3->addWidget(Aux_lineEdit);

        Aux2_lineEdit = new QLineEdit(centralwidget_2);
        Aux2_lineEdit->setObjectName(QString::fromUtf8("Aux2_lineEdit"));

        verticalLayout_3->addWidget(Aux2_lineEdit);

        User_lineEdit = new QLineEdit(centralwidget_2);
        User_lineEdit->setObjectName(QString::fromUtf8("User_lineEdit"));

        verticalLayout_3->addWidget(User_lineEdit);

        job_lineEdit = new QLineEdit(centralwidget_2);
        job_lineEdit->setObjectName(QString::fromUtf8("job_lineEdit"));

        verticalLayout_3->addWidget(job_lineEdit);

        item_lineEdit = new QLineEdit(centralwidget_2);
        item_lineEdit->setObjectName(QString::fromUtf8("item_lineEdit"));

        verticalLayout_3->addWidget(item_lineEdit);

        machine_lineEdit = new QLineEdit(centralwidget_2);
        machine_lineEdit->setObjectName(QString::fromUtf8("machine_lineEdit"));

        verticalLayout_3->addWidget(machine_lineEdit);

        rework_lineEdit = new QLineEdit(centralwidget_2);
        rework_lineEdit->setObjectName(QString::fromUtf8("rework_lineEdit"));

        verticalLayout_3->addWidget(rework_lineEdit);

        scrap_lineEdit = new QLineEdit(centralwidget_2);
        scrap_lineEdit->setObjectName(QString::fromUtf8("scrap_lineEdit"));

        verticalLayout_3->addWidget(scrap_lineEdit);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Aux_label = new QLabel(centralwidget_2);
        Aux_label->setObjectName(QString::fromUtf8("Aux_label"));
        Aux_label->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Aux_label);

        Aux2 = new QLabel(centralwidget_2);
        Aux2->setObjectName(QString::fromUtf8("Aux2"));
        Aux2->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Aux2);

        User = new QLabel(centralwidget_2);
        User->setObjectName(QString::fromUtf8("User"));
        User->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(User);

        Job = new QLabel(centralwidget_2);
        Job->setObjectName(QString::fromUtf8("Job"));
        Job->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Job);

        Item = new QLabel(centralwidget_2);
        Item->setObjectName(QString::fromUtf8("Item"));
        Item->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Item);

        Machine = new QLabel(centralwidget_2);
        Machine->setObjectName(QString::fromUtf8("Machine"));
        Machine->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Machine);

        Rework = new QLabel(centralwidget_2);
        Rework->setObjectName(QString::fromUtf8("Rework"));
        Rework->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Rework);

        Scrap = new QLabel(centralwidget_2);
        Scrap->setObjectName(QString::fromUtf8("Scrap"));
        Scrap->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Scrap);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_13 = new QLabel(centralwidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        horizontalLayout->addWidget(label_13);

        lineEdit1 = new QLineEdit(centralwidget_2);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));

        horizontalLayout->addWidget(lineEdit1);

        secondLineEdit = new QLineEdit(centralwidget_2);
        secondLineEdit->setObjectName(QString::fromUtf8("secondLineEdit"));

        horizontalLayout->addWidget(secondLineEdit);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        Apply = new QPushButton(centralwidget_2);
        Apply->setObjectName(QString::fromUtf8("Apply"));
        Apply->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout_5->addWidget(Apply);


        verticalLayout_4->addWidget(centralwidget_2);

        Terminology->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Terminology);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 25));
        Terminology->setMenuBar(menubar);
        statusbar = new QStatusBar(Terminology);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Terminology->setStatusBar(statusbar);

        retranslateUi(Terminology);

        QMetaObject::connectSlotsByName(Terminology);
    } // setupUi

    void retranslateUi(QMainWindow *Terminology)
    {
        Terminology->setWindowTitle(QCoreApplication::translate("Terminology", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Terminology", "Terminology", nullptr));
        label_4->setText(QCoreApplication::translate("Terminology", "<html><head/><body><p><span style=\" font-weight:400;\">Replaced By Select From</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Terminology", "<html><head/><body><p><span style=\" font-weight:400;\">Field To Replace</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Terminology", "<html><head/><body><p><span style=\" font-weight:400;\">Write Value </span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Terminology", "Aux 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Terminology", "Aux 2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Terminology", "Aux 3", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Terminology", "Aux2", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Terminology", "Aux3", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("Terminology", "Users", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("Terminology", "Jobs", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Terminology", "Work", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Terminology", "Task", nullptr));

        Aux_label->setText(QCoreApplication::translate("Terminology", "Aux", nullptr));
        Aux2->setText(QCoreApplication::translate("Terminology", "Aux 2", nullptr));
        User->setText(QCoreApplication::translate("Terminology", "User", nullptr));
        Job->setText(QCoreApplication::translate("Terminology", "Job", nullptr));
        Item->setText(QCoreApplication::translate("Terminology", "Item", nullptr));
        Machine->setText(QCoreApplication::translate("Terminology", "Machine", nullptr));
        Rework->setText(QCoreApplication::translate("Terminology", "Rework", nullptr));
        Scrap->setText(QCoreApplication::translate("Terminology", "Scrap", nullptr));
        label_13->setText(QCoreApplication::translate("Terminology", "Any other", nullptr));
        Apply->setText(QCoreApplication::translate("Terminology", "Apply Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Terminology: public Ui_Terminology {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINOLOGY_H
