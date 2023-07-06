#include "newgroupform.h"
#include "ui_newgroupform.h"

NewGroupForm::NewGroupForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGroupForm)
{
    ui->setupUi(this);
}

NewGroupForm::~NewGroupForm()
{
    delete ui;
}

void NewGroupForm::on_createNewGroup_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path="D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB";
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO Groups (groupID, groupName) VALUES (?, ?)";
    query.prepare(insertQuery);

    query.addBindValue(ui->groupID->text());
    query.addBindValue(ui->name->text());




    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");

        reject();
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
        reject();
    }
    db.close();

}

