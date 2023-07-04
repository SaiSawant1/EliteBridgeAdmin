#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "userwindow.h"
#include "jobmainwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_items_clicked();

    void on_jobs_clicked();

    void on_users_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
