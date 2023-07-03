#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QObject>
#include <QMainWindow>
#include "ClickableLabel.h"
namespace Ui {
class userWindow;
}

class userWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit userWindow(QWidget *parent = nullptr);
    ~userWindow();

private:
    Ui::userWindow *ui;
    ClickableLabel* addUserLabel;
};

#endif // USERWINDOW_H
