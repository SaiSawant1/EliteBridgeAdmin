#ifndef JOBMAINWINDOW_H
#define JOBMAINWINDOW_H

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
#include <QLineEdit>

struct undoStructJob{
    QString job_2;
    QString Description;
    QString Alias;
    QString ContractDate;
    QString jobGroup;
    QString JobEnabled;
    QString DateCreated;
    QString CreatedBy;
    QString DatelastModified;
    QString LastModifiedBy;
};


namespace Ui {
class JobMainWindow;
}

class JobMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit JobMainWindow(QWidget *parent = nullptr);
    ~JobMainWindow();
private slots:
    void onCellClicked(int row, int column);
    void addUserForm();
    void search();
    void deleteUser();
    void updateUser();
    void userSave();
    void fillUndoStruct();
    void undoFunc();
private:
    Ui::JobMainWindow *ui;
    QString selectedValue;
    ClickableLabel* addUserLabel;
    ClickableLabel* addUpdateLabel;
    ClickableLabel* addSaveLabel;
    ClickableLabel* addUndoLabel;
    ClickableLabel* addfindLabel;
    ClickableLabel* addDeleteLabel;
    ClickableLabel* addExitLabel;
    QLineEdit* lineEdit;
    void readDb();
    undoStructJob* undo;
};

#endif // JOBMAINWINDOW_H
