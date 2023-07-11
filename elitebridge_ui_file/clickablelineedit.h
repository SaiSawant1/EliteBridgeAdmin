#ifndef CLICKABLELINEEDIT_H
#define CLICKABLELINEEDIT_H

#include <QLineEdit>
#include <QMouseEvent>
#include <QFileDialog>
class ClickableLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    ClickableLineEdit(QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent* event) override;
};


ClickableLineEdit::ClickableLineEdit(QWidget* parent) : QLineEdit(parent) {}

void ClickableLineEdit::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        QString filePath = QFileDialog::getOpenFileName(this, "Select File");
        if (!filePath.isEmpty())
        {
            setText(filePath);
        }
    }

    QLineEdit::mousePressEvent(event);
}

#endif // CLICKABLELINEEDIT_H
