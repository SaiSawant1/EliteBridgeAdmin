#include "itemsmainwindow.h"
#include "itemlocationwindow.h"
#include "ui_itemsmainwindow.h"
#include "shareddata.h"
ItemsMainWindow::ItemsMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ItemsMainWindow)
{
    ui->setupUi(this);


    QString appDirPath =QApplication::applicationDirPath();
    QHBoxLayout* horizontalLayout = new QHBoxLayout(ui->frame);

    addItemLabel = new ClickableLabel(this);
    addItemLabel->setText("Add User");
    addItemLabel->setScaledContents(true);
    addItemLabel->setMaximumSize(72,72);
    addItemLabel->setPixmap(QPixmap(appDirPath+"/img/file-new-svgrepo-com.svg"));

    QObject::connect(addItemLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &ItemsMainWindow::onCellClicked);


    horizontalLayout->insertWidget(0,addItemLabel);


    addUpdateLabel = new ClickableLabel(this);
    addUpdateLabel->setText("Update User");
    addUpdateLabel->setScaledContents(true);
    addUpdateLabel->setMaximumSize(72,72);
    QPixmap svgImage(appDirPath+"/img/edit-report-svgrepo-com.svg");
    addUpdateLabel->setPixmap(svgImage);
    QObject::connect(addUpdateLabel, &ClickableLabel::clicked,this,[&]() {
        updateItem();
    });
    horizontalLayout->insertWidget(1,addUpdateLabel);


    addSaveLabel=new ClickableLabel(this);
    addSaveLabel->setText("save User");
    addSaveLabel->setScaledContents(true);
    addSaveLabel->setMaximumSize(72,72);
    QPixmap saveImage(appDirPath+"/img/save-svgrepo-com.svg");
    addSaveLabel->setPixmap(saveImage);
    QObject::connect(addSaveLabel, &ClickableLabel::clicked,this,[&]() {
        itemSave();
    });
    horizontalLayout->insertWidget(2,addSaveLabel);


    addUndoLabel=new ClickableLabel(this);
    addUndoLabel->setText("undo cahnges");
    addUndoLabel->setScaledContents(true);
    addUndoLabel->setMaximumSize(72,72);
    addUndoLabel->setDisabled(true);
    QPixmap undoImage(appDirPath+"/img/undo-svgrepo-com.svg");
    addUndoLabel->setPixmap(undoImage);
    QObject::connect(addUndoLabel, &ClickableLabel::clicked,this,[&]() {
        undoFunc();
    });
    horizontalLayout->insertWidget(3,addUndoLabel);

    addDeleteLabel=new ClickableLabel(this);
    addDeleteLabel->setText("user delete");
    addDeleteLabel->setScaledContents(true);
    addDeleteLabel->setMaximumSize(72,72);
    QPixmap deleteImage(appDirPath+"/img/delete-alt-svgrepo-com.svg");
    addDeleteLabel->setPixmap(deleteImage);
    QObject::connect(addDeleteLabel, &ClickableLabel::clicked,this,[&]() {
        deleteItem();
    });
    horizontalLayout->insertWidget(4,addDeleteLabel);

    addLocationLabel=new ClickableLabel(this);
    addLocationLabel->setText("user delete");
    addLocationLabel->setScaledContents(true);
    addLocationLabel->setMaximumSize(72,72);
    QPixmap locationImage(appDirPath+"/img/location-svgrepo-com.svg");
    addLocationLabel->setPixmap(locationImage);
    QObject::connect(addLocationLabel, &ClickableLabel::clicked,this,[&]() {
        ItemLocationWindow* locationWindow=new ItemLocationWindow;
        locationWindow->setSelectedvValue(selectedValue);
        locationWindow->show();
    });
    horizontalLayout->insertWidget(5,addLocationLabel);


    lineEdit = new QLineEdit(this);
    lineEdit->setPlaceholderText("Enter text...");

    lineEdit->setMaxLength(10);
    horizontalLayout->insertWidget(6,lineEdit);


    addfindLabel=new ClickableLabel(this);
    addfindLabel->setText("undo cahnges");
    addfindLabel->setScaledContents(true);
    addfindLabel->setMaximumSize(72,72);
    QPixmap findImage(appDirPath+"/img/search-alt-3-svgrepo-com.svg");
    addfindLabel->setPixmap(findImage);
    QObject::connect(addfindLabel, &ClickableLabel::clicked,this,[&]() {
       search();
    });
    horizontalLayout->insertWidget(7,addfindLabel);

    addExitLabel=new ClickableLabel(this);
    addExitLabel->setText("undo cahnges");
    addExitLabel->setScaledContents(true);
    addExitLabel->setMaximumSize(72,72);
    QPixmap exitImage(appDirPath+"/img/exit-svgrepo-com (1).svg");
    addExitLabel->setPixmap(exitImage);
    QObject::connect(addExitLabel, &ClickableLabel::clicked,this,[&]() {
        this->close();
    });
    horizontalLayout->insertWidget(8,addExitLabel);




    ui->frame->setLayout(horizontalLayout);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &ItemsMainWindow::onCellClicked);
    connect(ui->tableWidget, &QTableWidget::cellDoubleClicked, this, &ItemsMainWindow::showDialog);
    ui->lineEditImage->installEventFilter(this);
    fillGroupCombo();
    fillSubGroupCombo();

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
    QString str = "SELECT * from Items";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(31);
    QStringList labels;

    labels << "Item ID" << "Name" << "Alias" << "Item Group" << "Item Sub Group"<<"Supplier Part Number"<<"UnitCost"<<"Used Unit Cost"<<"Packet Size"<<"Brand"<<"Image File"<<"New/Used"<<"Location"<<"Minimum"<<"Maximum"<<"Critical Point"<<"Used Minimum Quantity"<<"Rework Pick Level"<<"Do Not Order"<<"Swapabile"<<"SwapQuantity"<<"Swap By User"<<"Swap By Job"<<"Swap By Machine"<<"Ticketable"<<"Can Be Returned"<<"Can Be Rework"<<"Can Be Scrap"<<"Life Tracked"<<"intial Life"<<"Minimum Life";
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
        QTableWidgetItem *ImageFile = new QTableWidgetItem();
        QTableWidgetItem *New_UsedSensitive = new QTableWidgetItem(query.value(11).toString());
        QTableWidgetItem *Location = new QTableWidgetItem(query.value(12).toString());
        QTableWidgetItem *Minimum = new QTableWidgetItem(query.value(13).toString());
        QTableWidgetItem *Maximum = new QTableWidgetItem(query.value(14).toString());
        QTableWidgetItem *CriticalPoint = new QTableWidgetItem(query.value(15).toString());
        QTableWidgetItem *UsedMinimumQuantity = new QTableWidgetItem(query.value(16).toString());
        QTableWidgetItem *ReworkPickupLevel = new QTableWidgetItem(query.value(17).toString());
        QTableWidgetItem *DoNotOrder = new QTableWidgetItem(query.value(18).toString());
        QTableWidgetItem *Swappable = new QTableWidgetItem(query.value(19).toString());
        QTableWidgetItem *SwapQuantity = new QTableWidgetItem(query.value(20).toString());
        QTableWidgetItem *SwapByUser = new QTableWidgetItem(query.value(21).toString());
        QTableWidgetItem *SwapByJob = new QTableWidgetItem(query.value(22).toString());
        QTableWidgetItem *SwapByMachine = new QTableWidgetItem(query.value(23).toString());
        QTableWidgetItem *Ticketable = new QTableWidgetItem(query.value(24).toString());
        QTableWidgetItem *CanBeReturned = new QTableWidgetItem(query.value(25).toString());
        QTableWidgetItem *CanBeRework = new QTableWidgetItem(query.value(26).toString());
        QTableWidgetItem *CanBeScrap = new QTableWidgetItem(query.value(27).toString());
        QTableWidgetItem *LifeTracked = new QTableWidgetItem(query.value(28).toString());
        QTableWidgetItem *intialLife = new QTableWidgetItem(query.value(29).toString());
        QTableWidgetItem *MinimumLife = new QTableWidgetItem(query.value(30).toString());


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

        QPixmap pixmap(query.value(10).toString());
        QSize newSize(130,130);
        QPixmap scaledPixmap = pixmap.scaled(newSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        QIcon icon(scaledPixmap);
        ImageFile->setIcon(icon);
        ImageFile->setSizeHint(newSize);
        New_UsedSensitive->setText(query.value(11).toString());
        Location->setText(query.value(12).toString());
        Minimum->setText(query.value(13).toString());
        Maximum->setText(query.value(14).toString());
        CriticalPoint->setText(query.value(15).toString());
        UsedMinimumQuantity->setText(query.value(16).toString());
        ReworkPickupLevel->setText(query.value(17).toString());
        DoNotOrder->setText(query.value(18).toString());
        Swappable->setText(query.value(19).toString());
        SwapQuantity->setText(query.value(20).toString());
        SwapByUser->setText(query.value(21).toString());
        SwapByJob->setText(query.value(22).toString());
        SwapByMachine->setText(query.value(23).toString());
        Ticketable->setText(query.value(24).toString());
        CanBeReturned->setText(query.value(25).toString());
        CanBeRework->setText(query.value(26).toString());
        CanBeScrap->setText(query.value(27).toString());
        LifeTracked->setText(query.value(28).toString());
        intialLife->setText(query.value(29).toString());
        MinimumLife->setText(query.value(30).toString());

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
        ui->tableWidget->setItem(rowCount,12,Location);
        ui->tableWidget->setItem(rowCount,13,Minimum);
        ui->tableWidget->setItem(rowCount,14,Maximum);
        ui->tableWidget->setItem(rowCount,15,CriticalPoint);
        ui->tableWidget->setItem(rowCount,16,UsedMinimumQuantity);
        ui->tableWidget->setItem(rowCount,17,ReworkPickupLevel);
        ui->tableWidget->setItem(rowCount,18,DoNotOrder);
        ui->tableWidget->setItem(rowCount,19,Swappable);
        ui->tableWidget->setItem(rowCount,20,SwapQuantity);
        ui->tableWidget->setItem(rowCount,21,SwapByUser);
        ui->tableWidget->setItem(rowCount,22,SwapByJob);
        ui->tableWidget->setItem(rowCount,23,SwapByMachine);
        ui->tableWidget->setItem(rowCount,24,Ticketable);
        ui->tableWidget->setItem(rowCount,25,CanBeReturned);
        ui->tableWidget->setItem(rowCount,26,CanBeRework);
        ui->tableWidget->setItem(rowCount,27,CanBeScrap);
        ui->tableWidget->setItem(rowCount,28,LifeTracked);
        ui->tableWidget->setItem(rowCount,29,intialLife);
        ui->tableWidget->setItem(rowCount,30,MinimumLife);


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
    if(ui->lineEditID->text()=="" || ui->lineEditName->text()==""){
        if(ui->lineEditID->text()==""){
            ui->lineEditID->setStyleSheet("QLineEdit { background-color: red; }");
        }
        if(ui->lineEditName->text()==""){
            ui->lineEditName->setStyleSheet("QLineEdit { background-color: red; }");
        }
        return;
    }
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO Items (ItemID, Name, Alias, ItemGroup, ItemSubGroup, SupplierPartNumber, UnitCost, UsedUnitCost, PacketSize, Brand, ImageFile, New_UsedSensitive) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";
    query.prepare(insertQuery);

    query.addBindValue(ui->lineEditID->text());
    query.addBindValue(ui->lineEditName->text());
    query.addBindValue(ui->lineEditAlias->text()); // Assuming you have an Alias line edit
    query.addBindValue(ui->lineEditGroup->currentText());
    query.addBindValue(ui->lineEditSubGroup->currentText());
    query.addBindValue(ui->lineEditSupplier->text());
    query.addBindValue(ui->lineEditUnitCost->text());
    query.addBindValue(ui->lineEditUnitUsed->text());
    query.addBindValue(ui->lineEditPacket->text());
    query.addBindValue(ui->lineEditBrand->text());
    query.addBindValue(ui->lineEditImage->text());
    query.addBindValue(ui->lineEditNewUsed->currentText());



    if (query.exec()) {
        ui->lineEditID->setStyleSheet("QLineEdit { background-color: white; }");
        ui->lineEditName->setStyleSheet("QLineEdit { background-color: white; }");
        ItemLocationWindow* locationWindow=new ItemLocationWindow;
        locationWindow->setSelectedvValue(ui->lineEditID->text());
        locationWindow->show();
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
    }


}


void ItemsMainWindow::itemSave()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    fillGroupCombo();
    fillSubGroupCombo();
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
        addUndoLabel->setDisabled(false);
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

    ui->tableWidget->setColumnCount(31);
    QStringList labels;

    labels << "Item ID" << "Name" << "Alias" << "Item Group" << "Item Sub Group"<<"Supplier Part Number"<<"UnitCost"<<"Used Unit Cost"<<"Packet Size"<<"Brand"<<"Image File"<<"New/Used"<<"Location"<<"Minimum"<<"Maximum"<<"Critical Point"<<"Used Minimum Quantity"<<"Rework Pick Level"<<"Do Not Order"<<"Swapabile"<<"SwapQuantity"<<"Swap By User"<<"Swap By Job"<<"Swap By Machine"<<"Ticketable"<<"Can Be Returned"<<"Can Be Rework"<<"Can Be Scrap"<<"Life Tracked"<<"intial Life"<<"Minimum Life";
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
        QTableWidgetItem *ImageFile = new QTableWidgetItem();
        QTableWidgetItem *New_UsedSensitive = new QTableWidgetItem(query.value(11).toString());
        QTableWidgetItem *Location = new QTableWidgetItem(query.value(12).toString());
        QTableWidgetItem *Minimum = new QTableWidgetItem(query.value(13).toString());
        QTableWidgetItem *Maximum = new QTableWidgetItem(query.value(14).toString());
        QTableWidgetItem *CriticalPoint = new QTableWidgetItem(query.value(15).toString());
        QTableWidgetItem *UsedMinimumQuantity = new QTableWidgetItem(query.value(16).toString());
        QTableWidgetItem *ReworkPickupLevel = new QTableWidgetItem(query.value(17).toString());
        QTableWidgetItem *DoNotOrder = new QTableWidgetItem(query.value(18).toString());
        QTableWidgetItem *Swappable = new QTableWidgetItem(query.value(19).toString());
        QTableWidgetItem *SwapQuantity = new QTableWidgetItem(query.value(20).toString());
        QTableWidgetItem *SwapByUser = new QTableWidgetItem(query.value(21).toString());
        QTableWidgetItem *SwapByJob = new QTableWidgetItem(query.value(22).toString());
        QTableWidgetItem *SwapByMachine = new QTableWidgetItem(query.value(23).toString());
        QTableWidgetItem *Ticketable = new QTableWidgetItem(query.value(24).toString());
        QTableWidgetItem *CanBeReturned = new QTableWidgetItem(query.value(25).toString());
        QTableWidgetItem *CanBeRework = new QTableWidgetItem(query.value(26).toString());
        QTableWidgetItem *CanBeScrap = new QTableWidgetItem(query.value(27).toString());
        QTableWidgetItem *LifeTracked = new QTableWidgetItem(query.value(28).toString());
        QTableWidgetItem *intialLife = new QTableWidgetItem(query.value(29).toString());
        QTableWidgetItem *MinimumLife = new QTableWidgetItem(query.value(30).toString());


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

        QPixmap pixmap(query.value(10).toString());
        QSize newSize(130,130);
        QPixmap scaledPixmap = pixmap.scaled(newSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        QIcon icon(scaledPixmap);
        ImageFile->setIcon(icon);
        ImageFile->setSizeHint(newSize);
        New_UsedSensitive->setText(query.value(11).toString());
        Location->setText(query.value(12).toString());
        Minimum->setText(query.value(13).toString());
        Maximum->setText(query.value(14).toString());
        CriticalPoint->setText(query.value(15).toString());
        UsedMinimumQuantity->setText(query.value(16).toString());
        ReworkPickupLevel->setText(query.value(17).toString());
        DoNotOrder->setText(query.value(18).toString());
        Swappable->setText(query.value(19).toString());
        SwapQuantity->setText(query.value(20).toString());
        SwapByUser->setText(query.value(21).toString());
        SwapByJob->setText(query.value(22).toString());
        SwapByMachine->setText(query.value(23).toString());
        Ticketable->setText(query.value(24).toString());
        CanBeReturned->setText(query.value(25).toString());
        CanBeRework->setText(query.value(26).toString());
        CanBeScrap->setText(query.value(27).toString());
        LifeTracked->setText(query.value(28).toString());
        intialLife->setText(query.value(29).toString());
        MinimumLife->setText(query.value(30).toString());

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
        ui->tableWidget->setItem(rowCount,12,Location);
        ui->tableWidget->setItem(rowCount,13,Minimum);
        ui->tableWidget->setItem(rowCount,14,Maximum);
        ui->tableWidget->setItem(rowCount,15,CriticalPoint);
        ui->tableWidget->setItem(rowCount,16,UsedMinimumQuantity);
        ui->tableWidget->setItem(rowCount,17,ReworkPickupLevel);
        ui->tableWidget->setItem(rowCount,18,DoNotOrder);
        ui->tableWidget->setItem(rowCount,19,Swappable);
        ui->tableWidget->setItem(rowCount,20,SwapQuantity);
        ui->tableWidget->setItem(rowCount,21,SwapByUser);
        ui->tableWidget->setItem(rowCount,22,SwapByJob);
        ui->tableWidget->setItem(rowCount,23,SwapByMachine);
        ui->tableWidget->setItem(rowCount,24,Ticketable);
        ui->tableWidget->setItem(rowCount,25,CanBeReturned);
        ui->tableWidget->setItem(rowCount,26,CanBeRework);
        ui->tableWidget->setItem(rowCount,27,CanBeScrap);
        ui->tableWidget->setItem(rowCount,28,LifeTracked);
        ui->tableWidget->setItem(rowCount,29,intialLife);
        ui->tableWidget->setItem(rowCount,30,MinimumLife);


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
        undo->location=query.value(12).toString();
        undo->min=query.value(13).toString();
        undo->max=query.value(14).toString();
        undo->critical=query.value(15).toString();
        undo->UsedMinQuantity=query.value(16).toString();
        undo->ReWorkPickUplevel=query.value(17).toString();
        undo->DoNotOrder=query.value(18).toString();
        undo->Swappable=query.value(19).toString();
        undo->SwapQuantity=query.value(20).toString();
        undo->SwapByUser=query.value(21).toString();
        undo->SwapByJob=query.value(22).toString();
        undo->SwapByMachine=query.value(23).toString();
        undo->Ticketable=query.value(24).toString();
        undo->CanBeReturned=query.value(25).toString();
        undo->CanBeRework=query.value(26).toString();
        undo->CanBeScrap=query.value(27).toString();
        undo->LifeTracked=query.value(28).toString();
        undo->initialLIfe=query.value(29).toString();
        undo->MinimumLIfe=query.value(30).toString();

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

    QString insertQuery = "INSERT INTO Items (ItemID, Name, Alias, ItemGroup,ItemSubGroup,SupplierPartNumber,UnitCost,UsedUnitCost,PacketSize,Brand,ImageFile,New_UsedSensitive,Location,minimum,maximum,critical,UsedMinimumQuantity,ReworkPickupLevel,DoNotOrder,Swappable,SwapQuantity,SwapByUser,SwapByJob,SwapByMachine,Ticketable,CanBeReturned,CanBeRework,CanBeScrap,LifeTracked,intialLife,MinimumLife) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)";
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
    query.addBindValue(undo->location);
    query.addBindValue(undo->min);
    query.addBindValue(undo->max);
    query.addBindValue(undo->critical);
    query.addBindValue(undo->UsedMinQuantity);
    query.addBindValue(undo->ReWorkPickUplevel);
    query.addBindValue(undo->DoNotOrder);
    query.addBindValue(undo->Swappable);
    query.addBindValue(undo->SwapQuantity);
    query.addBindValue(undo->SwapByUser);
    query.addBindValue(undo->SwapByJob);
    query.addBindValue(undo->SwapByMachine);
    query.addBindValue(undo->Ticketable);
    query.addBindValue(undo->CanBeReturned);
    query.addBindValue(undo->CanBeRework);
    query.addBindValue(undo->CanBeScrap);
    query.addBindValue(undo->LifeTracked);
    query.addBindValue(undo->initialLIfe);
    query.addBindValue(undo->MinimumLIfe);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data Reinserted ");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
        qDebug()<<query.lastError().text();

    }
    db.close();
    addUndoLabel->setDisabled(true);
}

void ItemsMainWindow::fillLineEdits(){
    QString path = SharedData::getInstance()->getValue();
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
        ui->lineEditGroup->setCurrentText(query.value(3).toString());
        ui->lineEditSubGroup->setCurrentText(query.value(4).toString());
        ui->lineEditSupplier->setText(query.value(5).toString());
        ui->lineEditUnitCost->setText(query.value(6).toString());
        ui->lineEditUnitUsed->setText(query.value(7).toString());
        ui->lineEditPacket->setText(query.value(8).toString());
        ui->lineEditBrand->setText(query.value(9).toString());
        ui->lineEditImage->setText(query.value(10).toString());
        ui->lineEditNewUsed->setCurrentText(query.value(11).toString());
    }
    dataBase.close();
    return ;
}

void ItemsMainWindow::updateItem(){
    if(ui->lineEditID->text()=="" || ui->lineEditName->text()==""){
        return;
    }
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
    query.addBindValue(ui->lineEditGroup->currentText());
    query.addBindValue(ui->lineEditSubGroup->currentText());
    query.addBindValue(ui->lineEditSupplier->text());
    query.addBindValue(ui->lineEditUnitCost->text());
    query.addBindValue(ui->lineEditUnitUsed->text());
    query.addBindValue(ui->lineEditPacket->text());
    query.addBindValue(ui->lineEditBrand->text());
    query.addBindValue(ui->lineEditImage->text());
    query.addBindValue(ui->lineEditNewUsed->currentText());
    query.addBindValue(selectedValue);


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


void ItemsMainWindow::showDialog(int row, int column)
{
    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue=item->text();
        ItemDetailDialog *detail=new ItemDetailDialog;
        detail->fillItem(selectedValue);
        detail->show();
    }
}
