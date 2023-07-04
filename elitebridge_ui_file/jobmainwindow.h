#ifndef JOBMAINWINDOW_H
#define JOBMAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableView>
#include "ClickableLabel.h"
#include "newjobform.h"
namespace Ui {
class JobMainWindow;
}

class JobMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit JobMainWindow(QWidget *parent = nullptr);
    ~JobMainWindow();

private:
    Ui::JobMainWindow *ui;
    ClickableLabel* addJobLabel;
    void addJobForm();
    void readDb();
};

#endif // JOBMAINWINDOW_H
