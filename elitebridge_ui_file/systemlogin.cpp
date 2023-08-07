#include "systemlogin.h"
#include "ui_systemlogin.h"
#include "mainwindow.h"
#include "shareddata.h"
#include <QMessageBox>
#include <QLineEdit>
SystemLogin::SystemLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemLogin)
{
    ui->setupUi(this);
    setWindowTitle("System Login");
    ui->password->setEchoMode(QLineEdit::Password);
}

SystemLogin::~SystemLogin()
{
    delete ui;
}

void SystemLogin::on_pushButton_clicked()
{
    QString dbPath=SharedData::getInstance()->getValue();
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }

    QSqlQuery query(dataBase);
    query.prepare("SELECT COUNT(*) FROM admin WHERE UserName = ? AND Password = ?");
    query.addBindValue(ui->user_name->text());
    query.addBindValue(ui->password->text());
    query.exec();

    if (query.next()) {
        int rowCount = query.value(0).toInt();
        if (rowCount > 0) {
            // Login successful
            QMessageBox::information(nullptr, "Login", "Login successful");
            MainWindow* window=new MainWindow;
            window->show();
        } else {
            // Login failed
             QMessageBox::critical(nullptr, "Login", "Login failed");
        }
    } else {
        // Error occurred while executing the query
        QMessageBox::critical(nullptr, "Error", "Error occurred while executing the query: " + query.lastError().text());
    }
    dataBase.close();


}




void SystemLogin::on_show_clicked()
{
    if(!visible){
        ui->password->setEchoMode(QLineEdit::Normal);
        ui->show->setText("hide");
        visible=true;
    }else{
        ui->password->setEchoMode(QLineEdit::Password);
        ui->show->setText("show");
        visible=false;
    }
}

