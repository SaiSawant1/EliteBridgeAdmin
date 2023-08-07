#ifndef AUXMAINWINDOW_H
#define AUXMAINWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include "ClickableLabel.h"
#include <QLineEdit>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QMouseEvent>
struct undoStructAux{
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
class AuxMainWindow;
}

class AuxMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AuxMainWindow(QWidget *parent = nullptr);
    ~AuxMainWindow();
private slots:
    void onCellClicked(int row, int column);
    void addUserForm();
    void search();
    void deleteUser();
    void updateUser();
    void userSave();
    void fillUndoStruct();
    void fillLineEdits();
    void clearLineEdits();
    void undoFunc();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
private:
    Ui::AuxMainWindow *ui;
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
    undoStructAux* undo;
    bool resizing;
    QPoint dragStartPosition;

};

#endif // AUXMAINWINDOW_H



