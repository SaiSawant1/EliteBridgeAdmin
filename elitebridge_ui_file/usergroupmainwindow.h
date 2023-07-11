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
#include "QLineEdit"


struct groupUndo{
    QString id;
    QString name;
};

namespace Ui {
class UserGroupMainWindow;
}

class UserGroupMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserGroupMainWindow(QWidget *parent = nullptr);
    ~UserGroupMainWindow();
    void onCellClicked(int row, int column);
    void addGroup();
    void updateGroup();
    void  groupSave();
    void deleteGroup();
    void readDb();
    void search();
    void fillLineEdits();
    void undoFunc();
    void fillUndo();

private slots:
    void on_actionTransaction_triggered();

    void on_actionGroup_Transaction_triggered();

private:
    QString selectedValue;
    Ui::UserGroupMainWindow *ui;
    ClickableLabel* addUserLabel;
    ClickableLabel* addUpdateLabel;
    ClickableLabel* addSaveLabel;
    ClickableLabel* addUndoLabel;
    ClickableLabel* addfindLabel;
    ClickableLabel* addDeleteLabel;
    ClickableLabel* addExitLabel;
    groupUndo* undo;
    QLineEdit* lineEdit;
};

#endif // USERGROUPMAINWINDOW_H
