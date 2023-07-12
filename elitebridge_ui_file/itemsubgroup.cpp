#include "itemsubgroup.h"
#include "ui_itemsubgroup.h"

ItemSubGroup::ItemSubGroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemSubGroup)
{
    ui->setupUi(this);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &ItemSubGroup::onCellClicked);
    readDb();
}

ItemSubGroup::~ItemSubGroup()
{
    delete ui;
}
int previousRowItemSubGroup=-1;
void ItemSubGroup::onCellClicked(int row, int column)
{
    if (previousRowItemSubGroup != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowItemSubGroup, col);
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
    previousRowItemSubGroup = row;
}
void ItemSubGroup::fillAdmin(){
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
    QString str = "SELECT * FROM item_sub_group WHERE subGroupID = ?";
    query.prepare(str);
    query.addBindValue(selectedValue);

    if (!query.exec())
    {
        qDebug() << "Query execution failed: " << query.lastError().text();
        return;
    }


    if(query.next())
    {
        ui->itemSubGroupid->setText(query.value(0).toString());
        ui->itemSubGroupname->setText(query.value(1).toString());
    }
    dataBase.close();
}

void ItemSubGroup::readDb(){
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
    QString str = "SELECT * from item_sub_group";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(2);
    QStringList labels;
    labels << "Item Sub Group ID" << "Item Sub Group Name";
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

void ItemSubGroup::on_add_clicked()
{
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
    query.prepare("INSERT INTO item_sub_group (subGroupID, subGroupName) VALUES (?, ?)");
    query.addBindValue(ui->itemSubGroupid->text());
    query.addBindValue(ui->itemSubGroupname->text());
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();

}
void ItemSubGroup::refresh(){
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();
}


void ItemSubGroup::on_delete_2_clicked()
{
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
    query.prepare("DELETE FROM item_sub_group WHERE subGroupID = ?");
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}


void ItemSubGroup::on_update_clicked()
{
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
    query.prepare("UPDATE item_sub_group SET subGroupName = ? WHERE subGroupID = ?");
    query.addBindValue(ui->itemSubGroupname->text());
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}

