/********************************************************************************
** Form generated from reading UI file 'jobmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOBMAINWINDOW_H
#define UI_JOBMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JobMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QTableWidget *tableWidget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Job_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Description;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Alias;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *contractDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *JobGroup;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *JobEnable;
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
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuRecord;
    QMenu *menuAudit;
    QMenu *menuLocation;
    QMenu *menujob;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JobMainWindow)
    {
        if (JobMainWindow->objectName().isEmpty())
            JobMainWindow->setObjectName(QString::fromUtf8("JobMainWindow"));
        JobMainWindow->resize(730, 480);
        centralwidget = new QWidget(JobMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        frame_2 = new QFrame(centralwidget);
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

        Job_2 = new QLineEdit(frame_2);
        Job_2->setObjectName(QString::fromUtf8("Job_2"));

        horizontalLayout->addWidget(Job_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Description = new QLineEdit(frame_2);
        Description->setObjectName(QString::fromUtf8("Description"));

        horizontalLayout_2->addWidget(Description);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Alias = new QLineEdit(frame_2);
        Alias->setObjectName(QString::fromUtf8("Alias"));

        horizontalLayout_3->addWidget(Alias);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        contractDate = new QLineEdit(frame_2);
        contractDate->setObjectName(QString::fromUtf8("contractDate"));

        horizontalLayout_4->addWidget(contractDate);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        JobGroup = new QLineEdit(frame_2);
        JobGroup->setObjectName(QString::fromUtf8("JobGroup"));

        horizontalLayout_5->addWidget(JobGroup);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        JobEnable = new QLineEdit(frame_2);
        JobEnable->setObjectName(QString::fromUtf8("JobEnable"));

        horizontalLayout_6->addWidget(JobEnable);


        verticalLayout->addLayout(horizontalLayout_6);

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

        JobMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JobMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 730, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuRecord = new QMenu(menubar);
        menuRecord->setObjectName(QString::fromUtf8("menuRecord"));
        menuAudit = new QMenu(menubar);
        menuAudit->setObjectName(QString::fromUtf8("menuAudit"));
        menuLocation = new QMenu(menubar);
        menuLocation->setObjectName(QString::fromUtf8("menuLocation"));
        menujob = new QMenu(menubar);
        menujob->setObjectName(QString::fromUtf8("menujob"));
        JobMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(JobMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JobMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuRecord->menuAction());
        menubar->addAction(menuAudit->menuAction());
        menubar->addAction(menuLocation->menuAction());
        menubar->addAction(menujob->menuAction());

        retranslateUi(JobMainWindow);

        QMetaObject::connectSlotsByName(JobMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *JobMainWindow)
    {
        JobMainWindow->setWindowTitle(QCoreApplication::translate("JobMainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("JobMainWindow", "Jobs                       ", nullptr));
        label_2->setText(QCoreApplication::translate("JobMainWindow", "Description           ", nullptr));
        label_3->setText(QCoreApplication::translate("JobMainWindow", "Alias                      ", nullptr));
        label_4->setText(QCoreApplication::translate("JobMainWindow", "Contract Date      ", nullptr));
        label_5->setText(QCoreApplication::translate("JobMainWindow", "Jobs Group           ", nullptr));
        label_6->setText(QCoreApplication::translate("JobMainWindow", "Jobs Enable          ", nullptr));
        label_7->setText(QCoreApplication::translate("JobMainWindow", "Date Created        ", nullptr));
        label_8->setText(QCoreApplication::translate("JobMainWindow", "Created By            ", nullptr));
        label_9->setText(QCoreApplication::translate("JobMainWindow", "Date last Modified", nullptr));
        label_10->setText(QCoreApplication::translate("JobMainWindow", "Last Modified By   ", nullptr));
        menuFile->setTitle(QCoreApplication::translate("JobMainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("JobMainWindow", "View", nullptr));
        menuRecord->setTitle(QCoreApplication::translate("JobMainWindow", "Record", nullptr));
        menuAudit->setTitle(QCoreApplication::translate("JobMainWindow", "Audit", nullptr));
        menuLocation->setTitle(QCoreApplication::translate("JobMainWindow", "Location", nullptr));
        menujob->setTitle(QCoreApplication::translate("JobMainWindow", "job", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JobMainWindow: public Ui_JobMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBMAINWINDOW_H
