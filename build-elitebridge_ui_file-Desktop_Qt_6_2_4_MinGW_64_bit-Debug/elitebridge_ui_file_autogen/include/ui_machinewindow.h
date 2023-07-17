/********************************************************************************
** Form generated from reading UI file 'machinewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINEWINDOW_H
#define UI_MACHINEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MachineWindow
{
public:

    void setupUi(QDialog *MachineWindow)
    {
        if (MachineWindow->objectName().isEmpty())
            MachineWindow->setObjectName(QString::fromUtf8("MachineWindow"));
        MachineWindow->resize(480, 640);

        retranslateUi(MachineWindow);

        QMetaObject::connectSlotsByName(MachineWindow);
    } // setupUi

    void retranslateUi(QDialog *MachineWindow)
    {
        MachineWindow->setWindowTitle(QCoreApplication::translate("MachineWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MachineWindow: public Ui_MachineWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINEWINDOW_H
