#include "createusertransaction.h"
#include "ui_createusertransaction.h"

CreateUserTransaction::CreateUserTransaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateUserTransaction)
{
    ui->setupUi(this);
}

CreateUserTransaction::~CreateUserTransaction()
{
    delete ui;
}

void CreateUserTransaction::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }


    QSqlQuery query;

    QString insertQuery = "INSERT INTO Transaction_Rights (userID, ChangePassword, CycleCount, FreeIssueWithdraw,InitiateStockTransfer,Scrap,LoadRework,MoveStock) VALUES (?, ?, ?, ?, ?, ?, ? ,?)";
    query.prepare(insertQuery);


    QString ChangePassword;
    QString CycleCount;
    QString FreeIssueWithdraw;
    QString InitiateStockTransfer;
    QString Scrap;
    QString LoadRework;
    QString MoveStock;

    if(ui->change_password->isChecked()){
        ChangePassword="true";
    }
    else{
        ChangePassword="false";
    }
    if(ui->cycle_count->isChecked()){
        CycleCount="true";
    }
    else{
        CycleCount="false";
    }
    if(ui->free_issue_withdraw->isChecked()){
        FreeIssueWithdraw="true";
    }
    else{
        FreeIssueWithdraw="false";
    }
    if(ui->initiate_stock_transfer->isChecked()){
        InitiateStockTransfer="true";
    }
    else{
        InitiateStockTransfer="false";
    }
    if(ui->scrap->isChecked()){
        Scrap="true";
    }
    else{
        Scrap="false";
    }
    if(ui->load_rework->isChecked()){
        LoadRework="true";
    }
    else{
        LoadRework="false";
    }
    if(ui->move_stock->isChecked()){
        MoveStock="true";
    }
    else{
        MoveStock="false";
    }


    query.addBindValue(ui->lineEdit->text());
    query.addBindValue(ChangePassword);
    query.addBindValue(CycleCount);
    query.addBindValue(FreeIssueWithdraw);
    query.addBindValue(InitiateStockTransfer);
    query.addBindValue(Scrap);
    query.addBindValue(LoadRework);
    query.addBindValue(MoveStock);
    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
        reject();
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
        reject();
    }
    db.close();
}

