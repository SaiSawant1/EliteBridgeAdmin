#ifndef NEWUSERFORM_H
#define NEWUSERFORM_H

#include <QDialog>

namespace Ui {
class newUserForm;
}

class newUserForm : public QDialog
{
    Q_OBJECT

public:
    explicit newUserForm(QWidget *parent = nullptr);
    ~newUserForm();

private:
    Ui::newUserForm *ui;
};

#endif // NEWUSERFORM_H
