#include "itemsmainwindow.h"

#include "ui_itemsmainwindow.h"

ItemsMainWindow::ItemsMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ItemsMainWindow)
{
    ui->setupUi(this);



    addItemLabel = new ClickableLabel(this);
    addItemLabel->setText("Add Items");
    addItemLabel->setPixmap(QPixmap("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/Screenshot 2023-06-12 120944.png"));

    QObject::connect(addItemLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });

    ui->horizontalLayout->insertWidget(0,addItemLabel);

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


void ItemsMainWindow::addUserForm(){
    NewItemForm* newItemFormPage=new NewItemForm;
    newItemFormPage->show();
}


void ItemsMainWindow::on_refereshTable_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();
}

