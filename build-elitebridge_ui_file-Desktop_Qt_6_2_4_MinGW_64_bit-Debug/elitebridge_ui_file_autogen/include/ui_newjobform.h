/********************************************************************************
** Form generated from reading UI file 'newjobform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWJOBFORM_H
#define UI_NEWJOBFORM_H

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

class Ui_NewJobForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *NewJobForm)
    {
        if (NewJobForm->objectName().isEmpty())
            NewJobForm->setObjectName(QString::fromUtf8("NewJobForm"));
        NewJobForm->resize(640, 480);
        verticalLayout = new QVBoxLayout(NewJobForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(NewJobForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(NewJobForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 616, 412));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addWidget(frame);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout_2->addWidget(frame_3);

        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_2->addWidget(frame_2);

        frame_5 = new QFrame(scrollAreaWidgetContents);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_5 = new QLineEdit(frame_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout_2->addWidget(frame_5);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_4 = new QLineEdit(frame_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout_2->addWidget(frame_4);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(NewJobForm);

        QMetaObject::connectSlotsByName(NewJobForm);
    } // setupUi

    void retranslateUi(QDialog *NewJobForm)
    {
        NewJobForm->setWindowTitle(QCoreApplication::translate("NewJobForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewJobForm", "Create New Job", nullptr));
        label_2->setText(QCoreApplication::translate("NewJobForm", "Job ID             ", nullptr));
        label_4->setText(QCoreApplication::translate("NewJobForm", "Name             ", nullptr));
        label_3->setText(QCoreApplication::translate("NewJobForm", "Alias               ", nullptr));
        label_6->setText(QCoreApplication::translate("NewJobForm", "Contract date", nullptr));
        label_5->setText(QCoreApplication::translate("NewJobForm", "Job Group      ", nullptr));
        pushButton->setText(QCoreApplication::translate("NewJobForm", "Create New Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewJobForm: public Ui_NewJobForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWJOBFORM_H
