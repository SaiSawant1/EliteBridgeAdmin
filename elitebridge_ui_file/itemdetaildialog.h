#ifndef ITEMDETAILDIALOG_H
#define ITEMDETAILDIALOG_H

#include <QDialog>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class ItemDetailDialog;
}

class ItemDetailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ItemDetailDialog(QWidget *parent = nullptr);
    void fillItem(QString selectedValue);
    void fillLineEdits();
    ~ItemDetailDialog();
private slots:



private:
    Ui::ItemDetailDialog *ui;
    QString item;
};

#endif // ITEMDETAILDIALOG_H
