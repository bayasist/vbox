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
** Form generated from reading UI file 'UIMachineSettingsUSB.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSUSB_H
#define UIMACHINESETTINGSUSB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "QILabelSeparator.h"
#include "UIToolBar.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsUSB
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mGbUSB;
    QSpacerItem *spacerItem;
    QWidget *mUSBChild;
    QGridLayout *gridLayout1;
    QCheckBox *mCbUSB2;
    QILabelSeparator *mGbUSBFilters;
    QWidget *mWtFilterHandler;
    QHBoxLayout *hboxLayout;
    QTreeWidget *mTwFilters;
    UIToolBar *m_pFiltersToolBar;

    void setupUi(QWidget *UIMachineSettingsUSB)
    {
        if (UIMachineSettingsUSB->objectName().isEmpty())
            UIMachineSettingsUSB->setObjectName(QString::fromUtf8("UIMachineSettingsUSB"));
        UIMachineSettingsUSB->resize(468, 328);
        gridLayout = new QGridLayout(UIMachineSettingsUSB);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mGbUSB = new QCheckBox(UIMachineSettingsUSB);
        mGbUSB->setObjectName(QString::fromUtf8("mGbUSB"));
        mGbUSB->setChecked(true);

        gridLayout->addWidget(mGbUSB, 0, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        mUSBChild = new QWidget(UIMachineSettingsUSB);
        mUSBChild->setObjectName(QString::fromUtf8("mUSBChild"));
        gridLayout1 = new QGridLayout(mUSBChild);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        mCbUSB2 = new QCheckBox(mUSBChild);
        mCbUSB2->setObjectName(QString::fromUtf8("mCbUSB2"));

        gridLayout1->addWidget(mCbUSB2, 0, 0, 1, 1);

        mGbUSBFilters = new QILabelSeparator(mUSBChild);
        mGbUSBFilters->setObjectName(QString::fromUtf8("mGbUSBFilters"));

        gridLayout1->addWidget(mGbUSBFilters, 1, 0, 1, 1);

        mWtFilterHandler = new QWidget(mUSBChild);
        mWtFilterHandler->setObjectName(QString::fromUtf8("mWtFilterHandler"));
        hboxLayout = new QHBoxLayout(mWtFilterHandler);
        hboxLayout->setSpacing(3);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        mTwFilters = new QTreeWidget(mWtFilterHandler);
        mTwFilters->setObjectName(QString::fromUtf8("mTwFilters"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTwFilters->sizePolicy().hasHeightForWidth());
        mTwFilters->setSizePolicy(sizePolicy);
        mTwFilters->setContextMenuPolicy(Qt::CustomContextMenu);
        mTwFilters->setRootIsDecorated(false);

        hboxLayout->addWidget(mTwFilters);

        m_pFiltersToolBar = new UIToolBar(mWtFilterHandler);
        m_pFiltersToolBar->setObjectName(QString::fromUtf8("m_pFiltersToolBar"));

        hboxLayout->addWidget(m_pFiltersToolBar);


        gridLayout1->addWidget(mWtFilterHandler, 2, 0, 1, 1);


        gridLayout->addWidget(mUSBChild, 1, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        mGbUSBFilters->setBuddy(mTwFilters);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsUSB);

        QMetaObject::connectSlotsByName(UIMachineSettingsUSB);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsUSB)
    {
#ifndef QT_NO_WHATSTHIS
        mGbUSB->setWhatsThis(QApplication::translate("UIMachineSettingsUSB", "When checked, enables the virtual USB controller of this machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mGbUSB->setText(QApplication::translate("UIMachineSettingsUSB", "Enable &USB Controller", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbUSB2->setWhatsThis(QApplication::translate("UIMachineSettingsUSB", "When checked, enables the virtual USB EHCI controller of this machine. The USB EHCI controller provides USB 2.0 support.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbUSB2->setText(QApplication::translate("UIMachineSettingsUSB", "Enable USB 2.0 (E&HCI) Controller", 0, QApplication::UnicodeUTF8));
        mGbUSBFilters->setText(QApplication::translate("UIMachineSettingsUSB", "USB Device &Filters", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mTwFilters->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("UIMachineSettingsUSB", "[filter]", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mTwFilters->setWhatsThis(QApplication::translate("UIMachineSettingsUSB", "Lists all USB filters of this machine. The checkbox to the left defines whether the particular filter is enabled or not. Use the context menu or buttons to the right to add or remove USB filters.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIMachineSettingsUSB);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsUSB: public Ui_UIMachineSettingsUSB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSUSB_H
