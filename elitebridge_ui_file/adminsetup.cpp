#include "adminsetup.h"
#include "ui_adminsetup.h"
#include "shareddata.h"

AdminSetup::AdminSetup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminSetup)
{
    ui->setupUi(this);
    setWindowTitle("Admin Setup");
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &AdminSetup::onCellClicked);
    readDb();
}

AdminSetup::~AdminSetup()
{
    delete ui;
}
int previousRowAdmin=-1;
void AdminSetup::onCellClicked(int row, int column)
{
    if (previousRowAdmin != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowAdmin, col);
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
    previousRowAdmin = row;
}
void AdminSetup::fillAdmin(){
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
    QString str = "SELECT * FROM Admin WHERE UserName = ?";
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
        ui->lineEdit_password->setText(query.value(1).toString());
    }
    dataBase.close();
}

void AdminSetup::readDb(){
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
    QString str = "SELECT * from Admin";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(2);
    QStringList labels;
    labels << "UserName" << "Password";
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

void AdminSetup::on_add_clicked()
{
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
    query.prepare("INSERT INTO admin (UserName, password) VALUES (?, ?)");
    query.addBindValue(ui->lineEdit_userName->text());
    query.addBindValue(ui->lineEdit_password->text());
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();

}
void AdminSetup::refresh(){
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();
}


void AdminSetup::on_delete_2_clicked()
{
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
    query.prepare("DELETE FROM Admin WHERE UserName = ?");
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}


void AdminSetup::on_update_clicked()
{
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
    query.prepare("UPDATE admin SET Password = ? WHERE UserName = ?");
    query.addBindValue(ui->lineEdit_password->text());
    query.addBindValue(selectedValue);
    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    dataBase.close();
    refresh();
}

