#ifndef UPDATEUSER_H
#define UPDATEUSER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
namespace Ui {
class UpdateUser;
}

class UpdateUser : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateUser(QWidget *parent = nullptr);
    ~UpdateUser();

private slots:
    void on_updateUser_clicked();

private:
    Ui::UpdateUser *ui;
};

#endif // UPDATEUSER_H
