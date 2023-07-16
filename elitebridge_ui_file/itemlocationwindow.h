#ifndef ITEMLOCATIONWINDOW_H
#define ITEMLOCATIONWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class ItemLocationWindow;
}

class ItemLocationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ItemLocationWindow(QWidget *parent = nullptr);
    void setSelectedvValue(QString selectedValue);
    ~ItemLocationWindow();
private slots:
    void fillLocationCombo();
    void on_addLocation_clicked();

private:
    Ui::ItemLocationWindow *ui;

    QString value;
};

#endif // ITEMLOCATIONWINDOW_H
