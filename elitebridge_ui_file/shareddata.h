#ifndef SHAREDDATA_H
#define SHAREDDATA_H

#include <QObject>

class SharedData:public QObject
{
     Q_OBJECT
public:

    static SharedData* getInstance();
    QString getValue() const;
    void setValue(QString value);
signals:
    void valueChanged(QString newValue);
private:
    SharedData(QObject* parent = nullptr);
    static SharedData* instance;
    QString sharedValue;
};

#endif // SHAREDDATA_H
