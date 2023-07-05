#ifndef CREATEUSERTRANSACTION_H
#define CREATEUSERTRANSACTION_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
namespace Ui {
class CreateUserTransaction;
}

class CreateUserTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit CreateUserTransaction(QWidget *parent = nullptr);
    ~CreateUserTransaction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateUserTransaction *ui;
};

#endif // CREATEUSERTRANSACTION_H
