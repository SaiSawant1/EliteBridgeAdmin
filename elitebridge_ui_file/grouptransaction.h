#ifndef GROUPTRANSACTION_H
#define GROUPTRANSACTION_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class groupTransaction;
}

class groupTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit groupTransaction(QWidget *parent = nullptr);
    void setSelectedValue(QString value);
    ~groupTransaction();

private slots:
    void on_grantButton_clicked();

private:
    void grantRights(QString User);
    Ui::groupTransaction *ui;
    QString selectedValue;
    void fillValue();
};

#endif // GROUPTRANSACTION_H
