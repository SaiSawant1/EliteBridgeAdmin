#include "auxmainwindow.h"
#include "ui_auxmainwindow.h"

AuxMainWindow::AuxMainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuxMainWindow)
{
    ui->setupUi(this);

    QHBoxLayout* horizontalLayout = new QHBoxLayout(ui->frame);

    addUserLabel = new ClickableLabel(this);
    addUserLabel->setText("Add User");
    addUserLabel->setScaledContents(true);
    addUserLabel->setMaximumSize(72,72);
    addUserLabel->setPixmap(QPixmap("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/file-new-svgrepo-com.svg"));

    QObject::connect(addUserLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &AuxMainWindow::onCellClicked);

    horizontalLayout->insertWidget(0,addUserLabel);


    addUpdateLabel = new ClickableLabel(this);
    addUpdateLabel->setText("Update User");
    addUpdateLabel->setScaledContents(true);
    addUpdateLabel->setMaximumSize(72,72);
    QPixmap svgImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/edit-report-svgrepo-com.svg");
    addUpdateLabel->setPixmap(svgImage);
    QObject::connect(addUpdateLabel, &ClickableLabel::clicked,this,[&]() {
        updateUser();
    });
    horizontalLayout->insertWidget(1,addUpdateLabel);


    addSaveLabel=new ClickableLabel(this);
    addSaveLabel->setText("save User");
    addSaveLabel->setScaledContents(true);
    addSaveLabel->setMaximumSize(72,72);
    QPixmap saveImage("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/save-svgrepo-com.svg");
    addSaveLabel->setPixmap(saveImage);
    QObject::connect(addSaveLabel, &ClickableLabel::clicked,this,[&]() {
        userSave();
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
        deleteUser();
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
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &AuxMainWindow::onCellClicked);

    readDb();

}


void AuxMainWindow:: readDb()
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
    QString str = "SELECT * from Aux";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(8);
    QStringList labels;


    labels << "Aux" << "Auxiliary" << "AuxiliaryAlias" << "AuxEnable"<< "DateCreated" <<"CreatedBy" << "DatelastModified" << "LastModifiedBy";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);

        QTableWidgetItem *Aux = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Auxiliary = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *AuxiliaryAlias = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *AuxEnable = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *DateCreated = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *CreatedBy = new QTableWidgetItem(query.value(5).toString());
        QTableWidgetItem *DatelastModified = new QTableWidgetItem(query.value(6).toString());
        QTableWidgetItem *LastModifiedBy = new QTableWidgetItem(query.value(7).toString());

        Aux->setText(query.value(0).toString());
        Auxiliary->setText(query.value(1).toString());
        AuxiliaryAlias->setText(query.value(2).toString());
        AuxEnable->setText(query.value(3).toString());
        DateCreated->setText(query.value(4).toString());
        CreatedBy->setText(query.value(5).toString());
        DatelastModified->setText(query.value(6).toString());
        LastModifiedBy->setText(query.value(7).toString());

        ui->tableWidget->setItem(rowCount,0,Aux);
        ui->tableWidget->setItem(rowCount,1,Auxiliary);
        ui->tableWidget->setItem(rowCount,2,AuxiliaryAlias);
        ui->tableWidget->setItem(rowCount,3,AuxEnable);
        ui->tableWidget->setItem(rowCount,4,DateCreated);
        ui->tableWidget->setItem(rowCount,5,CreatedBy);
        ui->tableWidget->setItem(rowCount,6,DatelastModified);
        ui->tableWidget->setItem(rowCount,7,LastModifiedBy);

        rowCount++;
    }
    dataBase.close();
}

void AuxMainWindow::addUserForm() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo() << "db connection failed";
        return;
    }

    QSqlQuery query(db);
    QString insertQuery = "INSERT INTO Aux (Aux, Auxiliary, AuxiliaryAlias, AuxEnable, DateCreated, CreatedBy, DatelastModified, LastModifiedBy) "
                          "VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
    query.prepare(insertQuery);

    query.addBindValue(ui->Aux->text());
    query.addBindValue(ui->Auxiliary->text());
    query.addBindValue(ui->AuxiliaryAlias->text());
    query.addBindValue(ui->AuxEnable->text());
    query.addBindValue(ui->DateCreated->text());
    query.addBindValue(ui->CreatedBy->text());
    query.addBindValue(ui->DatelastModified->text());
    query.addBindValue(ui->LastModifiedBy->text());

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data: " + query.lastError().text());
    }

    db.close();
}

void AuxMainWindow::userSave()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();

}

void AuxMainWindow::search() {
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList labels;
    labels << "Aux" << "Auxiliary" << "AuxiliaryAlias" << "AuxEnable" << "DateCreated" << "CreatedBy" << "DatelastModified" << "LastModifiedBy";
    ui->tableWidget->setColumnCount(labels.size());
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    QString dbPath = "D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB";
    QSqlDatabase dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);

    if (!dataBase.open()) {
        qDebug() << "Database open error";
        return;
    }

    QSqlQuery query(dataBase);
    QString searchValue = lineEdit->text() + "%";
    QString str = "SELECT * FROM Aux WHERE Aux LIKE ?";
    query.prepare(str);
    query.addBindValue(searchValue);

    if (!query.exec()) {
        qDebug() << "Query execution failed";
        return;
    }

    int rowCount = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(rowCount);
        for (int column = 0; column < labels.size(); ++column) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(column).toString());
            item->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(rowCount, column, item);
        }
        rowCount++;
    }

    dataBase.close();
}

void AuxMainWindow::updateUser()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo() << "db connection failed";
    }

    QSqlQuery query;

    QString updateQuery = "UPDATE Aux SET Aux = :aux, Auxiliary = :auxiliary, AuxiliaryAlias = :auxiliaryAlias, AuxEnable = :auxEnable, DateCreated = :dateCreated, CreatedBy = :createdBy, DatelastModified = :datelastModified, LastModifiedBy = :lastModifiedBy WHERE Aux = :aux";
    query.prepare(updateQuery);

    query.bindValue(":aux", ui->Aux->text());
    query.bindValue(":auxiliary", ui->Auxiliary->text());
    query.bindValue(":auxiliaryAlias", ui->AuxiliaryAlias->text());
    query.bindValue(":auxEnable", ui->AuxEnable->text());
    query.bindValue(":dateCreated", ui->DateCreated->text());
    query.bindValue(":createdBy", ui->CreatedBy->text());
    query.bindValue(":datelastModified", ui->DatelastModified->text());
    query.bindValue(":lastModifiedBy", ui->LastModifiedBy->text());

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data updated successfully!");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to update data!");
    }

    db.close();
}

int previousRowAux = -1;

void AuxMainWindow::onCellClicked(int row, int column)
{
    if (previousRowAux != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowAux, col);
            if (item)
                item->setBackground(Qt::white); // Set the default background color
        }
    }

    QTableWidgetItem* item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue = item->text();
    }

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
    {
        QTableWidgetItem* item = ui->tableWidget->item(row, col);
        if (item)
            item->setBackground(Qt::yellow); // Set the desired background color
    }
    previousRowAux = row;
}

void AuxMainWindow::deleteUser()
{
    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this record?", QMessageBox::Yes | QMessageBox::No);

    fillUndoStruct();
    if (confirmation == QMessageBox::Yes) {
        QString dbPath = "D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB";
        QSqlDatabase dataBase;
        dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
        dataBase.setDatabaseName(dbPath);

        if (!dataBase.open())
        {
            qDebug() << "Database open error";
            return;
        }

        QSqlQuery query(dataBase);
        query.prepare("DELETE FROM Aux WHERE Aux = :rowId");
        query.bindValue(":rowId", selectedValue);

        if (query.exec()) {
            // Deletion successful
            QMessageBox::information(this, "Success", "Record deleted successfully.");
        } else {
            // Deletion failed
            QMessageBox::information(this, "Failed", "Record not deleted.");
        }

        dataBase.close();
    } else {
        return;
    }
}

void AuxMainWindow::fillUndoStruct()
{
    QString dbPath = "D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);

    if (!dataBase.open())
    {
        qDebug() << "Database open error";
        return;
    }

    QSqlQuery query(dataBase);
    query.prepare("SELECT * FROM Aux WHERE Aux = :aux");
    query.bindValue(":aux", selectedValue);

    if (!query.exec())
    {
        qDebug() << "Query execution failed";
        return;
    }

    undo = new undoStructAux;
    if (query.next()) {
        undo->Aux = query.value(0).toString();
        undo->Auxiliary = query.value(1).toString();
        undo->AuxiliaryAlias = query.value(2).toString();
        undo->AuxEnable = query.value(3).toString();
        undo->DateCreated = query.value(4).toString();
        undo->CreatedBy = query.value(5).toString();
        undo->DatelastModified = query.value(6).toString();
        undo->LastModifiedBy = query.value(7).toString();
    }

    dataBase.close();
}

void AuxMainWindow::undoFunc()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo() << "db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO Aux (Aux, Auxiliary, AuxiliaryAlias, AuxEnable, DateCreated, CreatedBy, DatelastModified, LastModifiedBy) "
                          "VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
    query.prepare(insertQuery);

    query.addBindValue(undo->Aux);
    query.addBindValue(undo->Auxiliary);
    query.addBindValue(undo->AuxiliaryAlias);
    query.addBindValue(undo->AuxEnable);
    query.addBindValue(undo->DateCreated);
    query.addBindValue(undo->CreatedBy);
    query.addBindValue(undo->DatelastModified);
    query.addBindValue(undo->LastModifiedBy);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data reinserted.");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data.");
    }

    db.close();
}

AuxMainWindow::~AuxMainWindow()
{
    delete ui;
}