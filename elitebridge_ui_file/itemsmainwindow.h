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
    void on_refereshTable_clicked();

private:
    Ui::ItemsMainWindow *ui;
    ClickableLabel* addItemLabel;
    void addUserForm();
    void readDb();
};

#endif // ITEMSMAINWINDOW_H
