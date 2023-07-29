#include "itemdetaildialog.h"
#include "ui_itemdetaildialog.h"
#include "shareddata.h"
ItemDetailDialog::ItemDetailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemDetailDialog)
{
    ui->setupUi(this);
    fillLineEdits();

}

ItemDetailDialog::~ItemDetailDialog()
{
    delete ui;
}

void ItemDetailDialog::fillItem(QString selectedValue){
    item=selectedValue;
    qDebug()<<item;
    fillLineEdits();
}
void ItemDetailDialog::fillLineEdits(){
     QString path=SharedData::getInstance()->getValue();
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(path);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }


    QSqlQuery query(dataBase);
    query.prepare("SELECT * FROM Items WHERE ItemID = :itemId");
    query.bindValue(":itemId",item);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    if(query.next()){
        qDebug()<<"the first value was"<<query.value(0).toString();
        ui->lineEditID->setText(query.value(0).toString());
        ui->lineEditName->setText(query.value(1).toString());
        ui->lineEditAlias->setText(query.value(2).toString());
        ui->lineEditGroup->setText(query.value(3).toString());
        ui->lineEditSubGroup->setText(query.value(4).toString());
        ui->lineEditSupplier->setText(query.value(5).toString());
        ui->lineEditUnitCost->setText(query.value(6).toString());
        ui->lineEditUnitUsed->setText(query.value(7).toString());
        ui->lineEditPacket->setText(query.value(8).toString());
        ui->lineEditBrand->setText(query.value(9).toString());
        ui->lineEditImage->setText(query.value(10).toString());
        ui->lineEditNewUsed->setText(query.value(11).toString());
        ui->lineEditLocation->setText(query.value(12).toString());
        ui->lineEditmin->setText(query.value(13).toString());
        ui->lineEditmax->setText(query.value(14).toString());
        ui->lineEditcritical->setText(query.value(15).toString());
    }


    dataBase.close();
    ui->imageDisplay->setPixmap(ui->lineEditImage->text());
    return ;
}

