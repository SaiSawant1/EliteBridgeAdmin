#include "userwindow.h"
#include "ui_userwindow.h"
#include "newuserform.h"
#include <QMessageBox>
#include <QObject>
userWindow::userWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userWindow)
{
    ui->setupUi(this);

    ui->setupUi(this);

    addUserLabel = new ClickableLabel(this);
    addUserLabel->setText("Add User");
    addUserLabel->setPixmap(QPixmap("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/Screenshot 2023-06-12 120944.png"));

    QObject::connect(addUserLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });

    ui->horizontalLayout->insertWidget(0,addUserLabel);

}

void userWindow::addUserForm(){
    newUserForm* newUserFormPage=new newUserForm;
    newUserFormPage->show();
}
userWindow::~userWindow()
{
    delete ui;
}
