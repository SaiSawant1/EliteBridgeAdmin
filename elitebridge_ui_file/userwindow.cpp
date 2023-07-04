#include "userwindow.h"
#include "ui_userwindow.h"
#include "newuserform.h"
#include <QMessageBox>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableView>



userWindow::userWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userWindow)
{
    ui->setupUi(this);

    readDb();

    addUserLabel = new ClickableLabel(this);
    addUserLabel->setText("Add User");
    addUserLabel->setPixmap(QPixmap("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/Screenshot 2023-06-12 120944.png"));

    QObject::connect(addUserLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });

    ui->horizontalLayout->insertWidget(0,addUserLabel);

}

void userWindow::addUserForm(){
    newUserForm* newUserFormPage=new newUserForm;
    newUserFormPage->show();
}
userWindow::~userWindow()
{
    delete ui;
}

void userWindow:: readDb()
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
    QString str = "SELECT * from Users";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(7);
    QStringList labels;
    labels << "UserID" << "Name" << "Alias" << "Password"<<"ImageFile" << "ImageFile" << "AllowtoLogin";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *UserID = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Name = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *Password = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *ImageFile = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *CostCenter = new QTableWidgetItem(query.value(5).toString());
        QTableWidgetItem *AllowtoLogin = new QTableWidgetItem(query.value(6).toString());

        UserID->setText(query.value(0).toString());
        Name->setText(query.value(1).toString());
        Alias->setText(query.value(2).toString());
        Password->setText(query.value(3).toString());
        ImageFile->setText(query.value(4).toString());
        CostCenter->setText(query.value(5).toString());
        AllowtoLogin->setText(query.value(6).toString());

        ui->tableWidget->setItem(rowCount,0,UserID);
        ui->tableWidget->setItem(rowCount,1,Name);
        ui->tableWidget->setItem(rowCount,2,Alias);
        ui->tableWidget->setItem(rowCount,3,Password);
        ui->tableWidget->setItem(rowCount,4,ImageFile);
        ui->tableWidget->setItem(rowCount,5,CostCenter);
        ui->tableWidget->setItem(rowCount,6,AllowtoLogin);

        rowCount++;
    }
    dataBase.close();
}



void userWindow::on_pushButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();

}

