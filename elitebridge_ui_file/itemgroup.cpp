#include "itemgroup.h"
#include "ui_itemgroup.h"
#include "shareddata.h"
ItemGroup::ItemGroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemGroup)
{
    ui->setupUi(this);
    setWindowTitle("Item Group");
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &ItemGroup::onCellClicked);
    readDb();
}

ItemGroup::~ItemGroup()
{
    delete ui;
}

int previousRowItemGroup=-1;
void ItemGroup::onCellClicked(int row, int column)
{
    if (previousRowItemGroup != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowItemGroup, col);
            if (item)
                item->setBackground(Qt::white); // Set the default background color
        }
    }

    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue = item->text();
        fillAdmin();
    }

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
    {
        QTableWidgetItem* item = ui->tableWidget->item(row, col);
        if (item)
            item->setBackground(Qt::yellow); // Set the desired background color
    }
    previousRowItemGroup = row;
}
void ItemGroup::fillAdmin(){
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
    QString str = "SELECT * FROM item_group WHERE itemGroupID = ?";
    query.prepare(str);
    query.addBindValue(selectedValue);

    if (!query.exec())
    {
        qDebug() << "Query execution failed: " << query.lastError().text();
        return;
    }


    if(query.next())
    {
        ui->itemgroupid->setText(query.value(0).toString());
        ui->itemgroupname->setText(query.value(1).toString());
    }
    dataBase.close();
}

void ItemGroup::readDb(){
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
    QString str = "SELECT * from item_group";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(2);
    QStringList labels;
    labels << "Item Group ID" << "Item Group Name";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *UserName = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Password = new QTableWidgetItem(query.value(1).toString());


        UserName->setText(query.value(0).toString());
        Password->setText(query.value(1).toString());


        ui->tableWidget->setItem(rowCount,0,UserName);
        ui->tableWidget->setItem(rowCount,1,Password);


        rowCount++;
    }
    dataBase.close();
}

void ItemGroup::on_add_clicked()
{
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
    query.prepare("INSERT INTO item_group (itemGroupID, Name) VALUES (?, ?)");
    query.addBindValue(ui->itemgroupid->text());
    query.addBindValue(ui->itemgroupname->text());
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();

}
void ItemGroup::refresh(){
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();
}


void ItemGroup::on_delete_2_clicked()
{
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
    query.prepare("DELETE FROM item_group WHERE itemGroupID = ?");
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}


void ItemGroup::on_update_clicked()
{
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
     query.prepare("UPDATE item_group SET Name = ? WHERE itemGroupID = ?");
    query.addBindValue(ui->itemgroupname->text());
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}
