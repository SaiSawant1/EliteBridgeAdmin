#include "userdetails.h"
#include "ui_userdetails.h"

UserDetails::UserDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDetails)
{
    ui->setupUi(this);
}

UserDetails::~UserDetails()
{
    delete ui;
}
void UserDetails::fillItem(QString selectedValue){
    User=selectedValue;
    fillLineEdits();
}
void UserDetails::fillLineEdits(){
    QString dbPath = "D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }


    QSqlQuery query(dataBase);
    query.prepare("SELECT * FROM Users WHERE UserID = :itemId");
    query.bindValue(":itemId",User);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    if(query.next()){
        ui->UserID->setText(query.value(0).toString());
        ui->Name->setText(query.value(1).toString());
        ui->Alias->setText(query.value(2).toString());
        ui->Password->setText(query.value(3).toString());
        ui->ImageFile->setText(query.value(4).toString());
        ui->CostCenter->setText(query.value(5).toString());
        ui->AlowToLogin->setText(query.value(6).toString());

    }


    dataBase.close();
    ui->imageDisplay->setPixmap(ui->ImageFile->text());
    return ;
}
