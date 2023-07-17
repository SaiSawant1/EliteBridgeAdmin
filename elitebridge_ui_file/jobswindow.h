#ifndef JOBSWINDOW_H
#define JOBSWINDOW_H

#include <QDialog>

namespace Ui {
class JobsWindow;
}

class JobsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit JobsWindow(QWidget *parent = nullptr);
    ~JobsWindow();

private:
    Ui::JobsWindow *ui;
};

#endif // JOBSWINDOW_H
