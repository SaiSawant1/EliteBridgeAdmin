#ifndef USERGROUPMAINWINDOW_H
#define USERGROUPMAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableView>
#include "ClickableLabel.h"
#include "newgroupform.h"


namespace Ui {
class UserGroupMainWindow;
}

class UserGroupMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserGroupMainWindow(QWidget *parent = nullptr);
    ~UserGroupMainWindow();

private:
    Ui::UserGroupMainWindow *ui;
    ClickableLabel* addGroupLabel;
    void addNewUserGroupForm();
};

#endif // USERGROUPMAINWINDOW_H
