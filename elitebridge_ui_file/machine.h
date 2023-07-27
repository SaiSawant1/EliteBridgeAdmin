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
#include <QTableView>
#include <QHBoxLayout>

struct undoStructMachine{
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

namespace Ui {
class Machine;
}

class Machine : public QMainWindow
{
    Q_OBJECT

public:
    explicit Machine(QWidget *parent = nullptr);
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
    undoStructMachine* undo;
    void readDb();
};

#endif // MACHINE_H
