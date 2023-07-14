#ifndef LOCATIONMAINWINDOW_H
#define LOCATIONMAINWINDOW_H

#include <QDialog>

namespace Ui {
class LocationMainWindow;
}

class LocationMainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LocationMainWindow(QWidget *parent = nullptr);
    ~LocationMainWindow();

private:
    Ui::LocationMainWindow *ui;
};

#endif // LOCATIONMAINWINDOW_H
