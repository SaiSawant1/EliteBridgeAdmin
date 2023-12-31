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
#include <QFileDialog>
#include <QMouseEvent>
#include "itemgroup.h"
#include "itemsubgroup.h"
#include "itemdetaildialog.h"

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
    QString location;
    QString min;
    QString max;
    QString critical;
    QString UsedMinQuantity;
    QString ReWorkPickUplevel;
    QString DoNotOrder;
    QString Swappable;
    QString SwapQuantity;
    QString SwapByUser;
    QString SwapByJob;
    QString SwapByMachine;
    QString Ticketable;
    QString CanBeReturned;
    QString CanBeRework;
    QString CanBeScrap;
    QString LifeTracked;
    QString initialLIfe;
    QString MinimumLIfe;


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
    void showDialog(int row, int column);
    void fillLineEdits();
    void fillGroupCombo();
    void fillSubGroupCombo();
    void clearLineEdits();

    bool eventFilter(QObject *obj, QEvent *event) override;
    void on_actioncreate_item_group_triggered();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    void on_actioncreate_item_sub_group_triggered();

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
    ClickableLabel* addLocationLabel;
    undoItemStruct* undo;
    QLineEdit* lineEdit;
    void addUserForm();
    void readDb();

    bool resizing;
    QPoint dragStartPosition;
};

#endif // ITEMSMAINWINDOW_H
