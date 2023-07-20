#ifndef NEWLOCATIONWINDOW_H
#define NEWLOCATIONWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class NewLocationWindow;
}

class NewLocationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NewLocationWindow(QWidget *parent = nullptr);
    ~NewLocationWindow();
    void onCellClicked(int row, int column);
    void fillAdmin();
    void readDb();
    void refresh();

private slots:

    void on_add_clicked();

    void on_delete_2_clicked();

    void on_update_clicked();
private:
    Ui::NewLocationWindow *ui;
     QString selectedValue;
};

#endif // NEWLOCATIONWINDOW_H
