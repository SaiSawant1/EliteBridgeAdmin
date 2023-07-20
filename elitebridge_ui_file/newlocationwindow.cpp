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
        ui->lineEdit_Welcome_1->setText(query.value(3).toString());
        ui->lineEdit_Welcome_2->setText(query.value(4).toString());
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

    ui->tableWidget->setColumnCount(5);
    QStringList labels;
    labels << "Location ID"<<"Type"<<"Description"<<"Welcome Message 1"<<"Welcome Message 2";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *LocationID = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Type = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Description = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *Message1 = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *Message2 = new QTableWidgetItem(query.value(4).toString());


        LocationID->setText(query.value(0).toString());
        Type->setText(query.value(1).toString());
        Description->setText(query.value(2).toString());
        Message1->setText(query.value(3).toString());
        Message2->setText(query.value(4).toString());


        ui->tableWidget->setItem(rowCount,0,LocationID);
        ui->tableWidget->setItem(rowCount,1,Type);
        ui->tableWidget->setItem(rowCount,2,Description);
        ui->tableWidget->setItem(rowCount,3,Message1);
        ui->tableWidget->setItem(rowCount,4,Message2);


        rowCount++;
    }
    dataBase.close();
}

void NewLocationWindow::on_add_clicked()
{
    bool conversionOk = false;
    int integerValue = ui->lineEdit_userName->text().toInt(&conversionOk, 10);

    if(conversionOk==false){
          QMessageBox::warning(nullptr, "Invalid Input", "Please enter a valid number.");
        return ;
    }


    QString dbPath = "D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        QMessageBox::warning(nullptr, "Database not open", "Data base was not open please check your connection");
        return ;
    }

    QSqlQuery query(dataBase);
    query.prepare("INSERT INTO Location (LocationID,Type,Description,welcomeMessage1,welcomeMessage2) VALUES (?,?,?,?,?)");
    query.addBindValue(ui->lineEdit_userName->text());
    query.addBindValue(ui->lineEdit_Type->text());
    query.addBindValue(ui->lineEdit_Description->text());
    query.addBindValue(ui->lineEdit_Welcome_1->text());
    query.addBindValue(ui->lineEdit_Welcome_2->text());
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        qDebug()<<query.lastError().text();
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
    bool conversionOk = false;
    int integerValue = ui->lineEdit_userName->text().toInt(&conversionOk, 10);

    if(conversionOk==false){
        QMessageBox::warning(nullptr, "Invalid Input", "Please enter a valid number.");
        return ;
    }
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
    query.prepare("UPDATE Location SET Type = ?,Description = ?,welcomeMessage1 = ?, welcomeMessage2 = ? WHERE LocationID = ?");
    query.addBindValue(ui->lineEdit_Type->text());
    query.addBindValue(ui->lineEdit_Description->text());
    query.addBindValue(ui->lineEdit_Welcome_1->text());
    query.addBindValue(ui->lineEdit_Welcome_2->text());
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}

