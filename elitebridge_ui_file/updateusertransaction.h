#ifndef UPDATEUSERTRANSACTION_H
#define UPDATEUSERTRANSACTION_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class UpdateUserTransaction;
}

class UpdateUserTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateUserTransaction(QWidget *parent = nullptr);
    void setSelectedValue(QString value);
    void setCheckMarks();
    ~UpdateUserTransaction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::UpdateUserTransaction *ui;
    QString selectedValue;
};

#endif // UPDATEUSERTRANSACTION_H
