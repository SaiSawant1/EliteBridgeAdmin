#ifndef TERMINOLOGY_H
#define TERMINOLOGY_H

#include <QMainWindow>

namespace Ui {
class Terminology;
}

class Terminology : public QMainWindow
{
    Q_OBJECT

public:
    explicit Terminology(QWidget *parent = nullptr);
    ~Terminology();

private:
    Ui::Terminology *ui;
private slots:
     void on_Apply_clicked();
};

#endif // TERMINOLOGY_H
