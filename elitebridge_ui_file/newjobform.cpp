#include "newjobform.h"
#include "ui_newjobform.h"

NewJobForm::NewJobForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewJobForm)
{
    ui->setupUi(this);
}

NewJobForm::~NewJobForm()
{
    delete ui;
}
