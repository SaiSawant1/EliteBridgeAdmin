#ifndef AUXMAINWINDOW2_H
#define AUXMAINWINDOW2_H

#include <QDialog>
#include <QMainWindow>
#include "ClickableLabel.h"
#include <QLineEdit>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>

struct undoStructAux2{
    QString Aux;
    QString Auxiliary;
    QString AuxiliaryAlias;
    QString AuxEnable;
    QString DateCreated;
    QString CreatedBy;
    QString DatelastModified;
    QString LastModifiedBy;
};


namespace Ui {
class AuxMainwindow2;
}

class AuxMainwindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit AuxMainwindow2(QWidget *parent = nullptr);
    ~AuxMainwindow2();
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
    Ui::AuxMainwindow2 *ui;
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
    undoStructAux2* undo;
};

#endif // AUXMAINWINDOW2_H
