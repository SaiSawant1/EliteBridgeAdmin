#ifndef NEWITEMFORM_H
#define NEWITEMFORM_H

#include <QDialog>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
namespace Ui {
class NewItemForm;
}

class NewItemForm : public QDialog
{
    Q_OBJECT

public:
    explicit NewItemForm(QWidget *parent = nullptr);
    ~NewItemForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewItemForm *ui;
};

#endif // NEWITEMFORM_H
