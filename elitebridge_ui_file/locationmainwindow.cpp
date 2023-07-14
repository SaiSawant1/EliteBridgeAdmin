#include "locationmainwindow.h"
#include "ui_locationmainwindow.h"

LocationMainWindow::LocationMainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LocationMainWindow)
{
    ui->setupUi(this);
}

LocationMainWindow::~LocationMainWindow()
{
    delete ui;
}
