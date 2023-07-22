#ifndef VIEWGRANTS_H
#define VIEWGRANTS_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

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
    QSet<QString> userRights;
    QSet<QString> groupRights;
};

#endif // VIEWGRANTS_H
