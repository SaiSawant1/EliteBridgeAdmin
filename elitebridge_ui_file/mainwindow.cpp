#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "userwindow.h"
#include "itemsmainwindow.h"
#include "adminsetup.h".h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_items_clicked()
{
    ItemsMainWindow* itemWindow=new ItemsMainWindow;
    itemWindow->show();
}


void MainWindow::on_jobs_clicked()
{

    JobMainWindow* newJobWindow=new JobMainWindow;
    newJobWindow->show();
}


void MainWindow::on_users_clicked()
{
    userWindow* newUserwindow=new userWindow;
    newUserwindow->show();
}


void MainWindow::on_pushButton_36_clicked()
{
    UserGroupMainWindow *userGroup=new UserGroupMainWindow;
    userGroup->show();
}


void MainWindow::on_pushButton_39_clicked()
{
    AdminSetup* adminWin=new AdminSetup;
    adminWin->show();
}

