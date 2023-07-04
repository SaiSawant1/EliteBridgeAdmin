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

    void on_pushButton_clicked();

private:

    Ui::userWindow *ui;
    ClickableLabel* addUserLabel;
    void addUserForm();
    void readDb();
};

#endif // USERWINDOW_H
