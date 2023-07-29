#include "shareddata.h"

SharedData* SharedData::instance = nullptr;

SharedData::SharedData(QObject* parent) : QObject(parent), sharedValue("")
{
}

SharedData* SharedData::getInstance()
{
    if (!instance)
    {
        instance = new SharedData();
    }
    return instance;
}

QString SharedData::getValue() const
{
    return sharedValue;
}

void SharedData::setValue(QString value)
{
    if (sharedValue != value)
    {
        sharedValue = value;
        emit valueChanged(sharedValue);
    }
}
