#ifndef NEWGROUPFORM_H
#define NEWGROUPFORM_H

#include <QDialog>
#include <QDialog>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class NewGroupForm;
}

class NewGroupForm : public QDialog
{
    Q_OBJECT

public:
    explicit NewGroupForm(QWidget *parent = nullptr);
    ~NewGroupForm();

private slots:
    void on_createNewGroup_clicked();

private:
    Ui::NewGroupForm *ui;
};

#endif // NEWGROUPFORM_H
