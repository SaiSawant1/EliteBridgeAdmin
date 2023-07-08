#include "selectgroup.h"
#include "qcheckbox.h"
#include "ui_selectgroup.h"

selectGroup::selectGroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectGroup)
{
    ui->setupUi(this);
    fetchGroups();
    setScrollArea();
}

selectGroup::~selectGroup()
{
    delete ui;
}
void selectGroup::setValue(QString value){
    selectedUser=value;
    ui->selectedIDLabel->setText(selectedUser);
}

void selectGroup::fetchGroups(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT groupID,groupName FROM Groups");

    if (query.exec())
    {
        // Iterate over the result set and store the group names in the list

        while (query.next())
        {
            Group group;
            group.groupID = query.value(0).toString();
            group.name = query.value(1).toString();
            groups.append(group);
        }
    }
    else
    {
        // Handle the case when the query execution fails
        qDebug() << "Error executing query:" << query.lastError().text();
    }

    db.close();
}
void selectGroup::setScrollArea()
{
    QVBoxLayout *layout = new QVBoxLayout;

    for(const Group& group : groups)
    {
        QCheckBox *checkbox = new QCheckBox(group.name);
        checkbox->setProperty("groupId", group.groupID);
        layout->addWidget(checkbox);
         checkboxes.append(checkbox);
    }

    QWidget *widget = new QWidget;
    widget->setLayout(layout);
    ui->scrollArea->setWidget(widget);
}

void selectGroup::on_addToGroup_clicked()
{
    QList<QString> checkedGroupIDs; // QList to store the checked group IDs

    // Iterate over the checkbox widgets
    for (QCheckBox *checkbox : checkboxes)
    {
        if (checkbox->isChecked())
        {
            QString groupID = checkbox->property("groupId").toString();
            checkedGroupIDs.append(groupID);
        }
    }

    // Perform operations with the checkedGroupIDs QList
    // For example, you can insert the user into the groups using the IDs in the QList
    QString userID = selectedUser;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO user_group (userID, groupID) VALUES (:userID, :groupID)");

    for (const QString& groupID : checkedGroupIDs)
    {
        query.bindValue(":userID", userID);
        query.bindValue(":groupID", groupID);

        if (query.exec())
        {
            qDebug() << "User added to group with ID" << groupID;
        }
        else
        {
            qDebug() << "Error executing query:" << query.lastError().text();
        }
    }
    db.close();
}

