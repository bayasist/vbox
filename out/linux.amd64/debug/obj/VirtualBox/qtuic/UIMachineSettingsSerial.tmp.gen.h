/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2008-2012 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIMachineSettingsSerial.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSSERIAL_H
#define UIMACHINESETTINGSSERIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsSerial
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mGbSerial;
    QSpacerItem *spacerItem;
    QWidget *mSerialChild;
    QGridLayout *gridLayout1;
    QLabel *mLbNumber;
    QComboBox *mCbNumber;
    QLabel *mLbIRQ;
    QLineEdit *mLeIRQ;
    QLabel *mLbIOPort;
    QLineEdit *mLeIOPort;
    QSpacerItem *spacerItem1;
    QLabel *mLbMode;
    QComboBox *mCbMode;
    QSpacerItem *spacerItem2;
    QCheckBox *mCbPipe;
    QLabel *mLbPath;
    QLineEdit *mLePath;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *UIMachineSettingsSerial)
    {
        if (UIMachineSettingsSerial->objectName().isEmpty())
            UIMachineSettingsSerial->setObjectName(QString::fromUtf8("UIMachineSettingsSerial"));
        UIMachineSettingsSerial->resize(357, 179);
        gridLayout = new QGridLayout(UIMachineSettingsSerial);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mGbSerial = new QCheckBox(UIMachineSettingsSerial);
        mGbSerial->setObjectName(QString::fromUtf8("mGbSerial"));
        mGbSerial->setChecked(true);

        gridLayout->addWidget(mGbSerial, 0, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        mSerialChild = new QWidget(UIMachineSettingsSerial);
        mSerialChild->setObjectName(QString::fromUtf8("mSerialChild"));
        gridLayout1 = new QGridLayout(mSerialChild);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        mLbNumber = new QLabel(mSerialChild);
        mLbNumber->setObjectName(QString::fromUtf8("mLbNumber"));
        mLbNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(mLbNumber, 0, 0, 1, 1);

        mCbNumber = new QComboBox(mSerialChild);
        mCbNumber->setObjectName(QString::fromUtf8("mCbNumber"));

        gridLayout1->addWidget(mCbNumber, 0, 1, 1, 1);

        mLbIRQ = new QLabel(mSerialChild);
        mLbIRQ->setObjectName(QString::fromUtf8("mLbIRQ"));

        gridLayout1->addWidget(mLbIRQ, 0, 2, 1, 1);

        mLeIRQ = new QLineEdit(mSerialChild);
        mLeIRQ->setObjectName(QString::fromUtf8("mLeIRQ"));

        gridLayout1->addWidget(mLeIRQ, 0, 3, 1, 1);

        mLbIOPort = new QLabel(mSerialChild);
        mLbIOPort->setObjectName(QString::fromUtf8("mLbIOPort"));

        gridLayout1->addWidget(mLbIOPort, 0, 4, 1, 1);

        mLeIOPort = new QLineEdit(mSerialChild);
        mLeIOPort->setObjectName(QString::fromUtf8("mLeIOPort"));

        gridLayout1->addWidget(mLeIOPort, 0, 5, 1, 1);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 6, 1, 1);

        mLbMode = new QLabel(mSerialChild);
        mLbMode->setObjectName(QString::fromUtf8("mLbMode"));
        mLbMode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(mLbMode, 1, 0, 1, 1);

        mCbMode = new QComboBox(mSerialChild);
        mCbMode->setObjectName(QString::fromUtf8("mCbMode"));

        gridLayout1->addWidget(mCbMode, 1, 1, 1, 1);

        spacerItem2 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 1, 2, 1, 4);

        mCbPipe = new QCheckBox(mSerialChild);
        mCbPipe->setObjectName(QString::fromUtf8("mCbPipe"));

        gridLayout1->addWidget(mCbPipe, 2, 1, 1, 2);

        mLbPath = new QLabel(mSerialChild);
        mLbPath->setObjectName(QString::fromUtf8("mLbPath"));
        mLbPath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(mLbPath, 3, 0, 1, 1);

        mLePath = new QLineEdit(mSerialChild);
        mLePath->setObjectName(QString::fromUtf8("mLePath"));

        gridLayout1->addWidget(mLePath, 3, 1, 1, 6);


        gridLayout->addWidget(mSerialChild, 1, 1, 1, 1);

        spacerItem3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem3, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        mLbNumber->setBuddy(mCbNumber);
        mLbIRQ->setBuddy(mLeIRQ);
        mLbIOPort->setBuddy(mLeIOPort);
        mLbMode->setBuddy(mCbMode);
        mLbPath->setBuddy(mLePath);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsSerial);
        QObject::connect(mGbSerial, SIGNAL(toggled(bool)), mSerialChild, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(UIMachineSettingsSerial);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsSerial)
    {
#ifndef QT_NO_WHATSTHIS
        mGbSerial->setWhatsThis(QApplication::translate("UIMachineSettingsSerial", "When checked, enables the given serial port of the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mGbSerial->setText(QApplication::translate("UIMachineSettingsSerial", "&Enable Serial Port", 0, QApplication::UnicodeUTF8));
        mLbNumber->setText(QApplication::translate("UIMachineSettingsSerial", "Port &Number:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbNumber->setWhatsThis(QApplication::translate("UIMachineSettingsSerial", "Selects the serial port number. You can choose one of the standard serial ports or select <b>User-defined</b> and specify port parameters manually.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbIRQ->setText(QApplication::translate("UIMachineSettingsSerial", "&IRQ:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mLeIRQ->setWhatsThis(QApplication::translate("UIMachineSettingsSerial", "Holds the IRQ number of this serial port. This should be a whole number between <tt>0</tt> and <tt>255</tt>. Values greater than <tt>15</tt> may only be used if the <b>I/O APIC</b> setting is enabled for this virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbIOPort->setText(QApplication::translate("UIMachineSettingsSerial", "I/O Po&rt:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mLeIOPort->setWhatsThis(QApplication::translate("UIMachineSettingsSerial", "Holds the base I/O port address of this serial port. Valid values are integer numbers in range from <tt>0</tt> to <tt>0xFFFF</tt>.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbMode->setText(QApplication::translate("UIMachineSettingsSerial", "Port &Mode:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbMode->setWhatsThis(QApplication::translate("UIMachineSettingsSerial", "Controls the working mode of this serial port. If you select <b>Disconnected</b>, the guest OS will detect the serial port but will not be able to operate it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        mCbPipe->setWhatsThis(QApplication::translate("UIMachineSettingsSerial", "If checked, the pipe specified in the <b>Port Path</b> field will be created by the virtual machine when it starts. Otherwise, the virtual machine will assume that the pipe exists and try to use it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbPipe->setText(QApplication::translate("UIMachineSettingsSerial", "&Create Pipe", 0, QApplication::UnicodeUTF8));
        mLbPath->setText(QApplication::translate("UIMachineSettingsSerial", "Port/File &Path:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mLePath->setWhatsThis(QApplication::translate("UIMachineSettingsSerial", "Holds the path to the serial port's pipe on the host when the port is working in <b>Host Pipe</b> mode, or the host serial device name when the port is working in <b>Host Device</b> mode.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIMachineSettingsSerial);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsSerial: public Ui_UIMachineSettingsSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSSERIAL_H
