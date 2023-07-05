#ifndef VIEWGRANTS_H
#define VIEWGRANTS_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

namespace Ui {
class ViewGrants;
}

class ViewGrants : public QDialog
{
    Q_OBJECT

public:
    explicit ViewGrants(QWidget *parent = nullptr);
    ~ViewGrants();

private slots:
    void on_viewGrants_clicked();

private:
    Ui::ViewGrants *ui;
    QString userId;
};

#endif // VIEWGRANTS_H
