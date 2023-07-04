#include "newitemform.h"
#include "ui_newitemform.h"

NewItemForm::NewItemForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewItemForm)
{
    ui->setupUi(this);
}

NewItemForm::~NewItemForm()
{
    delete ui;
}

void NewItemForm::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO Items (ItemID, Name, Alias, ItemGroup,ItemSubGroup,SupplierPartNumber,UnitCost,UsedUnitCost,PacketSize,Brand,ImageFile,New_UsedSensitive) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ? )";
    query.prepare(insertQuery);

    query.addBindValue(ui->item_Id->text());
    query.addBindValue(ui->item_name->text());
    query.addBindValue(ui->item_alias->text());
    query.addBindValue(ui->item_group->text());
    query.addBindValue(ui->item_subGroup->text());
    query.addBindValue(ui->item_supplierPartNumber->text());
    query.addBindValue(ui->item_unitCost->text());
    query.addBindValue(ui->item_usedUnitCost->text());
    query.addBindValue(ui->item_packetSize->text());
    query.addBindValue(ui->item_brand->text());
    query.addBindValue(ui->item_image->text());
    query.addBindValue(ui->item_NewUsed->text());

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
        reject();
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
        reject();
    }
    db.close();
}

