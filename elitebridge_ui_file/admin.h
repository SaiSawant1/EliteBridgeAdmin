#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <Qt>
#include <QMouseEvent>
#include <QFileDialog>
#include "shareddata.h"
namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

signals:
    void clicked();

public:
    explicit Admin(QWidget *parent = nullptr);
    void addReporting();
    void mousePressEvent(QMouseEvent* event);
    ~Admin();

private slots:
    void on_btn_reporting_clicked();

    void on_btn_EDI_clicked();

    void on_btn_sysConfig_clicked();

    void on_btn_process_clicked();

    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
