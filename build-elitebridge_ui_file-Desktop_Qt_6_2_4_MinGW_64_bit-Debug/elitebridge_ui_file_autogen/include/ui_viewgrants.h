/********************************************************************************
** Form generated from reading UI file 'viewgrants.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWGRANTS_H
#define UI_VIEWGRANTS_H

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

class Ui_ViewGrants
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *viewGrants;

    void setupUi(QDialog *ViewGrants)
    {
        if (ViewGrants->objectName().isEmpty())
            ViewGrants->setObjectName(QString::fromUtf8("ViewGrants"));
        ViewGrants->resize(640, 480);
        verticalLayout = new QVBoxLayout(ViewGrants);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ViewGrants);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(ViewGrants);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 616, 361));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        viewGrants = new QPushButton(ViewGrants);
        viewGrants->setObjectName(QString::fromUtf8("viewGrants"));

        verticalLayout->addWidget(viewGrants);


        retranslateUi(ViewGrants);

        QMetaObject::connectSlotsByName(ViewGrants);
    } // setupUi

    void retranslateUi(QDialog *ViewGrants)
    {
        ViewGrants->setWindowTitle(QCoreApplication::translate("ViewGrants", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ViewGrants", "userID", nullptr));
        viewGrants->setText(QCoreApplication::translate("ViewGrants", "view grants for user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewGrants: public Ui_ViewGrants {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWGRANTS_H
