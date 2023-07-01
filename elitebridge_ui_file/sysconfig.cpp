#include "sysconfig.h"
#include "ui_sysconfig.h"
#include "mainwindow.h"
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
    MainWindow* main=new MainWindow;
    main->show();
}

