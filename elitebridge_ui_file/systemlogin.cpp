#include "systemlogin.h"
#include "ui_systemlogin.h"
#include "mainwindow.h"
#include <QMessageBox>
SystemLogin::SystemLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemLogin)
{
    ui->setupUi(this);
}

SystemLogin::~SystemLogin()
{
    delete ui;
}

void SystemLogin::on_pushButton_clicked()
{
    QString userName=ui->user_name->text();
    QString password=ui->password->text();

    if(userName=="root" && password=="root"){
        MainWindow* adminSetup=new MainWindow;

        adminSetup->show();
        reject();
    }
    else{
        QMessageBox::warning(nullptr,"invalid credentials","User Name or Pass word is wrong. Please enter corrent info to login");
        return ;
    }

}

