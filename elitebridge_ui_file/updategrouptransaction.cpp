#include "updategrouptransaction.h"
#include "ui_updategrouptransaction.h"
#include "shareddata.h"

UpdateGroupTransaction::UpdateGroupTransaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateGroupTransaction)
{
    ui->setupUi(this);
}

UpdateGroupTransaction::~UpdateGroupTransaction()
{
    delete ui;
}
void UpdateGroupTransaction::setSelectedValue(QString value){
    selectedValue=value;
    ui->lineEdit->setText(selectedValue);
    setCheckMarks();
}

void UpdateGroupTransaction::setCheckMarks(){
    if(ui->lineEdit->text()==""){
        QMessageBox::warning(this, "Field Empty", "Please enter a value in the GroupID.");
        return ;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
        return ;
    }
    QSqlQuery query;
    QString selectQuery = "SELECT * FROM group_transaction WHERE GroupID = ?";
    query.prepare(selectQuery);
    query.addBindValue(selectedValue); // Provide the userID for the query
    query.exec();

    if (query.next()) {
        ui->change_password->setChecked(query.value("ChangePassword").toString() == "true");
        ui->cycle_count->setChecked(query.value("CycleCount").toString() == "true");
        ui->free_issue_withdraw->setChecked(query.value("FreeIssueWithdraw").toString() == "true");
        ui->initiate_stock_transfer->setChecked(query.value("InitiateStockTransfer").toString() == "true");
        ui->scrap->setChecked(query.value("Scrap").toString() == "true");
        ui->load_rework->setChecked(query.value("LoadRework").toString() == "true");
        ui->move_stock->setChecked(query.value("MoveStock").toString() == "true");
        ui->return_rework_to_general->setChecked(query.value("ReturnfromReworktoGeneral").toString() == "true");
        ui->inventory_adjusment->setChecked(query.value("InventoryAdjustment").toString() == "true");
        ui->restock_used->setChecked(query.value("RestockUsed").toString() == "true");
        ui->change_privileges->setChecked(query.value("ChangePrivileges").toString() == "true");
        ui->restock_new->setChecked(query.value("RestockNew").toString() == "true");
        ui->return_rework_new->setChecked(query.value("ReturnfromReworktoNew").toString() == "true");
        ui->retrun_rework_used->setChecked(query.value("ReturnfromReworktoUsed").toString() == "true");
        ui->capture_finger_print->setChecked(query.value("CaptureFingerprints").toString() == "true");
        ui->return_rework_scrap->setChecked(query.value("ReturnfromReworktoScrap").toString() == "true");
        ui->receive_stock_transfer->setChecked(query.value("ReceiveStockTransfer").toString() == "true");
        ui->reserve_item->setChecked(query.value("ReserveItem").toString() == "true");
        ui->withdraw_reserved_item->setChecked(query.value("WithdrawReservedItem").toString() == "true");
        ui->withdraw_kit->setChecked(query.value("WithdrawKit").toString() == "true");
        ui->receiveAndRestock->setChecked(query.value("ReceiveandRestock").toString() == "true");
        ui->withdraw_used->setChecked(query.value("WithdrawUsed").toString() == "true");
        ui->restock_general->setChecked(query.value("RestockGeneral").toString() == "true");
        ui->withdraw_general->setChecked(query.value("WithdrawGeneral").toString() == "true");
        ui->withdraw_new->setChecked(query.value("WithdrawNew").toString() == "true");
        ui->priority_withdraw->setChecked(query.value("PriorityWithdraw").toString() == "true");
        ui->withdraw_inspection->setChecked(query.value("WithdrawforInspection").toString() == "true");
        ui->store_external_request->setChecked(query.value("StoreExternalRequest").toString() == "true");
        ui->supervisior_undo->setChecked(query.value("SupervisorUndo").toString() == "true");
        ui->return_general->setChecked(query.value("ReturntoGeneral").toString() == "true");
        ui->return_key->setChecked(query.value("ReturnKey").toString() == "true");
        ui->withdraw_external_request->setChecked(query.value("WithdrawExternalRequest").toString() == "true");
        ui->return_used->setChecked(query.value("ReturntoUsed").toString() == "true");
        ui->RFID_insta_track->setChecked(query.value("RFIDInstaTrack").toString() == "true");
        ui->withdraw_scrap_drawer->setChecked(query.value("WithdrawScrapfromDrawer").toString() == "true");
        ui->return_new->setChecked(query.value("ReturntoNew").toString() == "true");
        ui->return_scrap->setChecked(query.value("ReturntoScrap").toString() == "true");
        ui->RFID_STATIC_CABINET_SCAN->setChecked(query.value("RFIDStaticCabinetScan").toString() == "true");
        ui->return_serialized_item->setChecked(query.value("ReturnSerializedItem").toString() == "true");
        ui->user_undo->setChecked(query.value("UserUndo").toString() == "true");
        ui->return_rework->setChecked(query.value("ReturntoRework").toString() == "true");
        ui->weigh_item->setChecked(query.value("WeighItem").toString() == "true");
        ui->withdraw_scrap_from_bin->setChecked(query.value("WithdrawScrapfromBin").toString() == "true");
        ui->withdraw_rework_drawer->setChecked(query.value("WithdrawReworkFromDrawer").toString() == "true");
        ui->withdraw_rework_from_bin->setChecked(query.value("WithdrawReworkfromBin").toString() == "true");
    }
    db.close();
}

void UpdateGroupTransaction::on_pushButton_clicked()
{
    if(ui->lineEdit->text()==""){
        QMessageBox::warning(this, "Field Empty", "Please enter a value in the GroupID.");
        return ;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path=SharedData::getInstance()->getValue();
    db.setDatabaseName(path);

    if (!db.open()) {
        qInfo()<<"db connection failed";
        return ;
    }


    QSqlQuery query;

    QString updateQuery = "UPDATE group_transaction SET "
                          "ChangePassword = ?, CycleCount = ?, FreeIssueWithdraw = ?, "
                          "InitiateStockTransfer = ?, Scrap = ?, LoadRework = ?, MoveStock = ?, "
                          "ReturnfromReworktoGeneral = ?, InventoryAdjustment = ?, RestockUsed = ?, "
                          "ChangePrivileges = ?, RestockNew = ?, ReturnfromReworktoNew = ?, "
                          "ReturnfromReworktoUsed = ?, CaptureFingerprints = ?, ReturnfromReworktoScrap = ?, "
                          "ReceiveStockTransfer = ?, ReserveItem = ?, WithdrawReservedItem = ?, "
                          "WithdrawKit = ?, ReceiveandRestock = ?, WithdrawUsed = ?, "
                          "RestockGeneral = ?, WithdrawGeneral = ?, WithdrawNew = ?, "
                          "PriorityWithdraw = ?, WithdrawforInspection = ?, StoreExternalRequest = ?, "
                          "SupervisorUndo = ?, ReturntoGeneral = ?, ReturnKey = ?, "
                          "WithdrawExternalRequest = ?, ReturntoUsed = ?, RFIDInstaTrack = ?, "
                          "WithdrawScrapfromDrawer = ?, ReturntoNew = ?, ReturntoScrap = ?, "
                          "RFIDStaticCabinetScan = ?, ReturnSerializedItem = ?, UserUndo = ?, "
                          "ReturntoRework = ?, WeighItem = ?, WithdrawScrapfromBin = ?, "
                          "WithdrawReworkFromDrawer = ?, WithdrawReworkfromBin = ? "
                          "WHERE GroupID = ?";




    QString ChangePassword;
    QString CycleCount;
    QString FreeIssueWithdraw;
    QString InitiateStockTransfer;
    QString Scrap;
    QString LoadRework;
    QString MoveStock;
    QString ReturnfromReworktoGeneral;
    QString InventoryAdjustment;
    QString RestockUsed;
    QString ChangePrivileges;
    QString RestockNew;
    QString ReturnfromReworktoNew;
    QString ReturnfromReworktoUsed;
    QString CaptureFingerprints;
    QString ReturnfromReworktoScrap;
    QString ReceiveStockTransfer;
    QString ReserveItem;
    QString WithdrawReservedItem;
    QString WithdrawKit;
    QString ReceiveandRestock;
    QString WithdrawUsed;
    QString RestockGeneral;
    QString WithdrawGeneral;
    QString WithdrawNew;
    QString PriorityWithdraw;
    QString WithdrawforInspection;
    QString StoreExternalRequest;
    QString SupervisorUndo;
    QString ReturntoGeneral;
    QString ReturnKey;
    QString WithdrawExternalRequest;
    QString ReturntoUsed;
    QString RFIDInstaTrack;
    QString WithdrawScrapfromDrawer;
    QString ReturntoNew;
    QString ReturntoScrap;
    QString RFIDStaticCabinetScan;
    QString ReturnSerializedItem;
    QString UserUndo;
    QString ReturntoRework;
    QString WeighItem;
    QString WithdrawScrapfromBin;
    QString WithdrawReworkFromDrawer;
    QString WithdrawReworkfromBin;

    if(ui->change_password->isChecked()){
        ChangePassword="true";
    }
    else{
        ChangePassword="false";
    }
    if(ui->cycle_count->isChecked()){
        CycleCount="true";
    }
    else{
        CycleCount="false";
    }
    if(ui->free_issue_withdraw->isChecked()){
        FreeIssueWithdraw="true";
    }
    else{
        FreeIssueWithdraw="false";
    }
    if(ui->initiate_stock_transfer->isChecked()){
        InitiateStockTransfer="true";
    }
    else{
        InitiateStockTransfer="false";
    }
    if(ui->scrap->isChecked()){
        Scrap="true";
    }
    else{
        Scrap="false";
    }
    if(ui->load_rework->isChecked()){
        LoadRework="true";
    }
    else{
        LoadRework="false";
    }
    if(ui->move_stock->isChecked()){
        MoveStock="true";
    }
    else{
        MoveStock="false";
    }
    if(ui->return_rework_to_general->isChecked()){
        ReturnfromReworktoGeneral="true";
    }else{
        ReturnfromReworktoGeneral="false";
    }
    if(ui->inventory_adjusment->isChecked()){
        InventoryAdjustment="true";
    }else{
        InventoryAdjustment="false";
    }
    if(ui->restock_used->isChecked()){
        RestockUsed="true";
    }else{
        RestockUsed="false";
    }
    if(ui->change_privileges->isChecked()){
        ChangePrivileges="true";
    }else{
        ChangePrivileges="false";
    }
    if(ui->restock_new->isChecked()){
        RestockNew="true";
    }else{
        RestockNew="false";
    }

    if(ui->return_rework_new->isChecked()){
        ReturnfromReworktoNew="true";
    }else{
        ReturnfromReworktoNew="false";
    }
    if(ui->retrun_rework_used->isChecked()){
        ReturnfromReworktoUsed="true";
    }else{
        ReturnfromReworktoUsed="false";
    }
    if(ui->capture_finger_print->isChecked()){
        CaptureFingerprints="true";
    }else{
        CaptureFingerprints="false";
    }
    if(ui->return_rework_scrap->isChecked()){
        ReturnfromReworktoScrap="true";
    }else{
        ReturnfromReworktoScrap="false";
    }
    if(ui->receive_stock_transfer->isChecked()){
        ReceiveStockTransfer="true";
    }else{
        ReceiveStockTransfer="false";
    }
    if(ui->reserve_item->isChecked()){
        ReserveItem="true";
    }else{
        ReserveItem="false";
    }
    if(ui->withdraw_reserved_item->isChecked()){
        WithdrawReservedItem="true";
    }else{
        WithdrawReservedItem="false";
    }
    if(ui->withdraw_kit->isChecked()){
        WithdrawKit="true";
    }else{
        WithdrawKit="false";
    }
    if(ui->receiveAndRestock->isChecked()){
        ReceiveandRestock="true";
    }else{
        ReceiveandRestock="false";
    }
    if(ui->withdraw_used->isChecked()){
        WithdrawUsed="true";
    }else{
        WithdrawUsed="false";
    }
    if(ui->restock_general->isChecked()){
        RestockGeneral="true";
    }else{
        RestockGeneral="false";
    }
    if(ui->withdraw_general->isChecked()){
        WithdrawGeneral="true";
    }else{
        WithdrawGeneral="false";
    }
    if(ui->withdraw_new->isChecked()){
        WithdrawNew="true";
    }else{
        WithdrawNew="false";
    }
    if(ui->priority_withdraw->isChecked()){
        PriorityWithdraw="true";
    }else{
        PriorityWithdraw="false";
    }
    if(ui->withdraw_inspection->isChecked()){
        WithdrawforInspection="true";
    }else{
        WithdrawforInspection="false";
    }
    if(ui->store_external_request->isChecked()){
        StoreExternalRequest="true";
    }else{
        StoreExternalRequest="false";
    }
    if(ui->supervisior_undo->isChecked()){
        SupervisorUndo="true";
    }else{
        SupervisorUndo="false";
    }
    if(ui->return_general->isChecked()){
        ReturntoGeneral="true";
    }else{
        ReturntoGeneral="false";
    }
    if(ui->return_key->isChecked()){
        ReturnKey="true";
    }else{
        ReturnKey="false";
    }
    if(ui->withdraw_external_request->isChecked()){
        WithdrawExternalRequest="true";
    }else{
        WithdrawExternalRequest="false";
    }
    if(ui->return_used->isChecked()){
        ReturntoUsed="true";
    }else{
        ReturntoUsed="false";
    }
    if(ui->RFID_insta_track->isChecked()){
        RFIDInstaTrack="true";
    }else{
        RFIDInstaTrack="false";
    }
    if(ui->withdraw_scrap_drawer->isChecked()){
        WithdrawScrapfromDrawer="true";
    }else{
        WithdrawScrapfromDrawer="false";
    }
    if(ui->return_new->isChecked()){
        ReturntoNew="true";
    }else{
        ReturntoNew="false";
    }
    if(ui->return_scrap->isChecked()){
        ReturntoScrap="true";
    }else{
        ReturntoScrap="false";
    }
    if(ui->RFID_STATIC_CABINET_SCAN->isChecked()){
        RFIDStaticCabinetScan="true";
    }else{
        RFIDStaticCabinetScan="false";
    }
    if(ui->return_serialized_item->isChecked()){
        ReturnSerializedItem="true";
    }else{
        ReturnSerializedItem="false";
    }
    if(ui->user_undo->isChecked()){
        UserUndo="true";
    }else{
        UserUndo="false";
    }
    if(ui->return_rework->isChecked()){
        ReturntoRework="true";
    }else{
        ReturntoRework="false";
    }
    if(ui->weigh_item->isChecked()){
        WeighItem="true";
    }else{
        WeighItem="false";
    }
    if(ui->withdraw_scrap_from_bin->isChecked()){
        WithdrawScrapfromBin="true";
    }else{
        WithdrawScrapfromBin="false";
    }
    if(ui->withdraw_rework_drawer->isChecked()){
        WithdrawReworkFromDrawer="true";
    }else{
        WithdrawReworkFromDrawer="false";
    }
    if(ui->withdraw_rework_from_bin->isChecked()){
        WithdrawReworkfromBin="true";
    }else{
        WithdrawReworkfromBin="false";
    }

    query.prepare(updateQuery);

    query.addBindValue(ChangePassword);
    query.addBindValue(CycleCount);
    query.addBindValue(FreeIssueWithdraw);
    query.addBindValue(InitiateStockTransfer);
    query.addBindValue(Scrap);
    query.addBindValue(LoadRework);
    query.addBindValue(MoveStock);
    query.addBindValue(ReturnfromReworktoGeneral);
    query.addBindValue(InventoryAdjustment);
    query.addBindValue(RestockUsed);
    query.addBindValue(ChangePrivileges);
    query.addBindValue(RestockNew);
    query.addBindValue(ReturnfromReworktoNew);
    query.addBindValue(ReturnfromReworktoUsed);
    query.addBindValue(CaptureFingerprints);
    query.addBindValue(ReturnfromReworktoScrap);
    query.addBindValue(ReceiveStockTransfer);
    query.addBindValue(ReserveItem);
    query.addBindValue(WithdrawReservedItem);
    query.addBindValue(WithdrawKit);
    query.addBindValue(ReceiveandRestock);
    query.addBindValue(WithdrawUsed);
    query.addBindValue(RestockGeneral);
    query.addBindValue(WithdrawGeneral);
    query.addBindValue(WithdrawNew);
    query.addBindValue(PriorityWithdraw);
    query.addBindValue(WithdrawforInspection);
    query.addBindValue(StoreExternalRequest);
    query.addBindValue(SupervisorUndo);
    query.addBindValue(ReturntoGeneral);
    query.addBindValue(ReturnKey);
    query.addBindValue(WithdrawExternalRequest);
    query.addBindValue(ReturntoUsed);
    query.addBindValue(RFIDInstaTrack);
    query.addBindValue(WithdrawScrapfromDrawer);
    query.addBindValue(ReturntoNew);
    query.addBindValue(ReturntoScrap);
    query.addBindValue(RFIDStaticCabinetScan);
    query.addBindValue(ReturnSerializedItem);
    query.addBindValue(UserUndo);
    query.addBindValue(ReturntoRework);
    query.addBindValue(WeighItem);
    query.addBindValue(WithdrawScrapfromBin);
    query.addBindValue(WithdrawReworkFromDrawer);
    query.addBindValue(WithdrawReworkfromBin);
    query.addBindValue(ui->lineEdit->text());

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
        reject();
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
        qDebug()<<query.lastError().text();
        reject();
    }
    db.close();
}
