#ifndef NEWJOBFORM_H
#define NEWJOBFORM_H

#include <QDialog>

namespace Ui {
class NewJobForm;
}

class NewJobForm : public QDialog
{
    Q_OBJECT

public:
    explicit NewJobForm(QWidget *parent = nullptr);
    ~NewJobForm();

private:
    Ui::NewJobForm *ui;
};

#endif // NEWJOBFORM_H
