#include "jobswindow.h"
#include "ui_jobswindow.h"

JobsWindow::JobsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JobsWindow)
{
    ui->setupUi(this);
}

JobsWindow::~JobsWindow()
{
    delete ui;
}
