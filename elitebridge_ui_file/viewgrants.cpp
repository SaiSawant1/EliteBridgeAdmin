#include "viewgrants.h"
#include "ui_viewgrants.h"

ViewGrants::ViewGrants(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewGrants)
{
    ui->setupUi(this);
}

ViewGrants::~ViewGrants()
{
    delete ui;
}

void ViewGrants::on_viewGrants_clicked()
{
    userId=ui->lineEdit->text();

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
    query.prepare("SELECT * FROM Transaction_Rights WHERE userID = :userId");
    query.bindValue(":userId", userId);

    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    // Clear previous layout from the scroll area
    QLayout* previousLayout = ui->scrollArea->layout();
    if (previousLayout)
    {
        QLayoutItem* child;
        while ((child = previousLayout->takeAt(0)) != nullptr)
        {
            delete child->widget();
            delete child;
        }
        delete previousLayout;
    }

    QVBoxLayout *layout = new QVBoxLayout;

    ui->scrollArea->setLayout(layout);

    if(query.next()){

        if(query.value(1).toString()=="true"){
            QPushButton *button_1 = new QPushButton("ChangePassword");
            layout->addWidget(button_1);

        }
        if(query.value(2).toString()=="true"){
            QPushButton *button_1 = new QPushButton("CycleCount");
            layout->addWidget(button_1);

        }
        if(query.value(3).toString()=="true"){
            QPushButton *button_1 = new QPushButton("FreeIssueWithdraw");
            layout->addWidget(button_1);

        }
        if(query.value(4).toString()=="true"){
            QPushButton *button_1 = new QPushButton("InitiateStockTransfer");
            layout->addWidget(button_1);

        }
        if(query.value(5).toString()=="true"){
            QPushButton *button_1 = new QPushButton("Scrap");
            layout->addWidget(button_1);

        }
        if(query.value(6).toString()=="true"){
            QPushButton *button_1 = new QPushButton("LoadRework");
            layout->addWidget(button_1);

        }
        if(query.value(7).toString()=="true"){
            QPushButton *button_1 = new QPushButton("MoveStock");
            layout->addWidget(button_1);

        }
    }

    dataBase.close();
}

