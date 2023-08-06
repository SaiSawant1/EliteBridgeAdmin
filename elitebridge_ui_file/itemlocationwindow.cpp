#include "itemlocationwindow.h"
#include "ui_itemlocationwindow.h"
#include "shareddata.h"
ItemLocationWindow::ItemLocationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemLocationWindow)
{
    ui->setupUi(this);
    setWindowTitle("Item Location");
}

ItemLocationWindow::~ItemLocationWindow()
{
    delete ui;
}

void ItemLocationWindow::setSelectedvValue(QString selectedValue){
    value=selectedValue;
    fillLineEdits();
    fillLocationCombo();

}



void ItemLocationWindow::on_addLocation_clicked()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;
    query.prepare("UPDATE Items SET "
                  "Location = :location, "
                  "Minimum = :minimum, "
                  "Maximum = :maximum, "
                  "critical = :critical, "
                  "UsedMinimumQuantity = :usedMinimumQuantity, "
                  "ReworkPickupLevel = :reworkPickupLevel, "
                  "DoNotOrder = :doNotOrder, "
                  "Swappable = :swappable, "
                  "SwapQuantity = :swapQuantity, "
                  "SwapByUser = :swapByUser, "
                  "SwapByJob = :swapByJob, "
                  "SwapByMachine = :swapByMachine, "
                  "Ticketable = :ticketable, "
                  "CanBeReturned = :canBeReturned, "
                  "CanBeRework = :canBeRework, "
                  "CanBeScrap = :canBeScrap, "
                  "LifeTracked = :lifeTracked, "
                  "intialLife = :intialLife, "
                  "MinimumLife = :minimumLife "
                  "WHERE ItemID = :itemID");

    // Bind the updated values to the placeholders
    query.bindValue(":location", ui->Location->currentText());
    query.bindValue(":minimum", ui->Minimum->text());
    query.bindValue(":maximum",ui->Maximum->text());
    query.bindValue(":critical", ui->Critical->text());
    query.bindValue(":usedMinimumQuantity", ui->UsedMinimumQuantity->text());
    query.bindValue(":reworkPickupLevel", ui->ReworkPickupLevel->text());
    query.bindValue(":doNotOrder", ui->DoNotOrder->isChecked());
    query.bindValue(":swappable", ui->Swappable->isChecked());
    query.bindValue(":swapQuantity", ui->SwapQuantity->text());
    query.bindValue(":swapByUser", ui->SwapByUser_2->isChecked());
    query.bindValue(":swapByJob", ui->SwapByMachine->isChecked());
    query.bindValue(":swapByMachine", ui->SwapByMachine->isChecked());
    query.bindValue(":ticketable", ui->Ticketable->isChecked());
    query.bindValue(":canBeReturned", ui->CanBeReturned->isChecked());
    query.bindValue(":canBeRework", ui->CanBeRework->isChecked());
    query.bindValue(":canBeScrap", ui->CanBeScrap->isChecked());
    query.bindValue(":lifeTracked", ui->LifeTracked->isChecked());
    query.bindValue(":intialLife", ui->InititalLife->text());
    query.bindValue(":minimumLife", ui->MinimumLife->text());
    query.bindValue(":itemID", value);


    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data Reinserted ");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}

void ItemLocationWindow::fillLocationCombo(){

    ui->Location->clear();
    ui->Location->addItem("(none)");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;
    query.exec("SELECT * FROM Location");


    if (query.exec()) {
        while (query.next()) {
            QString locationID=query.value(0).toString();
            QString locationName = query.value(1).toString();
            ui->Location->addItem( locationID + "-" + locationName);
        }

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}

void ItemLocationWindow::fillLineEdits(){
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
    query.bindValue(":itemId",value);



    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }



    if(query.next()){

        ui->Location->setPlaceholderText(query.value(12).toString());
        ui->Minimum->setText(query.value(13).toString());
        ui->Maximum->setText(query.value(14).toString());
        ui->Critical->setText(query.value(15).toString());
        ui->UsedMinimumQuantity->setText(query.value(16).toString());
        ui->ReworkPickupLevel->setText(query.value(17).toString());
        ui->DoNotOrder->setChecked(query.value(18).toBool());
        ui->Swappable->setChecked(query.value(19).toBool());
        ui->SwapQuantity->setText(query.value(20).toString());
        ui->SwapByUser->setChecked(query.value(21).toBool());
        ui->SwapByUser_2->setChecked(query.value(22).toBool());
        ui->SwapByMachine->setChecked(query.value(23).toBool());
        ui->Ticketable->setChecked(query.value(24).toBool());
        ui->CanBeReturned->setChecked(query.value(25).toBool());
        ui->CanBeRework->setChecked(query.value(26).toBool());
        ui->CanBeScrap->setChecked(query.value(27).toBool());
        ui->LifeTracked->setChecked(query.value(28).toBool());
        ui->InititalLife->setText(query.value(29).toString());
        ui->MinimumLife->setText(query.value(30).toString());
    }
}
