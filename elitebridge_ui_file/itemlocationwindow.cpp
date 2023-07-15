#include "itemlocationwindow.h"
#include "ui_itemlocationwindow.h"

ItemLocationWindow::ItemLocationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemLocationWindow)
{
    ui->setupUi(this);
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
    query.bindValue(":location", newLocationValue);
    query.bindValue(":minimum", newMinimumValue);
    query.bindValue(":maximum", newMaximumValue);
    query.bindValue(":critical", newCriticalValue);
    query.bindValue(":usedMinimumQuantity", newUsedMinimumQuantityValue);
    query.bindValue(":reworkPickupLevel", newReworkPickupLevelValue);
    query.bindValue(":doNotOrder", newDoNotOrderValue);
    query.bindValue(":swappable", newSwappableValue);
    query.bindValue(":swapQuantity", newSwapQuantityValue);
    query.bindValue(":swapByUser", newSwapByUserValue);
    query.bindValue(":swapByJob", newSwapByJobValue);
    query.bindValue(":swapByMachine", newSwapByMachineValue);
    query.bindValue(":ticketable", newTicketableValue);
    query.bindValue(":canBeReturned", newCanBeReturnValue);
    query.bindValue(":canBeRework", newCanBeReworkValue);
    query.bindValue(":canBeScrap", newCanBeScrapValue);
    query.bindValue(":lifeTracked", newLifeTrackedValue);
    query.bindValue(":intialLife", newInitialLifeValue);
    query.bindValue(":minimumLife", newMinimumLifeValue);
    query.bindValue(":itemID", itemIDToUpdate);


    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data Reinserted ");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}

bool ItemsMainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->lineEditImage && event->type() == QEvent::MouseButtonRelease)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if (mouseEvent->button() == Qt::LeftButton)
        {
            QString filePath = QFileDialog::getOpenFileName(this, "Select File");
            if (!filePath.isEmpty())
            {
                ui->lineEditImage->setText(filePath);
            }
        }
    }

    return QObject::eventFilter(obj, event);
}

void ItemsMainWindow::on_actioncreate_item_group_triggered()
{
    ItemGroup* groupWindow=new ItemGroup;
    groupWindow->show();
}

void ItemsMainWindow::fillGroupCombo(){

    ui->lineEditGroup->clear();
    ui->lineEditGroup->addItem("(none)");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;
    query.exec("SELECT Name FROM item_group");


    if (query.exec()) {
        while (query.next()) {
            QString groupName = query.value(0).toString();
            ui->lineEditGroup->addItem(groupName);
        }

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}
void ItemsMainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && event->pos().y() > ui->scrollArea->height() - 5) {
        resizing = true;
        dragStartPosition = event->pos();
        event->accept();
    }
    else {
        event->ignore();
    }
}

void ItemsMainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (resizing) {
        QPoint diff = event->pos() - dragStartPosition;
        int newHeight = ui->scrollArea->height() - diff.y();
        ui->scrollArea->setFixedHeight(newHeight);
        dragStartPosition = event->pos();
        event->accept();
    }
    else {
        event->ignore();
    }
}

void ItemsMainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (resizing) {
        resizing = false;
        event->accept();
    }
    else {
        event->ignore();
    }
}

void ItemsMainWindow::on_actioncreate_item_sub_group_triggered()
{
    ItemSubGroup *subGroupWindow=new ItemSubGroup;
    subGroupWindow->show();
}

void ItemsMainWindow::fillSubGroupCombo(){

    ui->lineEditSubGroup->clear();
    ui->lineEditSubGroup->addItem("(none)");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;
    query.exec("SELECT subGroupName FROM item_sub_group");


    if (query.exec()) {
        while (query.next()) {
            QString groupName = query.value(0).toString();
            ui->lineEditSubGroup->addItem(groupName);
        }

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}

