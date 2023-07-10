#include "createusertransaction.h"
#include "ui_createusertransaction.h"

CreateUserTransaction::CreateUserTransaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateUserTransaction),
    m_userWindowInstance(nullptr)
{
    ui->setupUi(this);


}

CreateUserTransaction::~CreateUserTransaction()
{
    delete ui;
}

void CreateUserTransaction::on_pushButton_clicked()
{

    if(ui->lineEdit->text()==""){
        QMessageBox::warning(this, "Field Empty", "Please enter a value in the userID.");
        return ;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/ElieteBridge-git/build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/database/eliteBridgeDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
        return ;
    }


    QSqlQuery query;

    QString insertQuery = "INSERT INTO Transaction_Rights (userID, ChangePassword, CycleCount, FreeIssueWithdraw,InitiateStockTransfer,Scrap,LoadRework,MoveStock,ReturnfromReworktoGeneral,InventoryAdjustment,RestockUsed,ChangePrivileges,RestockNew,ReturnfromReworktoNew,ReturnfromReworktoUsed,CaptureFingerprints,ReturnfromReworktoScrap,ReceiveStockTransfer,ReserveItem,WithdrawReservedItem,WithdrawKit,ReceiveandRestock,WithdrawUsed,RestockGeneral,WithdrawGeneral,WithdrawNew,PriorityWithdraw,WithdrawforInspection,StoreExternalRequest,SupervisorUndo,ReturntoGeneral,ReturnKey,WithdrawExternalRequest,ReturntoUsed,RFIDInstaTrack,WithdrawScrapfromDrawer,ReturntoNew,ReturntoScrap,RFIDStaticCabinetScan,ReturnSerializedItem,UserUndo,ReturntoRework,WeighItem,WithdrawScrapfromBin,WithdrawReworkFromDrawer,WithdrawReworkfromBin) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)";
    query.prepare(insertQuery);


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








    query.addBindValue(ui->lineEdit->text());
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
void CreateUserTransaction::onCellSelected(const QString& selectedValue)
{
    // Handle the selected value as needed
    value=selectedValue;
    ui->lineEdit->setText(value);
}
void CreateUserTransaction::setUserWindowInstance(userWindow* userWindowInstance)
{
    m_userWindowInstance = userWindowInstance;
    connect(m_userWindowInstance, &userWindow::cellSelected, this, &CreateUserTransaction::onCellSelected);
}




