#ifndef ITEMSMAINWINDOW_H
#define ITEMSMAINWINDOW_H

#include "newitemform.h"
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


struct undoItemStruct{
    QString id;
    QString name;
    QString alias;
    QString itemgroup;
    QString itemsubgroup;
    QString supplierpartnumber;
    QString unitcost;
    QString unitused;
    QString packetsize;
    QString brand;
    QString image;
    QString newused;

};

namespace Ui {
class ItemsMainWindow;
}

class ItemsMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ItemsMainWindow(QWidget *parent = nullptr);
    ~ItemsMainWindow();

private slots:
    void search();
    void deleteItem();
    void updateItem();
    void itemSave();
    void fillUndoStruct();
    void undoFunc();
    void onCellClicked(int row, int column);
    void fillLineEdits();
private:
    QString selectedValue;
    Ui::ItemsMainWindow *ui;
    ClickableLabel* addItemLabel;
    ClickableLabel* addUpdateLabel;
    ClickableLabel* addSaveLabel;
    ClickableLabel* addUndoLabel;
    ClickableLabel* addfindLabel;
    ClickableLabel* addDeleteLabel;
    ClickableLabel* addExitLabel;
    undoItemStruct* undo;
    QLineEdit* lineEdit;
    void addUserForm();
    void readDb();
};

#endif // ITEMSMAINWINDOW_H
