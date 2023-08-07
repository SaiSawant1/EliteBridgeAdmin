#ifndef ADMINSETUP_H
#define ADMINSETUP_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
namespace Ui {
class AdminSetup;
}

class AdminSetup : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminSetup(QWidget *parent = nullptr);
    ~AdminSetup();
    void onCellClicked(int row, int column);
    void fillAdmin();
    void readDb();
    void refresh();

private slots:
    void on_add_clicked();

    void on_delete_2_clicked();

    void on_update_clicked();
    void clearLineEdits();
private:
    Ui::AdminSetup *ui;
    QString selectedValue;
};

#endif // ADMINSETUP_H
