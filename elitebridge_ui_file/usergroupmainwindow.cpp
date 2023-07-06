#include "usergroupmainwindow.h"
#include "ui_usergroupmainwindow.h"

UserGroupMainWindow::UserGroupMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserGroupMainWindow)
{
    ui->setupUi(this);

    addGroupLabel = new ClickableLabel(this);
    addGroupLabel->setText("Add Items");
    addGroupLabel->setPixmap(QPixmap("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/Screenshot 2023-06-12 120944.png"));

    QObject::connect(addGroupLabel, &ClickableLabel::clicked,this,[&]() {
        addNewUserGroupForm();
    });

     ui->horizontalLayout->insertWidget(0,addGroupLabel);

}

UserGroupMainWindow::~UserGroupMainWindow()
{
    delete ui;
}
void UserGroupMainWindow::addNewUserGroupForm(){

    NewGroupForm* form=new NewGroupForm;
    form->show();

}
