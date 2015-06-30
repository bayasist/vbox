/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2008-2013 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIMachineSettingsSystem.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSSYSTEM_H
#define UIMACHINESETTINGSSYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QIAdvancedSlider.h"
#include "QITabWidget.h"
#include "QIToolButton.h"
#include "UIBootTable.h"
#include "VBoxGuestRAMSlider.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsSystem
{
public:
    QVBoxLayout *vboxLayout;
    QITabWidget *m_pTabWidgetSystem;
    QWidget *m_pTabMotherboard;
    QGridLayout *gridLayout;
    QLabel *m_pLabelMemorySize;
    QWidget *widget;
    QVBoxLayout *vboxLayout1;
    VBoxGuestRAMSlider *m_pSliderMemorySize;
    QHBoxLayout *hboxLayout;
    QLabel *m_pLabelMemoryMin;
    QSpacerItem *m_pSpacerHorizontal1;
    QLabel *m_pLabelMemoryMax;
    QHBoxLayout *hboxLayout1;
    QSpinBox *m_pEditorMemorySize;
    QLabel *m_pLabelMemoryUnits;
    QLabel *m_pLabelBootOrder;
    QHBoxLayout *m_pLayoutBootOrder;
    UIBootTable *mTwBootOrder;
    QVBoxLayout *mLtBootOrderButtons;
    QIToolButton *mTbBootItemUp;
    QIToolButton *mTbBootItemDown;
    QSpacerItem *m_pSpacerVertical1;
    QSpacerItem *m_pSpacerHorizontal2;
    QLabel *m_pLabelChipsetType;
    QHBoxLayout *hboxLayout2;
    QComboBox *m_pComboChipsetType;
    QSpacerItem *m_pSpacerHorizontal3;
    QLabel *m_pLabelPointingHIDType;
    QHBoxLayout *hboxLayout3;
    QComboBox *m_pComboPointingHIDType;
    QSpacerItem *m_pSpacerHorizontal4;
    QLabel *m_pLabelMotherboardExtended;
    QCheckBox *m_pCheckBoxApic;
    QCheckBox *m_pCheckBoxEFI;
    QCheckBox *m_pCheckBoxUseUTC;
    QSpacerItem *m_pSpacerVertical2;
    QWidget *m_pTabCPU;
    QGridLayout *gridLayout1;
    QLabel *m_pLabelCPUCount;
    QWidget *widget1;
    QVBoxLayout *vboxLayout2;
    QIAdvancedSlider *m_pSliderCPUCount;
    QHBoxLayout *hboxLayout4;
    QLabel *m_pLabelCPUMin;
    QSpacerItem *m_pSpacerHorizontal5;
    QLabel *m_pLabelCPUMax;
    QSpinBox *m_pEditorCPUCount;
    QLabel *m_pLabelCPUExecCap;
    QVBoxLayout *vboxLayout3;
    QIAdvancedSlider *m_pSliderCPUExecCap;
    QHBoxLayout *hboxLayout5;
    QLabel *m_pLabelCPUExecCapMin;
    QSpacerItem *m_pSpacerHorizontal6;
    QLabel *m_pLabelCPUExecCapMax;
    QSpinBox *m_pEditorCPUExecCap;
    QLabel *m_pLabelCPUExtended;
    QCheckBox *m_pCheckBoxPAE;
    QSpacerItem *m_pSpacerVertical3;
    QWidget *m_pTabAcceleration;
    QGridLayout *gridLayout2;
    QLabel *m_pLabelVirtualization;
    QCheckBox *m_pCheckBoxVirtualization;
    QCheckBox *m_pCheckBoxNestedPaging;
    QSpacerItem *m_pSpacerVertical4;

    void setupUi(QWidget *UIMachineSettingsSystem)
    {
        if (UIMachineSettingsSystem->objectName().isEmpty())
            UIMachineSettingsSystem->setObjectName(QString::fromUtf8("UIMachineSettingsSystem"));
        vboxLayout = new QVBoxLayout(UIMachineSettingsSystem);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_pTabWidgetSystem = new QITabWidget(UIMachineSettingsSystem);
        m_pTabWidgetSystem->setObjectName(QString::fromUtf8("m_pTabWidgetSystem"));
        m_pTabMotherboard = new QWidget();
        m_pTabMotherboard->setObjectName(QString::fromUtf8("m_pTabMotherboard"));
        gridLayout = new QGridLayout(m_pTabMotherboard);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pLabelMemorySize = new QLabel(m_pTabMotherboard);
        m_pLabelMemorySize->setObjectName(QString::fromUtf8("m_pLabelMemorySize"));
        m_pLabelMemorySize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelMemorySize, 0, 0, 1, 1);

        widget = new QWidget(m_pTabMotherboard);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        vboxLayout1 = new QVBoxLayout(widget);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        m_pSliderMemorySize = new VBoxGuestRAMSlider(widget);
        m_pSliderMemorySize->setObjectName(QString::fromUtf8("m_pSliderMemorySize"));
        m_pSliderMemorySize->setOrientation(Qt::Horizontal);

        vboxLayout1->addWidget(m_pSliderMemorySize);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_pLabelMemoryMin = new QLabel(widget);
        m_pLabelMemoryMin->setObjectName(QString::fromUtf8("m_pLabelMemoryMin"));

        hboxLayout->addWidget(m_pLabelMemoryMin);

        m_pSpacerHorizontal1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(m_pSpacerHorizontal1);

        m_pLabelMemoryMax = new QLabel(widget);
        m_pLabelMemoryMax->setObjectName(QString::fromUtf8("m_pLabelMemoryMax"));

        hboxLayout->addWidget(m_pLabelMemoryMax);


        vboxLayout1->addLayout(hboxLayout);


        gridLayout->addWidget(widget, 0, 1, 2, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_pEditorMemorySize = new QSpinBox(m_pTabMotherboard);
        m_pEditorMemorySize->setObjectName(QString::fromUtf8("m_pEditorMemorySize"));

        hboxLayout1->addWidget(m_pEditorMemorySize);

        m_pLabelMemoryUnits = new QLabel(m_pTabMotherboard);
        m_pLabelMemoryUnits->setObjectName(QString::fromUtf8("m_pLabelMemoryUnits"));

        hboxLayout1->addWidget(m_pLabelMemoryUnits);


        gridLayout->addLayout(hboxLayout1, 0, 3, 1, 1);

        m_pLabelBootOrder = new QLabel(m_pTabMotherboard);
        m_pLabelBootOrder->setObjectName(QString::fromUtf8("m_pLabelBootOrder"));
        m_pLabelBootOrder->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelBootOrder, 2, 0, 1, 1);

        m_pLayoutBootOrder = new QHBoxLayout();
        m_pLayoutBootOrder->setSpacing(1);
        m_pLayoutBootOrder->setObjectName(QString::fromUtf8("m_pLayoutBootOrder"));
        mTwBootOrder = new UIBootTable(m_pTabMotherboard);
        mTwBootOrder->setObjectName(QString::fromUtf8("mTwBootOrder"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTwBootOrder->sizePolicy().hasHeightForWidth());
        mTwBootOrder->setSizePolicy(sizePolicy1);
        mTwBootOrder->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mTwBootOrder->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mTwBootOrder->setAlternatingRowColors(true);

        m_pLayoutBootOrder->addWidget(mTwBootOrder);

        mLtBootOrderButtons = new QVBoxLayout();
        mLtBootOrderButtons->setSpacing(0);
        mLtBootOrderButtons->setObjectName(QString::fromUtf8("mLtBootOrderButtons"));
        mTbBootItemUp = new QIToolButton(m_pTabMotherboard);
        mTbBootItemUp->setObjectName(QString::fromUtf8("mTbBootItemUp"));
        mTbBootItemUp->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/list_moveup_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        mTbBootItemUp->setIcon(icon);
        mTbBootItemUp->setAutoRaise(true);

        mLtBootOrderButtons->addWidget(mTbBootItemUp);

        mTbBootItemDown = new QIToolButton(m_pTabMotherboard);
        mTbBootItemDown->setObjectName(QString::fromUtf8("mTbBootItemDown"));
        mTbBootItemDown->setFocusPolicy(Qt::StrongFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/list_movedown_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        mTbBootItemDown->setIcon(icon1);
        mTbBootItemDown->setAutoRaise(true);

        mLtBootOrderButtons->addWidget(mTbBootItemDown);

        m_pSpacerVertical1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLtBootOrderButtons->addItem(m_pSpacerVertical1);


        m_pLayoutBootOrder->addLayout(mLtBootOrderButtons);

        m_pSpacerHorizontal2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pLayoutBootOrder->addItem(m_pSpacerHorizontal2);


        gridLayout->addLayout(m_pLayoutBootOrder, 2, 1, 2, 2);

        m_pLabelChipsetType = new QLabel(m_pTabMotherboard);
        m_pLabelChipsetType->setObjectName(QString::fromUtf8("m_pLabelChipsetType"));
        m_pLabelChipsetType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelChipsetType, 4, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_pComboChipsetType = new QComboBox(m_pTabMotherboard);
        m_pComboChipsetType->setObjectName(QString::fromUtf8("m_pComboChipsetType"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pComboChipsetType->sizePolicy().hasHeightForWidth());
        m_pComboChipsetType->setSizePolicy(sizePolicy2);

        hboxLayout2->addWidget(m_pComboChipsetType);

        m_pSpacerHorizontal3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(m_pSpacerHorizontal3);


        gridLayout->addLayout(hboxLayout2, 4, 1, 1, 3);

        m_pLabelPointingHIDType = new QLabel(m_pTabMotherboard);
        m_pLabelPointingHIDType->setObjectName(QString::fromUtf8("m_pLabelPointingHIDType"));
        m_pLabelPointingHIDType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelPointingHIDType, 5, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_pComboPointingHIDType = new QComboBox(m_pTabMotherboard);
        m_pComboPointingHIDType->setObjectName(QString::fromUtf8("m_pComboPointingHIDType"));
        sizePolicy2.setHeightForWidth(m_pComboPointingHIDType->sizePolicy().hasHeightForWidth());
        m_pComboPointingHIDType->setSizePolicy(sizePolicy2);

        hboxLayout3->addWidget(m_pComboPointingHIDType);

        m_pSpacerHorizontal4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(m_pSpacerHorizontal4);


        gridLayout->addLayout(hboxLayout3, 5, 1, 1, 3);

        m_pLabelMotherboardExtended = new QLabel(m_pTabMotherboard);
        m_pLabelMotherboardExtended->setObjectName(QString::fromUtf8("m_pLabelMotherboardExtended"));
        m_pLabelMotherboardExtended->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelMotherboardExtended, 6, 0, 1, 1);

        m_pCheckBoxApic = new QCheckBox(m_pTabMotherboard);
        m_pCheckBoxApic->setObjectName(QString::fromUtf8("m_pCheckBoxApic"));

        gridLayout->addWidget(m_pCheckBoxApic, 6, 1, 1, 3);

        m_pCheckBoxEFI = new QCheckBox(m_pTabMotherboard);
        m_pCheckBoxEFI->setObjectName(QString::fromUtf8("m_pCheckBoxEFI"));

        gridLayout->addWidget(m_pCheckBoxEFI, 7, 1, 1, 3);

        m_pCheckBoxUseUTC = new QCheckBox(m_pTabMotherboard);
        m_pCheckBoxUseUTC->setObjectName(QString::fromUtf8("m_pCheckBoxUseUTC"));

        gridLayout->addWidget(m_pCheckBoxUseUTC, 8, 1, 1, 3);

        m_pSpacerVertical2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(m_pSpacerVertical2, 9, 0, 1, 4);

        m_pTabWidgetSystem->addTab(m_pTabMotherboard, QString());
        m_pTabCPU = new QWidget();
        m_pTabCPU->setObjectName(QString::fromUtf8("m_pTabCPU"));
        gridLayout1 = new QGridLayout(m_pTabCPU);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_pLabelCPUCount = new QLabel(m_pTabCPU);
        m_pLabelCPUCount->setObjectName(QString::fromUtf8("m_pLabelCPUCount"));
        m_pLabelCPUCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pLabelCPUCount, 0, 0, 1, 1);

        widget1 = new QWidget(m_pTabCPU);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        sizePolicy.setHeightForWidth(widget1->sizePolicy().hasHeightForWidth());
        widget1->setSizePolicy(sizePolicy);
        vboxLayout2 = new QVBoxLayout(widget1);
        vboxLayout2->setSpacing(0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        m_pSliderCPUCount = new QIAdvancedSlider(widget1);
        m_pSliderCPUCount->setObjectName(QString::fromUtf8("m_pSliderCPUCount"));
        m_pSliderCPUCount->setOrientation(Qt::Horizontal);

        vboxLayout2->addWidget(m_pSliderCPUCount);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        m_pLabelCPUMin = new QLabel(widget1);
        m_pLabelCPUMin->setObjectName(QString::fromUtf8("m_pLabelCPUMin"));

        hboxLayout4->addWidget(m_pLabelCPUMin);

        m_pSpacerHorizontal5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(m_pSpacerHorizontal5);

        m_pLabelCPUMax = new QLabel(widget1);
        m_pLabelCPUMax->setObjectName(QString::fromUtf8("m_pLabelCPUMax"));

        hboxLayout4->addWidget(m_pLabelCPUMax);


        vboxLayout2->addLayout(hboxLayout4);


        gridLayout1->addWidget(widget1, 0, 1, 2, 1);

        m_pEditorCPUCount = new QSpinBox(m_pTabCPU);
        m_pEditorCPUCount->setObjectName(QString::fromUtf8("m_pEditorCPUCount"));

        gridLayout1->addWidget(m_pEditorCPUCount, 0, 2, 1, 1);

        m_pLabelCPUExecCap = new QLabel(m_pTabCPU);
        m_pLabelCPUExecCap->setObjectName(QString::fromUtf8("m_pLabelCPUExecCap"));
        m_pLabelCPUExecCap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pLabelCPUExecCap, 2, 0, 1, 1);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        m_pSliderCPUExecCap = new QIAdvancedSlider(m_pTabCPU);
        m_pSliderCPUExecCap->setObjectName(QString::fromUtf8("m_pSliderCPUExecCap"));
        m_pSliderCPUExecCap->setOrientation(Qt::Horizontal);

        vboxLayout3->addWidget(m_pSliderCPUExecCap);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        m_pLabelCPUExecCapMin = new QLabel(m_pTabCPU);
        m_pLabelCPUExecCapMin->setObjectName(QString::fromUtf8("m_pLabelCPUExecCapMin"));

        hboxLayout5->addWidget(m_pLabelCPUExecCapMin);

        m_pSpacerHorizontal6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(m_pSpacerHorizontal6);

        m_pLabelCPUExecCapMax = new QLabel(m_pTabCPU);
        m_pLabelCPUExecCapMax->setObjectName(QString::fromUtf8("m_pLabelCPUExecCapMax"));

        hboxLayout5->addWidget(m_pLabelCPUExecCapMax);


        vboxLayout3->addLayout(hboxLayout5);


        gridLayout1->addLayout(vboxLayout3, 2, 1, 2, 1);

        m_pEditorCPUExecCap = new QSpinBox(m_pTabCPU);
        m_pEditorCPUExecCap->setObjectName(QString::fromUtf8("m_pEditorCPUExecCap"));

        gridLayout1->addWidget(m_pEditorCPUExecCap, 2, 2, 1, 1);

        m_pLabelCPUExtended = new QLabel(m_pTabCPU);
        m_pLabelCPUExtended->setObjectName(QString::fromUtf8("m_pLabelCPUExtended"));
        m_pLabelCPUExtended->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pLabelCPUExtended, 4, 0, 1, 1);

        m_pCheckBoxPAE = new QCheckBox(m_pTabCPU);
        m_pCheckBoxPAE->setObjectName(QString::fromUtf8("m_pCheckBoxPAE"));

        gridLayout1->addWidget(m_pCheckBoxPAE, 4, 1, 1, 2);

        m_pSpacerVertical3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(m_pSpacerVertical3, 5, 0, 1, 3);

        m_pTabWidgetSystem->addTab(m_pTabCPU, QString());
        m_pTabAcceleration = new QWidget();
        m_pTabAcceleration->setObjectName(QString::fromUtf8("m_pTabAcceleration"));
        gridLayout2 = new QGridLayout(m_pTabAcceleration);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        m_pLabelVirtualization = new QLabel(m_pTabAcceleration);
        m_pLabelVirtualization->setObjectName(QString::fromUtf8("m_pLabelVirtualization"));

        gridLayout2->addWidget(m_pLabelVirtualization, 0, 0, 1, 1);

        m_pCheckBoxVirtualization = new QCheckBox(m_pTabAcceleration);
        m_pCheckBoxVirtualization->setObjectName(QString::fromUtf8("m_pCheckBoxVirtualization"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pCheckBoxVirtualization->sizePolicy().hasHeightForWidth());
        m_pCheckBoxVirtualization->setSizePolicy(sizePolicy3);

        gridLayout2->addWidget(m_pCheckBoxVirtualization, 0, 1, 1, 1);

        m_pCheckBoxNestedPaging = new QCheckBox(m_pTabAcceleration);
        m_pCheckBoxNestedPaging->setObjectName(QString::fromUtf8("m_pCheckBoxNestedPaging"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_pCheckBoxNestedPaging->sizePolicy().hasHeightForWidth());
        m_pCheckBoxNestedPaging->setSizePolicy(sizePolicy4);

        gridLayout2->addWidget(m_pCheckBoxNestedPaging, 1, 1, 1, 1);

        m_pSpacerVertical4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(m_pSpacerVertical4, 2, 0, 1, 2);

        m_pTabWidgetSystem->addTab(m_pTabAcceleration, QString());

        vboxLayout->addWidget(m_pTabWidgetSystem);

#ifndef QT_NO_SHORTCUT
        m_pLabelMemorySize->setBuddy(m_pEditorMemorySize);
        m_pLabelBootOrder->setBuddy(mTwBootOrder);
        m_pLabelChipsetType->setBuddy(m_pComboChipsetType);
        m_pLabelPointingHIDType->setBuddy(m_pComboPointingHIDType);
        m_pLabelCPUCount->setBuddy(m_pEditorCPUCount);
        m_pLabelCPUExecCap->setBuddy(m_pEditorCPUExecCap);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsSystem);
        QObject::connect(m_pCheckBoxVirtualization, SIGNAL(toggled(bool)), m_pCheckBoxNestedPaging, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(UIMachineSettingsSystem);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsSystem)
    {
        m_pLabelMemorySize->setText(QApplication::translate("UIMachineSettingsSystem", "Base &Memory:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSliderMemorySize->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Controls the amount of memory provided to the virtual machine. If you assign too much, the machine might not start.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorMemorySize->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Controls the amount of memory provided to the virtual machine. If you assign too much, the machine might not start.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelMemoryUnits->setText(QApplication::translate("UIMachineSettingsSystem", "MB", 0, QApplication::UnicodeUTF8));
        m_pLabelBootOrder->setText(QApplication::translate("UIMachineSettingsSystem", "&Boot Order:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mTwBootOrder->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Defines the boot device order. Use the checkboxes on the left to enable or disable individual boot devices. Move items up and down to change the device order.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        mTbBootItemUp->setToolTip(QApplication::translate("UIMachineSettingsSystem", "Move Up (Ctrl-Up)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mTbBootItemUp->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Moves the selected boot device up.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mTbBootItemUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        mTbBootItemDown->setToolTip(QApplication::translate("UIMachineSettingsSystem", "Move Down (Ctrl-Down)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mTbBootItemDown->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Moves the selected boot device down.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mTbBootItemDown->setText(QString());
        m_pLabelChipsetType->setText(QApplication::translate("UIMachineSettingsSystem", "&Chipset:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pComboChipsetType->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Selects the chipset to be emulated in this virtual machine. Note that the ICH9 chipset emulation is experimental and not recommended except for guest systems (such as Mac OS X) which require it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelPointingHIDType->setText(QApplication::translate("UIMachineSettingsSystem", "&Pointing Device:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pComboPointingHIDType->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Determines whether the emulated pointing device is a standard PS/2 mouse, a USB tablet or a USB multi-touch tablet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelMotherboardExtended->setText(QApplication::translate("UIMachineSettingsSystem", "Extended Features:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxApic->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "When checked, the virtual machine will support the Input Output APIC (I/O APIC), which may slightly decrease performance. <b>Note:</b> don't disable this feature after having installed a Windows guest operating system!", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxApic->setText(QApplication::translate("UIMachineSettingsSystem", "Enable &I/O APIC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxEFI->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "When checked, the guest will support the Extended Firmware Interface (EFI), which is required to boot certain guest OSes. Non-EFI aware OSes will not be able to boot if this option is activated.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxEFI->setText(QApplication::translate("UIMachineSettingsSystem", "Enable &EFI (special OSes only)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxUseUTC->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "If checked, the RTC device will report the time in UTC, otherwise in local (host) time. Unix usually expects the hardware clock to be set to UTC.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxUseUTC->setText(QApplication::translate("UIMachineSettingsSystem", "Hardware Clock in &UTC Time", 0, QApplication::UnicodeUTF8));
        m_pTabWidgetSystem->setTabText(m_pTabWidgetSystem->indexOf(m_pTabMotherboard), QApplication::translate("UIMachineSettingsSystem", "&Motherboard", 0, QApplication::UnicodeUTF8));
        m_pLabelCPUCount->setText(QApplication::translate("UIMachineSettingsSystem", "&Processor(s):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSliderCPUCount->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Controls the number of virtual CPUs in the virtual machine. You need hardware virtualization support on your host system to use more than one virtual CPU.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorCPUCount->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Controls the number of virtual CPUs in the virtual machine. You need hardware virtualization support on your host system to use more than one virtual CPU.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelCPUExecCap->setText(QApplication::translate("UIMachineSettingsSystem", "&Execution Cap:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSliderCPUExecCap->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Limits the amount of time that each virtual CPU is allowed to run for. Each virtual CPU will be allowed to use up to this percentage of the processing time available on one physical CPU. The execution cap can be disabled by setting it to 100%. Setting the cap too low can make the machine feel slow to respond.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorCPUExecCap->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "Limits the amount of time that each virtual CPU is allowed to run for. Each virtual CPU will be allowed to use up to this percentage of the processing time available on one physical CPU. The execution cap can be disabled by setting it to 100%. Setting the cap too low can make the machine feel slow to respond.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelCPUExtended->setText(QApplication::translate("UIMachineSettingsSystem", "Extended Features:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxPAE->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "When checked, the Physical Address Extension (PAE) feature of the host CPU will be exposed to the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxPAE->setText(QApplication::translate("UIMachineSettingsSystem", "Enable PA&E/NX", 0, QApplication::UnicodeUTF8));
        m_pTabWidgetSystem->setTabText(m_pTabWidgetSystem->indexOf(m_pTabCPU), QApplication::translate("UIMachineSettingsSystem", "&Processor", 0, QApplication::UnicodeUTF8));
        m_pLabelVirtualization->setText(QApplication::translate("UIMachineSettingsSystem", "Hardware Virtualization:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxVirtualization->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "When checked, the virtual machine will try to make use of the host CPU's hardware virtualization extensions such as Intel VT-x and AMD-V.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxVirtualization->setText(QApplication::translate("UIMachineSettingsSystem", "Enable &VT-x/AMD-V", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxNestedPaging->setWhatsThis(QApplication::translate("UIMachineSettingsSystem", "When checked, the virtual machine will try to make use of the nested paging extension of Intel VT-x and AMD-V.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxNestedPaging->setText(QApplication::translate("UIMachineSettingsSystem", "Enable Nested Pa&ging", 0, QApplication::UnicodeUTF8));
        m_pTabWidgetSystem->setTabText(m_pTabWidgetSystem->indexOf(m_pTabAcceleration), QApplication::translate("UIMachineSettingsSystem", "Acce&leration", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIMachineSettingsSystem);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsSystem: public Ui_UIMachineSettingsSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSSYSTEM_H
