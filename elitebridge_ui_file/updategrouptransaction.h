#ifndef UPDATEGROUPTRANSACTION_H
#define UPDATEGROUPTRANSACTION_H

#include <QDialog>
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class UpdateGroupTransaction;
}

class UpdateGroupTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateGroupTransaction(QWidget *parent = nullptr);
    void setSelectedValue(QString value);
    void setCheckMarks();
    ~UpdateGroupTransaction();
private slots:
    void on_pushButton_clicked();
private:
    Ui::UpdateGroupTransaction *ui;
    QString selectedValue;
};

#endif // UPDATEGROUPTRANSACTION_H
