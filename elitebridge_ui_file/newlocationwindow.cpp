#include "newlocationwindow.h"
#include "ui_newlocationwindow.h"

NewLocationWindow::NewLocationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewLocationWindow)
{
    ui->setupUi(this);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &NewLocationWindow::onCellClicked);
    readDb();
}

NewLocationWindow::~NewLocationWindow()
{
    delete ui;
}
int previousRowLocation=-1;
void NewLocationWindow::onCellClicked(int row, int column)
{
    if (previousRowLocation != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowLocation, col);
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
    previousRowLocation = row;
}
void NewLocationWindow::fillAdmin(){
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
    QString str = "SELECT * FROM Location WHERE LocationID = ?";
    query.prepare(str);
    query.addBindValue(selectedValue);

    if (!query.exec())
    {
        qDebug() << "Query execution failed: " << query.lastError().text();
        return;
    }


    if(query.next())
    {
        ui->lineEdit_userName->setText(query.value(0).toString());
        ui->lineEdit_Type->setText(query.value(1).toString());
        ui->lineEdit_Description->setText(query.value(2).toString());
    }
    dataBase.close();
}

void NewLocationWindow::readDb(){
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
    QString str = "SELECT * from Location";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(3);
    QStringList labels;
    labels << "Location ID"<<"Type"<<"Description";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *LocationID = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Type = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Description = new QTableWidgetItem(query.value(2).toString());


        LocationID->setText(query.value(0).toString());
        Type->setText(query.value(1).toString());
        Description->setText(query.value(2).toString());


        ui->tableWidget->setItem(rowCount,0,LocationID);
        ui->tableWidget->setItem(rowCount,1,Type);
        ui->tableWidget->setItem(rowCount,2,Description);


        rowCount++;
    }
    dataBase.close();
}

void NewLocationWindow::on_add_clicked()
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
    query.prepare("INSERT INTO Location (LocationID,Type,Description) VALUES (?,?,?)");
    query.addBindValue(ui->lineEdit_userName->text());
    query.addBindValue(ui->lineEdit_Type->text());
    query.addBindValue(ui->lineEdit_Description->text());
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();

}
void NewLocationWindow::refresh(){
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();
}


void NewLocationWindow::on_delete_2_clicked()
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
    query.prepare("DELETE FROM Location WHERE LocationID = ?");
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}


void NewLocationWindow::on_update_clicked()
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
    query.prepare("UPDATE Location SET Type = ?,Description = ? WHERE LocationID = ?");
    query.addBindValue(ui->lineEdit_Type->text());
    query.addBindValue(ui->lineEdit_Description->text());
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}

