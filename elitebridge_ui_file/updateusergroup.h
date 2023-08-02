#ifndef UPDATEUSERGROUP_H
#define UPDATEUSERGROUP_H

#include "qcheckbox.h"
#include <QDialog>
#include <QList>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSet>

struct GroupUpdate
{
    QString groupID;
    QString name;
};


namespace Ui {
class UpdateUserGroup;
}

class UpdateUserGroup : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateUserGroup(QWidget *parent = nullptr);
    void setValue(QString value);
    ~UpdateUserGroup();

private slots:


    void on_addToGroup_clicked();

private:
    Ui::UpdateUserGroup *ui;
    QString selectedUser;
    QList<GroupUpdate> groups;
    void fetchGroups();
    void setScrollArea();
    QList<QCheckBox*> checkboxes;
    QSet<QString> assignedGroups;
};

#endif // UPDATEUSERGROUP_H
