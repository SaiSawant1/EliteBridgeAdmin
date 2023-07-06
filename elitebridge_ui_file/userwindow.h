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
    void onCellClicked(int row, int column);
    void on_create_transaction_triggered();

    void on_actionuser_grants_triggered();

    void on_delete_2_clicked();

    void on_update_clicked();

signals:
    void cellSelected(const QString& selectedValue);

private:
    QString selectedValue;
    Ui::userWindow *ui;
    ClickableLabel* addUserLabel;
    void addUserForm();
    void readDb();
};

#endif // USERWINDOW_H
