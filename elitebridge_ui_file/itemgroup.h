#ifndef ITEMGROUP_H
#define ITEMGROUP_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class ItemGroup;
}

class ItemGroup : public QDialog
{
    Q_OBJECT

public:
    explicit ItemGroup(QWidget *parent = nullptr);
    ~ItemGroup();
    void onCellClicked(int row, int column);

    void fillAdmin();
    void readDb();
    void refresh();

private slots:
    void on_update_clicked();
    void on_add_clicked();
    void on_delete_2_clicked();

private:
    Ui::ItemGroup *ui;
    QString selectedValue;
};

#endif // ITEMGROUP_H
