#ifndef MACHINE_H
#define MACHINE_H

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


struct undoStructMacine{
    QString Machine_2;
    QString Description;
    QString Alias;
    QString purchaseDate;
    QString MachineGroup;
    QString MachineEnable;
    QString DateCreated;
    QString CreatedBy;
    QString DatelastModified;
    QString LastModifiedBy;
};

QT_BEGIN_NAMESPACE
namespace Ui { class Machine; }
QT_END_NAMESPACE

class Machine : public QMainWindow
{
    Q_OBJECT

public:
    Machine(QWidget *parent = nullptr);
    ~Machine();
private slots:
    void onCellClicked(int row, int column);
    void addUserForm();
    void search();
    void deleteUser();
    void updateUser();
    void userSave();
    void fillUndoStruct();
    void undoFunc();
    //    void fillLineEdit();
    //    void on_actionAdd_User_To_Group_triggered();
private:
    QString selectedValue;
    Ui::Machine *ui;
    ClickableLabel* addUserLabel;
    ClickableLabel* addUpdateLabel;
    ClickableLabel* addSaveLabel;
    ClickableLabel* addUndoLabel;
    ClickableLabel* addfindLabel;
    ClickableLabel* addDeleteLabel;
    ClickableLabel* addExitLabel;
    QLineEdit* lineEdit;
    undoStructMacine* undo;
    void readDb();

};
#endif // MACHINE_H
