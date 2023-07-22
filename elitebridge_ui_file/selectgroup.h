#ifndef SELECTGROUP_H
#define SELECTGROUP_H

#include "qcheckbox.h"
#include <QDialog>
#include <QList>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSet>

struct Group
{
    QString groupID;
    QString name;
};

namespace Ui {
class selectGroup;
}

class selectGroup : public QDialog
{
    Q_OBJECT

public:
    explicit selectGroup(QWidget *parent = nullptr);
    void setValue(QString value);
    ~selectGroup();


private slots:
    void on_addToGroup_clicked();

private:

    Ui::selectGroup *ui;
    QString selectedUser;
    QList<Group> groups;
    void fetchGroups();
    void setScrollArea();
    QList<QCheckBox*> checkboxes;
    QSet<QString> assignedGroups;
};

#endif // SELECTGROUP_H
