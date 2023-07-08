#include "itemsmainwindow.h"

#include "ui_itemsmainwindow.h"

ItemsMainWindow::ItemsMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ItemsMainWindow)
{
    ui->setupUi(this);



    QHBoxLayout* horizontalLayout = new QHBoxLayout(ui->frame);

    addItemLabel = new ClickableLabel(this);
    addItemLabel->setText("Add User");
    addItemLabel->setScaledContents(true);
    addItemLabel->setMaximumSize(72,72);
    addItemLabel->setPixmap(QPixmap("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/file-new-svgrepo-com.svg"));

    QObject::connect(addItemLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &ItemsMainWindow::onCellClicked);

    horizontalLayout->insertWidget(0,addItemLabel);


    addUpdateLabel = new ClickableLabel(this);
    addUpdateLabel->setText("Update User");
    addUpdateLabel->setScaledContents(true);
    addUpdateLabel->setMaximumSize(72,72);
    QPixmap svgImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/edit-report-svgrepo-com.svg");
    addUpdateLabel->setPixmap(svgImage);
    QObject::connect(addUpdateLabel, &ClickableLabel::clicked,this,[&]() {
        updateItem();
    });
    horizontalLayout->insertWidget(1,addUpdateLabel);


    addSaveLabel=new ClickableLabel(this);
    addSaveLabel->setText("save User");
    addSaveLabel->setScaledContents(true);
    addSaveLabel->setMaximumSize(72,72);
    QPixmap saveImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/save-svgrepo-com.svg");
    addSaveLabel->setPixmap(saveImage);
    QObject::connect(addSaveLabel, &ClickableLabel::clicked,this,[&]() {
        itemSave();
    });
    horizontalLayout->insertWidget(2,addSaveLabel);


    addUndoLabel=new ClickableLabel(this);
    addUndoLabel->setText("undo cahnges");
    addUndoLabel->setScaledContents(true);
    addUndoLabel->setMaximumSize(72,72);
    QPixmap undoImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/undo-svgrepo-com.svg");
    addUndoLabel->setPixmap(undoImage);
    QObject::connect(addUndoLabel, &ClickableLabel::clicked,this,[&]() {
        undoFunc();
    });
    horizontalLayout->insertWidget(3,addUndoLabel);

    addDeleteLabel=new ClickableLabel(this);
    addDeleteLabel->setText("user delete");
    addDeleteLabel->setScaledContents(true);
    addDeleteLabel->setMaximumSize(72,72);
    QPixmap deleteImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/delete-alt-svgrepo-com.svg");
    addDeleteLabel->setPixmap(deleteImage);
    QObject::connect(addDeleteLabel, &ClickableLabel::clicked,this,[&]() {
        deleteItem();
    });
    horizontalLayout->insertWidget(4,addDeleteLabel);


    lineEdit = new QLineEdit(this);
    lineEdit->setPlaceholderText("Enter text...");

    lineEdit->setMaxLength(10);
    horizontalLayout->insertWidget(5,lineEdit);


    addfindLabel=new ClickableLabel(this);
    addfindLabel->setText("undo cahnges");
    addfindLabel->setScaledContents(true);
    addfindLabel->setMaximumSize(72,72);
    QPixmap findImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/search-alt-3-svgrepo-com.svg");
    addfindLabel->setPixmap(findImage);
    QObject::connect(addfindLabel, &ClickableLabel::clicked,this,[&]() {
       search();
    });
    horizontalLayout->insertWidget(6,addfindLabel);

    addExitLabel=new ClickableLabel(this);
    addExitLabel->setText("undo cahnges");
    addExitLabel->setScaledContents(true);
    addExitLabel->setMaximumSize(72,72);
    QPixmap exitImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/exit-svgrepo-com (1).svg");
    addExitLabel->setPixmap(exitImage);
    QObject::connect(addExitLabel, &ClickableLabel::clicked,this,[&]() {
        this->close();
    });
    horizontalLayout->insertWidget(7,addExitLabel);




    ui->frame->setLayout(horizontalLayout);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &ItemsMainWindow::onCellClicked);

    readDb();
}

ItemsMainWindow::~ItemsMainWindow()
{
    delete ui;
}


void ItemsMainWindow:: readDb()
{
    //    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","DBConnection");

    //    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

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
    QString str = "SELECT * from Items";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(12);
    QStringList labels;

    labels << "ItemID" << "Name" << "Alias" << "ItemGroup" << "ItemSubGroup"<<"SupplierPartNumber"<<"UnitCost"<<"UsedUnitCost"<<"PacketSize"<<"Brand"<<"ImageFile"<<"New_UsedSensitive";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *ItemID = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Name = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *ItemGroup = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *ItemSubGroup = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *SupplierPartNumber = new QTableWidgetItem(query.value(5).toString());
        QTableWidgetItem *UnitCost = new QTableWidgetItem(query.value(6).toString());
        QTableWidgetItem *UsedUnitCost = new QTableWidgetItem(query.value(7).toString());
        QTableWidgetItem *PacketSize = new QTableWidgetItem(query.value(8).toString());
        QTableWidgetItem *Brand = new QTableWidgetItem(query.value(9).toString());
        QTableWidgetItem *ImageFile = new QTableWidgetItem(query.value(10).toString());
        QTableWidgetItem *New_UsedSensitive = new QTableWidgetItem(query.value(11).toString());

        ItemID->setText(query.value(0).toString());
        Name->setText(query.value(1).toString());
        Alias->setText(query.value(2).toString());
        ItemGroup->setText(query.value(3).toString());
        ItemSubGroup->setText(query.value(4).toString());
        SupplierPartNumber->setText(query.value(5).toString());
        UnitCost->setText(query.value(6).toString());
        UsedUnitCost->setText(query.value(7).toString());
        PacketSize->setText(query.value(8).toString());
        Brand->setText(query.value(9).toString());
        ImageFile->setText(query.value(10).toString());
        New_UsedSensitive->setText(query.value(11).toString());

        ui->tableWidget->setItem(rowCount,0,ItemID);
        ui->tableWidget->setItem(rowCount,1,Name);
        ui->tableWidget->setItem(rowCount,2,Alias);
        ui->tableWidget->setItem(rowCount,3,ItemGroup);
        ui->tableWidget->setItem(rowCount,4,ItemSubGroup);
        ui->tableWidget->setItem(rowCount,5,SupplierPartNumber);
        ui->tableWidget->setItem(rowCount,6,UnitCost);
        ui->tableWidget->setItem(rowCount,7,UsedUnitCost);
        ui->tableWidget->setItem(rowCount,8,PacketSize);
        ui->tableWidget->setItem(rowCount,9,Brand);
        ui->tableWidget->setItem(rowCount,10,ImageFile);
        ui->tableWidget->setItem(rowCount,11,New_UsedSensitive);

        rowCount++;
    }
    dataBase.close();
}
int previousRow=-1;
void ItemsMainWindow::onCellClicked(int row, int column)
{
    if (previousRow != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRow, col);
            if (item)
                item->setBackground(Qt::white); // Set the default background color
        }
    }

    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue = item->text();
        fillLineEdits();
    }

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
    {
        QTableWidgetItem* item = ui->tableWidget->item(row, col);
        if (item)
            item->setBackground(Qt::yellow); // Set the desired background color
    }
    previousRow = row;
}

void ItemsMainWindow::addUserForm(){
    NewItemForm* newItemFormPage=new NewItemForm;
    newItemFormPage->show();
}


void ItemsMainWindow::itemSave()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();
}
void ItemsMainWindow::deleteItem()
{

    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this record?", QMessageBox::Yes | QMessageBox::No);


    if (confirmation == QMessageBox::Yes) {
        fillUndoStruct();
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
        query.prepare("DELETE FROM Items WHERE ItemID = :rowId");
        query.bindValue(":rowId", selectedValue);

        if (query.exec()) {
            // Deletion successful
            QMessageBox::information(this, "Success", "Record deleted successfully.");
        } else {
            // Deletion failed
            QMessageBox::information(this, "Failed", "Record not deleted.");
        }

        dataBase.close();
    }
    else{
        return;
    }
}


void ItemsMainWindow::search(){

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";

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
    QString str = "SELECT * FROM Items WHERE Name LIKE '" + lineEdit->text() + "%'";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(12);
    QStringList labels;

    labels << "ItemID" << "Name" << "Alias" << "ItemGroup" << "ItemSubGroup"<<"SupplierPartNumber"<<"UnitCost"<<"UsedUnitCost"<<"PacketSize"<<"Brand"<<"ImageFile"<<"New_UsedSensitive";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *ItemID = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Name = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *ItemGroup = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *ItemSubGroup = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *SupplierPartNumber = new QTableWidgetItem(query.value(5).toString());
        QTableWidgetItem *UnitCost = new QTableWidgetItem(query.value(6).toString());
        QTableWidgetItem *UsedUnitCost = new QTableWidgetItem(query.value(7).toString());
        QTableWidgetItem *PacketSize = new QTableWidgetItem(query.value(8).toString());
        QTableWidgetItem *Brand = new QTableWidgetItem(query.value(9).toString());
        QTableWidgetItem *ImageFile = new QTableWidgetItem(query.value(10).toString());
        QTableWidgetItem *New_UsedSensitive = new QTableWidgetItem(query.value(11).toString());

        ItemID->setText(query.value(0).toString());
        Name->setText(query.value(1).toString());
        Alias->setText(query.value(2).toString());
        ItemGroup->setText(query.value(3).toString());
        ItemSubGroup->setText(query.value(4).toString());
        SupplierPartNumber->setText(query.value(5).toString());
        UnitCost->setText(query.value(6).toString());
        UsedUnitCost->setText(query.value(7).toString());
        PacketSize->setText(query.value(8).toString());
        Brand->setText(query.value(9).toString());
        ImageFile->setText(query.value(10).toString());
        New_UsedSensitive->setText(query.value(11).toString());

        ui->tableWidget->setItem(rowCount,0,ItemID);
        ui->tableWidget->setItem(rowCount,1,Name);
        ui->tableWidget->setItem(rowCount,2,Alias);
        ui->tableWidget->setItem(rowCount,3,ItemGroup);
        ui->tableWidget->setItem(rowCount,4,ItemSubGroup);
        ui->tableWidget->setItem(rowCount,5,SupplierPartNumber);
        ui->tableWidget->setItem(rowCount,6,UnitCost);
        ui->tableWidget->setItem(rowCount,7,UsedUnitCost);
        ui->tableWidget->setItem(rowCount,8,PacketSize);
        ui->tableWidget->setItem(rowCount,9,Brand);
        ui->tableWidget->setItem(rowCount,10,ImageFile);
        ui->tableWidget->setItem(rowCount,11,New_UsedSensitive);

        rowCount++;
    }
    dataBase.close();
}

void ItemsMainWindow::fillUndoStruct(){
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
    query.prepare("SELECT * FROM Items WHERE ItemID = :itemId");
    query.bindValue(":itemId", selectedValue);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }
    undo=new undoItemStruct;
    if(query.next()){
        undo->id=query.value(0).toString();
        undo->name=query.value(1).toString();
        undo->alias=query.value(2).toString();
        undo->itemgroup=query.value(3).toString();
        undo->itemsubgroup=query.value(4).toString();
        undo->supplierpartnumber=query.value(5).toString();
        undo->unitcost=query.value(6).toString();
        undo->unitused=query.value(7).toString();
        undo->packetsize=query.value(8).toString();
        undo->brand=query.value(9).toString();
        undo->image=query.value(10).toString();
        undo->newused=query.value(11).toString();

    }


    dataBase.close();
    return ;
}
void ItemsMainWindow::undoFunc(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO Items (ItemID, Name, Alias, ItemGroup,ItemSubGroup,SupplierPartNumber,UnitCost,UsedUnitCost,PacketSize,Brand,ImageFile,New_UsedSensitive) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ? )";
    query.prepare(insertQuery);

    query.addBindValue(undo->id);
    query.addBindValue(undo->name);
    query.addBindValue(undo->alias);
    query.addBindValue(undo->itemgroup);
    query.addBindValue(undo->itemsubgroup);
    query.addBindValue(undo->supplierpartnumber);
    query.addBindValue(undo->unitcost);
    query.addBindValue(undo->unitused);
    query.addBindValue(undo->packetsize);
    query.addBindValue(undo->brand);
    query.addBindValue(undo->image);
    query.addBindValue(undo->newused);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data Reinserted ");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}

void ItemsMainWindow::fillLineEdits(){
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
    query.prepare("SELECT * FROM Items WHERE ItemID = :itemId");
    query.bindValue(":itemId", selectedValue);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }
    undo=new undoItemStruct;
    if(query.next()){
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


    }


    dataBase.close();
    return ;
}

void ItemsMainWindow::updateItem(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString updateQuery = "UPDATE Items SET Name = ?, Alias = ?, ItemGroup = ?, ItemSubGroup = ?, SupplierPartNumber = ?, UnitCost = ?, UsedUnitCost = ?, PacketSize = ?, Brand = ?, ImageFile = ?, New_UsedSensitive = ? WHERE ItemID = ?";
    query.prepare(updateQuery);

    query.addBindValue(ui->lineEditName->text());
    query.addBindValue(ui->lineEditAlias->text());
    query.addBindValue(ui->lineEditGroup->text());
    query.addBindValue(ui->lineEditSubGroup->text());
    query.addBindValue(ui->lineEditSupplier->text());
    query.addBindValue(ui->lineEditUnitCost->text());
    query.addBindValue(ui->lineEditUnitUsed->text());
    query.addBindValue(ui->lineEditPacket->text());
    query.addBindValue(ui->lineEditBrand->text());
    query.addBindValue(ui->lineEditImage->text());
    query.addBindValue(ui->lineEditNewUsed->text());
    query.addBindValue(ui->lineEditID->text());

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data Reinserted ");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}
