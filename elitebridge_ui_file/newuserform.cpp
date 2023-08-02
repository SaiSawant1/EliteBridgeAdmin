#include "newuserform.h"
#include "ui_newuserform.h"
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include "shareddata.h"
newUserForm::newUserForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newUserForm)
{
    ui->setupUi(this);
}

newUserForm::~newUserForm()
{
    delete ui;
}

void newUserForm::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName(SharedData::getInstance()->getValue());

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO Users (UserID, Name, Alias, Password,ImageFile,CostCenter,AllowtoLogin) VALUES (?, ?, ?, ?, ?, ?, ? )";
    query.prepare(insertQuery);
    QString radioValue="false";
    if(ui->allowedToLogin->isChecked()){
        radioValue="true";
    }

    query.addBindValue(ui->user_id->text());
    query.addBindValue( ui->user_name->text());
    query.addBindValue( ui->user_alias->text());
    query.addBindValue(ui->user_password->text());
    query.addBindValue( ui->user_costCenter->text());
    query.addBindValue( ui->user_image->text());
    query.addBindValue( radioValue);
    if (query.exec()) {
         QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
        reject();
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
        reject();
    }
    db.close();

}

