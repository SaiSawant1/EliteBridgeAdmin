#include "sysconfig.h"
#include "ui_sysconfig.h"
#include "QMessageBox"
#include "systemlogin.h"

SysConfig::SysConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SysConfig)
{
    ui->setupUi(this);
}

SysConfig::~SysConfig()
{
    delete ui;
}

void SysConfig::on_pushButton_3_clicked()
{
    SystemLogin* login=new SystemLogin;
    login->show();



}

