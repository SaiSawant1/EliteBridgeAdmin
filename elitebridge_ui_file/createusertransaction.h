#ifndef CREATEUSERTRANSACTION_H
#define CREATEUSERTRANSACTION_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include "userwindow.h"

namespace Ui {
class CreateUserTransaction;
}

class CreateUserTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit CreateUserTransaction(QWidget *parent = nullptr);
    void setUserWindowInstance(userWindow* userWindowInstance);
    void onCellSelected(const QString& selectedValue);
    ~CreateUserTransaction();

private slots:
    void on_pushButton_clicked();



private:
    Ui::CreateUserTransaction *ui;
    userWindow* m_userWindowInstance;
    QString value;

};

#endif // CREATEUSERTRANSACTION_H
