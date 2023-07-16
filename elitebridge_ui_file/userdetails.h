#ifndef USERDETAILS_H
#define USERDETAILS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class UserDetails;
}

class UserDetails : public QDialog
{
    Q_OBJECT

public:
    explicit UserDetails(QWidget *parent = nullptr);
    void fillItem(QString selectedValue);
    ~UserDetails();

private:
    Ui::UserDetails *ui;
    void fillLineEdits();
    QString User;
};

#endif // USERDETAILS_H
