#include "itemlocationwindow.h"
#include "ui_itemlocationwindow.h"

ItemLocationWindow::ItemLocationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemLocationWindow)
{
    ui->setupUi(this);
    fillLocationCombo();
}

ItemLocationWindow::~ItemLocationWindow()
{
    delete ui;
}

void ItemLocationWindow::setSelectedvValue(QString selectedValue){
    value=selectedValue;
}



void ItemLocationWindow::on_addLocation_clicked()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

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
    query.bindValue(":doNotOrder", ui->DoNotOrder->text());
    query.bindValue(":swappable", ui->Swappable->isChecked());
    query.bindValue(":swapQuantity", ui->SwapQuantity->text());
    query.bindValue(":swapByUser", ui->SwapByUser_2->text());
    query.bindValue(":swapByJob", ui->SwapByMachine->text());
    query.bindValue(":swapByMachine", ui->SwapByMachine->text());
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

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;
    query.exec("SELECT Type FROM Location");


    if (query.exec()) {
        while (query.next()) {
            QString locationName = query.value(0).toString();
            ui->Location->addItem(locationName);
        }

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}
