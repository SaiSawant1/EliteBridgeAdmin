#ifndef NEWUSERFORM_H
#define NEWUSERFORM_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
namespace Ui {
class newUserForm;
}

class newUserForm : public QDialog
{
    Q_OBJECT

public:
    explicit newUserForm(QWidget *parent = nullptr);
    ~newUserForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::newUserForm *ui;
};

#endif // NEWUSERFORM_H
