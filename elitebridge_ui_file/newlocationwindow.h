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

class NewLocationWindow : public QMainWindow
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
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    void clearLineEdits();
private:
    Ui::NewLocationWindow *ui;
    QString selectedValue;
    bool resizing;
    QPoint dragStartPosition;

};

#endif // NEWLOCATIONWINDOW_H



