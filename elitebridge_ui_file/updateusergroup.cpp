#include "updateusergroup.h"
#include "ui_updateusergroup.h"
#include "qcheckbox.h"
#include "shareddata.h"

UpdateUserGroup::UpdateUserGroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateUserGroup)
{
    ui->setupUi(this);
    setWindowTitle("Remove User From Group");
}

UpdateUserGroup::~UpdateUserGroup()
{
    delete ui;
}


void UpdateUserGroup::setValue(QString value){
    selectedUser=value;
    ui->selectedIDLabel->setText(selectedUser);
    fetchGroups();
    setScrollArea();
}

void UpdateUserGroup::fetchGroups(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

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
            GroupUpdate group;
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

    // Fetch the groupIDs associated with the selectedUser from the database
    QSqlQuery assignedGroupsQuery;
    assignedGroupsQuery.prepare("SELECT groupID FROM user_group WHERE userID = :userID");
    assignedGroupsQuery.bindValue(":userID", selectedUser);
    if (assignedGroupsQuery.exec())
    {
        while (assignedGroupsQuery.next())
        {
            QString groupID = assignedGroupsQuery.value(0).toString();
            assignedGroups.insert(groupID);
        }
    }
    else
    {
        // Handle the case when the query execution fails
        qDebug() << "Error executing query:" << assignedGroupsQuery.lastError().text();
    }


    db.close();
}
void UpdateUserGroup::setScrollArea()
{
    QVBoxLayout *layout = new QVBoxLayout;

    for(const GroupUpdate& group : groups)
    {
        QCheckBox *checkbox = new QCheckBox(group.name);
        checkbox->setProperty("groupId", group.groupID);
        layout->addWidget(checkbox);
        checkboxes.append(checkbox);

        if (assignedGroups.contains(group.groupID))
        {
            checkbox->setChecked(true);
        }

    }

    QWidget *widget = new QWidget;
    widget->setLayout(layout);
    ui->scrollArea->setWidget(widget);
}



void UpdateUserGroup::on_addToGroup_clicked()
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

    db.setDatabaseName(SharedData::getInstance()->getValue());

    if (!db.open()) {
        qInfo()<<"db connection failed";
        return;
    }
    QSqlQuery query;

    QString deleteQuery = "DELETE FROM user_group WHERE userID = :userID AND groupID = :groupID";
    query.prepare(deleteQuery);

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

