#include "newuserform.h"
#include "ui_newuserform.h"

newUserForm::newUserForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newUserForm)
{
    ui->setupUi(this);
}

newUserForm::~newUserForm()
{
    delete ui;
}
