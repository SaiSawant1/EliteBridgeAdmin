#include "usergroupmainwindow.h"
#include "ui_usergroupmainwindow.h"
#include "grouptransaction.h"
#include "shareddata.h"
#include "updategrouptransaction.h"

UserGroupMainWindow::UserGroupMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserGroupMainWindow)
{
    ui->setupUi(this);

     QString appDirPath =QApplication::applicationDirPath();

    QHBoxLayout* horizontalLayout = new QHBoxLayout(ui->frame);

    addUserLabel = new ClickableLabel(this);
    addUserLabel->setText("Add User");
    addUserLabel->setScaledContents(true);
    addUserLabel->setMaximumSize(72,72);
    addUserLabel->setPixmap(QPixmap(appDirPath+"/img/file-new-svgrepo-com.svg"));

    QObject::connect(addUserLabel, &ClickableLabel::clicked,this,[&]() {
        addGroup();
    });
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &UserGroupMainWindow::onCellClicked);

    horizontalLayout->insertWidget(0,addUserLabel);


    addUpdateLabel = new ClickableLabel(this);
    addUpdateLabel->setText("Update User");
    addUpdateLabel->setScaledContents(true);
    addUpdateLabel->setMaximumSize(72,72);
    QPixmap svgImage(appDirPath+"/img/edit-report-svgrepo-com.svg");
    addUpdateLabel->setPixmap(svgImage);
    QObject::connect(addUpdateLabel, &ClickableLabel::clicked,this,[&]() {
        updateGroup();
    });
    horizontalLayout->insertWidget(1,addUpdateLabel);


    addSaveLabel=new ClickableLabel(this);
    addSaveLabel->setText("save User");
    addSaveLabel->setScaledContents(true);
    addSaveLabel->setMaximumSize(72,72);
    QPixmap saveImage(appDirPath+"/img/save-svgrepo-com.svg");
    addSaveLabel->setPixmap(saveImage);
    QObject::connect(addSaveLabel, &ClickableLabel::clicked,this,[&]() {
        groupSave();
    });
    horizontalLayout->insertWidget(2,addSaveLabel);


    addUndoLabel=new ClickableLabel(this);
    addUndoLabel->setText("undo cahnges");
    addUndoLabel->setScaledContents(true);
    addUndoLabel->setMaximumSize(72,72);
    addUndoLabel->setDisabled(true);
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
        deleteGroup();
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
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &UserGroupMainWindow::onCellClicked);
    readDb();

}

int previousRowGroup=-1;

void UserGroupMainWindow::onCellClicked(int row, int column)
{
    if (previousRowGroup != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowGroup, col);
            if (item)
                item->setBackground(Qt::white); // Set the default background color
        }
    }

    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue = item->text();
        fillLineEdits();
    }

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
    {
        QTableWidgetItem* item = ui->tableWidget->item(row, col);
        if (item)
            item->setBackground(Qt::yellow); // Set the desired background color
    }
    previousRowGroup = row;
}

void UserGroupMainWindow::readDb(){
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
    QString str = "SELECT * from Groups";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(2);
    QStringList labels;
    labels << "GroupID" << "groupName";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *GroupID = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *groupName = new QTableWidgetItem(query.value(1).toString());


        GroupID->setText(query.value(0).toString());
        groupName->setText(query.value(1).toString());


        ui->tableWidget->setItem(rowCount,0,GroupID);
        ui->tableWidget->setItem(rowCount,1,groupName);


        rowCount++;
    }
    dataBase.close();
}

void UserGroupMainWindow::addGroup(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query(db);

    QString insertQuery = "INSERT INTO Groups (groupID, groupName) VALUES (?, ?)";
    query.prepare(insertQuery);

    query.addBindValue(ui->groupID->text());
    query.addBindValue(ui->name->text());




    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
    }
    db.close();
    groupSave();
}
void UserGroupMainWindow::updateGroup(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query(db);
    QString updateQuery = "UPDATE Groups SET groupName = ? WHERE groupID = ?";
    query.prepare(updateQuery);

    query.addBindValue(ui->name->text());
    query.addBindValue(selectedValue);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data updated successfully!");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to update data!");
    }
    db.close();
    groupSave();
}
void UserGroupMainWindow:: groupSave(){
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();
}
void UserGroupMainWindow::deleteGroup(){
    fillUndo();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query(db);
    QString deleteQuery = "DELETE FROM Groups WHERE groupID = ?";
    query.prepare(deleteQuery);

    query.addBindValue(selectedValue);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data deleted successfully!");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to delete data!");
    }
    db.close();
    groupSave();
    addUndoLabel->setDisabled(false);

}
void UserGroupMainWindow::search(){
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";

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
    QString str = "SELECT * FROM Groups WHERE groupName LIKE '" + lineEdit->text() + "%'";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }
    ui->tableWidget->setColumnCount(2);
    QStringList labels;
    labels << "GroupID" << "groupName";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *GroupID = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *groupName = new QTableWidgetItem(query.value(1).toString());


        GroupID->setText(query.value(0).toString());
        groupName->setText(query.value(1).toString());


        ui->tableWidget->setItem(rowCount,0,GroupID);
        ui->tableWidget->setItem(rowCount,1,groupName);


        rowCount++;
    }
    dataBase.close();

}
void UserGroupMainWindow::fillLineEdits(){
    QString dbPath = SharedData::getInstance()->getValue();
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }


    QSqlQuery query(dataBase);
    query.prepare("SELECT * FROM Groups WHERE groupID = :groupId");
    query.bindValue(":groupId", selectedValue);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    if(query.next()){
        ui->groupID->setText(query.value(0).toString());
        ui->name->setText(query.value(1).toString());
    }


    dataBase.close();
    return ;
}
UserGroupMainWindow::~UserGroupMainWindow()
{
    delete ui;
}


void UserGroupMainWindow::on_actionTransaction_triggered()
{

}


void UserGroupMainWindow::on_actionGroup_Transaction_triggered()
{
    groupTransaction* window=new groupTransaction;
    window->setSelectedValue(selectedValue);
    window->show();
}
void UserGroupMainWindow::fillUndo(){
    undo=new groupUndo;
    undo->id=ui->groupID->text();
    undo->name=ui->name->text();
}
void UserGroupMainWindow::undoFunc(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query(db);

    QString insertQuery = "INSERT INTO Groups (groupID, groupName) VALUES (?, ?)";
    query.prepare(insertQuery);

    query.addBindValue(undo->id);
    query.addBindValue(undo->name);

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
    }
    db.close();
    groupSave();
    addUndoLabel->setDisabled(true);
}


void UserGroupMainWindow::on_actionUpdate_Group_Transaction_triggered()
{
    UpdateGroupTransaction* updateGroupTransactionWIndow=new UpdateGroupTransaction;
    updateGroupTransactionWIndow->setSelectedValue(selectedValue);
    updateGroupTransactionWIndow->show();
}

