#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QObject>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableView>
#include "ClickableLabel.h"
#include <QLineEdit>
#include "selectgroup.h"


struct undoStruct{
    QString id;
    QString name;
    QString alias;
    QString pass;
    QString imageFile;
    QString cost;
    QString allowlogin;
};



namespace Ui {
class userWindow;
}

class userWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit userWindow(QWidget *parent = nullptr);
    ~userWindow();

private slots:

    void onCellClicked(int row, int column);
    void on_create_transaction_triggered();

    void on_actionuser_grants_triggered();
    void search();
    void deleteUser();
    void updateUser();
    void userSave();
    void fillUndoStruct();
    void undoFunc();
    void fillLineEdit();
    void on_actionAdd_User_To_Group_triggered();

signals:
    void cellSelected(const QString& selectedValue);

private:
    QString selectedValue;
    Ui::userWindow *ui;
    ClickableLabel* addUserLabel;
    ClickableLabel* addUpdateLabel;
    ClickableLabel* addSaveLabel;
    ClickableLabel* addUndoLabel;
    ClickableLabel* addfindLabel;
    ClickableLabel* addDeleteLabel;
    ClickableLabel* addExitLabel;
    undoStruct* undo;
    QLineEdit* lineEdit;

    void addUserForm();
    void readDb();
};

#endif // USERWINDOW_H
