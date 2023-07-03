#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H


#include <QLabel>
#include <QMouseEvent>

class ClickableLabel : public QLabel
{
    Q_OBJECT

public:
    explicit ClickableLabel(QWidget* parent = nullptr) : QLabel(parent) {}

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent* event) override
    {
        if (event->button() == Qt::LeftButton)
        {
            emit clicked();
        }
        QLabel::mousePressEvent(event);
    }
};


#endif // CLICKABLELABEL_H
