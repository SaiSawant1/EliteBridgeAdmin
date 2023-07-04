#include "jobmainwindow.h"
#include "ui_jobmainwindow.h"

JobMainWindow::JobMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JobMainWindow)
{
    ui->setupUi(this);
    addJobLabel = new ClickableLabel(this);
    addJobLabel->setText("Add Job");
    addJobLabel->setPixmap(QPixmap("../build-elitebridge_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/Screenshot 2023-06-12 120944.png"));
    ui->horizontalLayout->insertWidget(0,addJobLabel);

    QObject::connect(addJobLabel, &ClickableLabel::clicked,this,[&]() {
        addJobForm();
    });



}

JobMainWindow::~JobMainWindow()
{
    delete ui;
}
void JobMainWindow::addJobForm(){
    NewJobForm* newJobFormPage=new NewJobForm;
    newJobFormPage->show();
}
