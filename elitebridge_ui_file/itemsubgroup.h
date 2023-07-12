#ifndef ITEMSUBGROUP_H
#define ITEMSUBGROUP_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class ItemSubGroup;
}

class ItemSubGroup : public QDialog
{
    Q_OBJECT

public:
    explicit ItemSubGroup(QWidget *parent = nullptr);
    ~ItemSubGroup();
    void onCellClicked(int row, int column);
    void fillAdmin();
    void readDb();
    void refresh();
private slots:
    void on_update_clicked();
    void on_add_clicked();
    void on_delete_2_clicked();
private:
    Ui::ItemSubGroup *ui;

    QString selectedValue;
};

#endif // ITEMSUBGROUP_H
