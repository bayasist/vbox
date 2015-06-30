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
** Form generated from reading UI file 'UIMachineSettingsParallel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSPARALLEL_H
#define UIMACHINESETTINGSPARALLEL_H

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

class Ui_UIMachineSettingsParallel
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mGbParallel;
    QSpacerItem *spacerItem;
    QWidget *mParallelChild;
    QGridLayout *gridLayout1;
    QLabel *mLbNumber;
    QComboBox *mCbNumber;
    QLabel *mLbIRQ;
    QLineEdit *mLeIRQ;
    QLabel *mLbIOPort;
    QLineEdit *mLeIOPort;
    QLabel *mLbPath;
    QLineEdit *mLePath;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *UIMachineSettingsParallel)
    {
        if (UIMachineSettingsParallel->objectName().isEmpty())
            UIMachineSettingsParallel->setObjectName(QString::fromUtf8("UIMachineSettingsParallel"));
        UIMachineSettingsParallel->resize(348, 122);
        gridLayout = new QGridLayout(UIMachineSettingsParallel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mGbParallel = new QCheckBox(UIMachineSettingsParallel);
        mGbParallel->setObjectName(QString::fromUtf8("mGbParallel"));
        mGbParallel->setChecked(true);

        gridLayout->addWidget(mGbParallel, 0, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        mParallelChild = new QWidget(UIMachineSettingsParallel);
        mParallelChild->setObjectName(QString::fromUtf8("mParallelChild"));
        gridLayout1 = new QGridLayout(mParallelChild);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        mLbNumber = new QLabel(mParallelChild);
        mLbNumber->setObjectName(QString::fromUtf8("mLbNumber"));
        mLbNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(mLbNumber, 0, 0, 1, 1);

        mCbNumber = new QComboBox(mParallelChild);
        mCbNumber->setObjectName(QString::fromUtf8("mCbNumber"));

        gridLayout1->addWidget(mCbNumber, 0, 1, 1, 1);

        mLbIRQ = new QLabel(mParallelChild);
        mLbIRQ->setObjectName(QString::fromUtf8("mLbIRQ"));

        gridLayout1->addWidget(mLbIRQ, 0, 2, 1, 1);

        mLeIRQ = new QLineEdit(mParallelChild);
        mLeIRQ->setObjectName(QString::fromUtf8("mLeIRQ"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLeIRQ->sizePolicy().hasHeightForWidth());
        mLeIRQ->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(mLeIRQ, 0, 3, 1, 1);

        mLbIOPort = new QLabel(mParallelChild);
        mLbIOPort->setObjectName(QString::fromUtf8("mLbIOPort"));

        gridLayout1->addWidget(mLbIOPort, 0, 4, 1, 1);

        mLeIOPort = new QLineEdit(mParallelChild);
        mLeIOPort->setObjectName(QString::fromUtf8("mLeIOPort"));
        sizePolicy.setHeightForWidth(mLeIOPort->sizePolicy().hasHeightForWidth());
        mLeIOPort->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(mLeIOPort, 0, 5, 1, 1);

        mLbPath = new QLabel(mParallelChild);
        mLbPath->setObjectName(QString::fromUtf8("mLbPath"));
        mLbPath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(mLbPath, 1, 0, 1, 1);

        mLePath = new QLineEdit(mParallelChild);
        mLePath->setObjectName(QString::fromUtf8("mLePath"));

        gridLayout1->addWidget(mLePath, 1, 1, 1, 5);


        gridLayout->addWidget(mParallelChild, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        spacerItem2 = new QSpacerItem(16, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        mLbNumber->setBuddy(mCbNumber);
        mLbIRQ->setBuddy(mLeIRQ);
        mLbIOPort->setBuddy(mLeIOPort);
        mLbPath->setBuddy(mLePath);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsParallel);
        QObject::connect(mGbParallel, SIGNAL(toggled(bool)), mParallelChild, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(UIMachineSettingsParallel);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsParallel)
    {
#ifndef QT_NO_WHATSTHIS
        mGbParallel->setWhatsThis(QApplication::translate("UIMachineSettingsParallel", "When checked, enables the given parallel port of the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mGbParallel->setText(QApplication::translate("UIMachineSettingsParallel", "&Enable Parallel Port", 0, QApplication::UnicodeUTF8));
        mLbNumber->setText(QApplication::translate("UIMachineSettingsParallel", "Port &Number:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbNumber->setWhatsThis(QApplication::translate("UIMachineSettingsParallel", "Holds the parallel port number. You can choose one of the standard parallel ports or select <b>User-defined</b> and specify port parameters manually.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbIRQ->setText(QApplication::translate("UIMachineSettingsParallel", "&IRQ:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mLeIRQ->setWhatsThis(QApplication::translate("UIMachineSettingsParallel", "Holds the IRQ number of this parallel port. This should be a whole number between <tt>0</tt> and <tt>255</tt>. Values greater than <tt>15</tt> may only be used if the <b>I/O APIC</b> setting is enabled for this virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbIOPort->setText(QApplication::translate("UIMachineSettingsParallel", "I/O Po&rt:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mLeIOPort->setWhatsThis(QApplication::translate("UIMachineSettingsParallel", "Holds the base I/O port address of this parallel port. Valid values are integer numbers in range from <tt>0</tt> to <tt>0xFFFF</tt>.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbPath->setText(QApplication::translate("UIMachineSettingsParallel", "Port &Path:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mLePath->setWhatsThis(QApplication::translate("UIMachineSettingsParallel", "Holds the host parallel device name.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIMachineSettingsParallel);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsParallel: public Ui_UIMachineSettingsParallel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSPARALLEL_H
