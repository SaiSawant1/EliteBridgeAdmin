#include "updateuser.h"
#include "ui_updateuser.h"
#include "shareddata.h"
UpdateUser::UpdateUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateUser)
{
    ui->setupUi(this);
}

UpdateUser::~UpdateUser()
{
    delete ui;
}

void UpdateUser::on_updateUser_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "UPDATE Users SET Name = :name, Alias = :alias, Password = :password, ImageFile = :imageFile, CostCenter = :costCenter, AllowtoLogin = :allowToLogin WHERE UserID = :userID";
    query.prepare(insertQuery);
    QString radioValue="false";
    if(ui->allowedToLogin->isChecked()){
        radioValue="true";
    }

    query.bindValue(":name",ui->user_name->text());
    query.bindValue(":alias",ui->user_alias->text() );
    query.bindValue(":password", ui->user_password->text());
    query.bindValue(":imageFile", ui->user_image->text());
    query.bindValue(":costCenter",ui->user_costCenter->text());
    query.bindValue(":allowToLogin",radioValue);
    query.bindValue(":userID", ui->user_id->text());


    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data update successfully!");
        reject();
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to update data!");
        reject();
    }
    db.close();
}

