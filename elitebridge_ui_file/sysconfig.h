#ifndef SYSCONFIG_H
#define SYSCONFIG_H

#include <QWidget>

namespace Ui {
class SysConfig;
}

class SysConfig : public QWidget
{
    Q_OBJECT

public:
    explicit SysConfig(QWidget *parent = nullptr);
    ~SysConfig();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::SysConfig *ui;
};

#endif // SYSCONFIG_H
