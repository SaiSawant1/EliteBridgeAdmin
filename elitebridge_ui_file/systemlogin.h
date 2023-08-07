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


    void on_show_clicked();

private:
    Ui::SystemLogin *ui;
    bool visible=false;
};

#endif // SYSTEMLOGIN_H
