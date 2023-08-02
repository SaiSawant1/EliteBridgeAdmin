#include "userwindow.h"
#include "ui_userwindow.h"
#include <QMessageBox>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableView>
#include "createusertransaction.h"
#include "viewgrants.h"
#include "updateusertransaction.h"

userWindow::userWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userWindow)
{
    ui->setupUi(this);

    QHBoxLayout* horizontalLayout = new QHBoxLayout(ui->frame);
    addUserLabel = new ClickableLabel(this);
    addUserLabel->setText("Add User");
    addUserLabel->setScaledContents(true);
    addUserLabel->setMaximumSize(72,72);
    QString appDirPath =QApplication::applicationDirPath();

    addUserLabel->setPixmap(QPixmap(appDirPath+"/img/file-new-svgrepo-com.svg"));

    QObject::connect(addUserLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &userWindow::onCellClicked);

    horizontalLayout->insertWidget(0,addUserLabel);


    addUpdateLabel = new ClickableLabel(this);
    addUpdateLabel->setText("Update User");
    addUpdateLabel->setScaledContents(true);
    addUpdateLabel->setMaximumSize(72,72);
    QPixmap svgImage(appDirPath+"/img/edit-report-svgrepo-com.svg");
    addUpdateLabel->setPixmap(svgImage);
    QObject::connect(addUpdateLabel, &ClickableLabel::clicked,this,[&]() {
        updateUser();
    });
    horizontalLayout->insertWidget(1,addUpdateLabel);


    addSaveLabel=new ClickableLabel(this);
    addSaveLabel->setText("save User");
    addSaveLabel->setScaledContents(true);
    addSaveLabel->setMaximumSize(72,72);
    QPixmap saveImage(appDirPath+"/img/save-svgrepo-com.svg");
    addSaveLabel->setPixmap(saveImage);
    QObject::connect(addSaveLabel, &ClickableLabel::clicked,this,[&]() {
        userSave();
    });
    horizontalLayout->insertWidget(2,addSaveLabel);


    addUndoLabel=new ClickableLabel(this);
    addUndoLabel->setText("undo cahnges");
    addUndoLabel->setScaledContents(true);
    addUndoLabel->setMaximumSize(72,72);
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
    QPixmap findImage(appDirPath+"/img/search-alt-3-svgrepo-com.svg");
    addfindLabel->setPixmap(findImage);
    QObject::connect(addfindLabel, &ClickableLabel::clicked,this,[&]() {
        search();
    });
    horizontalLayout->insertWidget(6,addfindLabel);

    addExitLabel=new ClickableLabel(this);
    addExitLabel->setText("undo cahnges");
    addExitLabel->setScaledContents(true);
    addExitLabel->setMaximumSize(72,72);
    QPixmap exitImage(appDirPath+"/img/exit-svgrepo-com (1).svg");
    addExitLabel->setPixmap(exitImage);
    QObject::connect(addExitLabel, &ClickableLabel::clicked,this,[&]() {
        this->close();
    });
    horizontalLayout->insertWidget(7,addExitLabel);




    ui->frame->setLayout(horizontalLayout);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &userWindow::onCellClicked);
    connect(ui->tableWidget, &QTableWidget::cellDoubleClicked, this, &userWindow::showDialog);
    ui->user_image->installEventFilter(this);
    readDb();

}

void userWindow::addUserForm(){
    if(ui->user_id->text()=="" || ui->user_name->text()==""){
        if(ui->user_id->text()==""){
            ui->user_id->setStyleSheet("QLineEdit { background-color: red; }");
        }
        if(ui->user_name->text()==""){
            ui->user_name->setStyleSheet("QLineEdit { background-color: red; }");
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

    QString insertQuery = "INSERT INTO Users (UserID, Name, Alias, Password,ImageFile,CostCenter,AllowtoLogin) VALUES (?, ?, ?, ?, ?, ?, ? )";
    query.prepare(insertQuery);
    QString radioValue="false";
    if(ui->allowedToLogin->isChecked()){
        radioValue="true";
    }

    query.addBindValue(ui->user_id->text());
    query.addBindValue( ui->user_name->text());
    query.addBindValue( ui->user_alias->text());
    query.addBindValue(ui->user_password->text());
    query.addBindValue( ui->user_image->text());
    query.addBindValue( ui->user_costCenter->text());
    query.addBindValue( radioValue);
    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
    }
    db.close();
}
userWindow::~userWindow()
{
    delete ui;
}

void userWindow:: readDb()
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
    QString str = "SELECT * from Users";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(7);
    QStringList labels;
    labels << "User ID" << "Name" << "Alias" << "Password"<<"Image File" << "Cost Center" << "Allow to Login";
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

int previousRowuser=-1;

void userWindow::onCellClicked(int row, int column)
{
    if (previousRowuser != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowuser, col);
            if (item)
                item->setBackground(Qt::white); // Set the default background color
        }
    }

    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue = item->text();
        fillLineEdit();


    }

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
    {
        QTableWidgetItem* item = ui->tableWidget->item(row, col);
        if (item)
            item->setBackground(Qt::yellow); // Set the desired background color
    }
    previousRowuser = row;
}

void userWindow::userSave()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();

}


void userWindow::on_create_transaction_triggered()
{
    CreateUserTransaction* createWindow=new CreateUserTransaction();
    createWindow->setUserWindowInstance(this);
    createWindow->onCellSelected(selectedValue);
    createWindow->show();

}


void userWindow::on_actionuser_grants_triggered()
{
    ViewGrants* grantsDialog=new ViewGrants;
    grantsDialog->show();
}


void userWindow::deleteUser()
{

    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this record?", QMessageBox::Yes | QMessageBox::No);

    fillUndoStruct();
    if (confirmation == QMessageBox::Yes) {
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
        query.prepare("DELETE FROM Users WHERE UserID = :rowId");
        query.bindValue(":rowId", selectedValue);

        if (query.exec()) {
            // Deletion successful
            QMessageBox::information(this, "Success", "Record deleted successfully.");
        } else {
            // Deletion failed
            QMessageBox::information(this, "Failed", "Record not deleted.");
        }

        dataBase.close();
    }
    else{
        return;
    }
}



void userWindow::search(){

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";

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
    QString str = "SELECT * FROM Users WHERE Name LIKE '" + lineEdit->text() + "%'";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(7);
    QStringList labels;
    labels << "UserID" << "Name" << "Alias" << "Password"<<"ImageFile" << "CostCenter" << "AllowtoLogin";
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

void userWindow::fillUndoStruct(){
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
    query.prepare("SELECT * FROM Users WHERE UserID = :userId");
    query.bindValue(":userId", selectedValue);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }
    undo=new undoStruct;
    if(query.next()){
        undo->id=query.value(0).toString();
        undo->name=query.value(1).toString();
        undo->alias=query.value(2).toString();
        undo->pass=query.value(3).toString();
        undo->imageFile=query.value(4).toString();
        undo->cost=query.value(5).toString();
        undo->allowlogin=query.value(6).toString();
    }


    dataBase.close();
    return ;
}
void userWindow::undoFunc(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO Users (UserID, Name, Alias, Password,ImageFile,CostCenter,AllowtoLogin) VALUES (?, ?, ?, ?, ?, ?, ? )";
    query.prepare(insertQuery);



    query.addBindValue(undo->id);
    query.addBindValue(undo->name );
    query.addBindValue(undo->alias);
    query.addBindValue(undo->pass);
    query.addBindValue(undo->imageFile );
    query.addBindValue(undo->cost );
    query.addBindValue(undo->allowlogin);
    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data Reinserted ");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}

void userWindow::updateUser()
{
    if(ui->user_id->text()=="" || ui->user_name->text()==""){
        if(ui->user_id->text()==""){
            ui->user_id->setStyleSheet("QLineEdit { background-color: red; }");
        }
        if(ui->user_name->text()==""){
            ui->user_name->setStyleSheet("QLineEdit { background-color: red; }");
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

    QString insertQuery = "UPDATE Users SET Name = :name, Alias = :alias, Password = :password, ImageFile = :imageFile, CostCenter = :costCenter, AllowtoLogin = :allowToLogin WHERE UserID = :userID";
    query.prepare(insertQuery);
    QString radioValue="false";
    if(ui->allowedToLogin->isChecked()){
        radioValue="true";
    }

    query.bindValue(":name",ui->user_name->text());
    query.bindValue(":alias",ui->user_alias->text() );
    query.bindValue(":password", ui->user_password->text());
    query.bindValue(":imageFile", ui->user_image->text());
    query.bindValue(":costCenter",ui->user_costCenter->text());
    query.bindValue(":allowToLogin",radioValue);
    query.bindValue(":userID", ui->user_id->text());


    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data update successfully!");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to update data!");
    }
    db.close();
}


void userWindow::on_actionAdd_User_To_Group_triggered()
{
    selectGroup* groupWindow=new selectGroup();
    groupWindow->setValue(selectedValue);
    groupWindow->show();
}

void userWindow::fillLineEdit(){
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
    query.prepare("SELECT * FROM Users WHERE UserID = :userId");
    query.bindValue(":userId", selectedValue);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    if(query.next()){
        ui->user_id->setText(query.value(0).toString());
        ui->user_name->setText(query.value(1).toString());
        ui->user_alias->setText(query.value(2).toString());
        ui->user_password->setText(query.value(3).toString());
        ui->user_image->setText(query.value(4).toString());
        ui->user_costCenter->setText(query.value(5).toString());
        if(query.value(6).toString()=="true"){
            ui->allowedToLogin->setChecked(true);
        }else{
            ui->allowedToLogin->setChecked(false);
        }
    }


    dataBase.close();
    return ;
}


void userWindow::mousePressEvent(QMouseEvent *event)
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

void userWindow::mouseMoveEvent(QMouseEvent *event)
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

void userWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (resizing) {
        resizing = false;
        event->accept();
    }
    else {
        event->ignore();
    }
}
bool userWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->user_image && event->type() == QEvent::MouseButtonRelease)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if (mouseEvent->button() == Qt::LeftButton)
        {
            QString filePath = QFileDialog::getOpenFileName(this, "Select File");
            if (!filePath.isEmpty())
            {
                ui->user_image->setText(filePath);
            }
        }
    }

    return QObject::eventFilter(obj, event);
}

void userWindow::showDialog(int row, int column)
{
    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue=item->text();
        UserDetails *detail=new UserDetails;
        detail->fillItem(selectedValue);
        detail->show();
    }
}




void userWindow::on_actionupdate_transaction_triggered()
{
    UpdateUserTransaction* updateTransaction=new UpdateUserTransaction;
    updateTransaction->setSelectedValue(selectedValue);
    updateTransaction->show();
}

