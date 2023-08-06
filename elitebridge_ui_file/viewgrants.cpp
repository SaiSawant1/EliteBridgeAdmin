#include "viewgrants.h"
#include "ui_viewgrants.h"
#include "shareddata.h"

ViewGrants::ViewGrants(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewGrants)
{
    ui->setupUi(this);
    setWindowTitle("View Grants");
}

ViewGrants::~ViewGrants()
{
    delete ui;
}

void ViewGrants::on_viewGrants_clicked()
{

    QString userId = ui->lineEdit->text();

    QString dbPath = SharedData::getInstance()->getValue();
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);

    if (!dataBase.open())
    {
        qDebug() << "dataBase open error";
        return;
    }

    // Fetch individual user rights

    QSqlQuery userQuery(dataBase);
    userQuery.prepare("SELECT * FROM Transaction_Rights WHERE userID = :userId");
    userQuery.bindValue(":userId", userId);

    if (userQuery.exec())
    {
        if (userQuery.next())
        {
            QSqlRecord record = userQuery.record();
            for (int i = 1; i < record.count(); ++i)
            {
                if (userQuery.value(i).toString() == "true")
                {
                    QString grantName = record.fieldName(i);
                    userRights.insert(grantName);
                }
            }
        }
    }


    //Fect groups for selected user
    QSqlQuery groupQuery(dataBase);
    groupQuery.prepare("SELECT groupID FROM user_group WHERE userID = :userId");
    groupQuery.bindValue(":userId", userId);

    if(groupQuery.exec()){
        while (groupQuery.next()){

            QSqlQuery groupTransactionQuery(dataBase);
            groupTransactionQuery.prepare("SELECT * FROM group_transaction WHERE GroupID = :groupId");
            groupTransactionQuery.bindValue(":groupId",groupQuery.value(0).toString());
            if(groupTransactionQuery.exec()){

                if (groupTransactionQuery.next())
                {
                    QSqlRecord record = groupTransactionQuery.record();
                    for (int i = 1; i < record.count(); ++i)
                    {
                        if (groupTransactionQuery.value(i).toString() == "true")
                        {
                            QString grantName = record.fieldName(i);
                            groupRights.insert(grantName);
                        }
                    }
                }
            }

        }
    }



    dataBase.close();

    userRights.unite(groupRights);

    clearLayout(ui->scrollArea->layout());

    ui->scrollArea->setLayout(new QVBoxLayout);
    for (const QString& str : userRights)
    {
        QPushButton* button = new QPushButton(str);
        // You can connect a signal-slot here if needed (e.g., to handle button clicks)

        // Add the button to the layout
        ui->scrollArea->layout()->addWidget(button);
    }

    userRights.clear();
    groupRights.clear();
    // Set the scroll area's widget as the viewport to ensure it's scrollable
}

void ViewGrants::clearLayout(QLayout* layout) {
    if (!layout)
        return;

    while (QLayoutItem* item = layout->takeAt(0)) {
        if (QWidget* widget = item->widget()) {
            widget->deleteLater();
        }
        delete item;
    }

    delete layout;
}
