#ifndef SYSTEMLOGIN_H
#define SYSTEMLOGIN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class SystemLogin;
}

class SystemLogin : public QDialog
{
    Q_OBJECT

public:
    explicit SystemLogin(QWidget *parent = nullptr);
    ~SystemLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SystemLogin *ui;
};

#endif // SYSTEMLOGIN_H
