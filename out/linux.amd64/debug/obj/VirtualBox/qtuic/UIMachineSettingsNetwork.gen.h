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
** Form generated from reading UI file 'UIMachineSettingsNetwork.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSNETWORK_H
#define UIMACHINESETTINGSNETWORK_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "QIArrowButtonSwitch.h"
#include "QILineEdit.h"
#include "QIToolButton.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsNetwork
{
public:
    QGridLayout *m_pMainLayout;
    QCheckBox *m_pEnableAdapterCheckBox;
    QSpacerItem *m_pHorizontalSpacer1;
    QWidget *m_pAdapterOptionsContainer;
    QGridLayout *m_pAdapterOptionsLayout;
    QLabel *m_pAttachmentTypeLabel;
    QComboBox *m_pAttachmentTypeComboBox;
    QLabel *m_pAdapterNameLabel;
    QComboBox *m_pAdapterNameCombo;
    QHBoxLayout *m_pAdvancedButtonLayout;
    QSpacerItem *m_pHorizontalSpacer2;
    QIArrowButtonSwitch *m_pAdvancedArrow;
    QLabel *m_pAdapterTypeLabel;
    QComboBox *m_pAdapterTypeCombo;
    QLabel *m_pPromiscuousModeLabel;
    QComboBox *m_pPromiscuousModeCombo;
    QLabel *m_pMACLabel;
    QILineEdit *m_pMACEditor;
    QIToolButton *m_pMACButton;
    QLabel *m_pGenericPropertiesLabel;
    QTextEdit *m_pGenericPropertiesTextEdit;
    QCheckBox *m_pCableConnectedCheckBox;
    QPushButton *m_pPortForwardingButton;
    QSpacerItem *m_pVerticalSpacer;

    void setupUi(QWidget *UIMachineSettingsNetwork)
    {
        if (UIMachineSettingsNetwork->objectName().isEmpty())
            UIMachineSettingsNetwork->setObjectName(QString::fromUtf8("UIMachineSettingsNetwork"));
        UIMachineSettingsNetwork->resize(430, 250);
        m_pMainLayout = new QGridLayout(UIMachineSettingsNetwork);
        m_pMainLayout->setObjectName(QString::fromUtf8("m_pMainLayout"));
        m_pEnableAdapterCheckBox = new QCheckBox(UIMachineSettingsNetwork);
        m_pEnableAdapterCheckBox->setObjectName(QString::fromUtf8("m_pEnableAdapterCheckBox"));

        m_pMainLayout->addWidget(m_pEnableAdapterCheckBox, 0, 0, 1, 2);

        m_pHorizontalSpacer1 = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        m_pMainLayout->addItem(m_pHorizontalSpacer1, 1, 0, 1, 1);

        m_pAdapterOptionsContainer = new QWidget(UIMachineSettingsNetwork);
        m_pAdapterOptionsContainer->setObjectName(QString::fromUtf8("m_pAdapterOptionsContainer"));
        m_pAdapterOptionsLayout = new QGridLayout(m_pAdapterOptionsContainer);
        m_pAdapterOptionsLayout->setContentsMargins(0, 0, 0, 0);
        m_pAdapterOptionsLayout->setObjectName(QString::fromUtf8("m_pAdapterOptionsLayout"));
        m_pAttachmentTypeLabel = new QLabel(m_pAdapterOptionsContainer);
        m_pAttachmentTypeLabel->setObjectName(QString::fromUtf8("m_pAttachmentTypeLabel"));
        m_pAttachmentTypeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pAdapterOptionsLayout->addWidget(m_pAttachmentTypeLabel, 0, 0, 1, 1);

        m_pAttachmentTypeComboBox = new QComboBox(m_pAdapterOptionsContainer);
        m_pAttachmentTypeComboBox->setObjectName(QString::fromUtf8("m_pAttachmentTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pAttachmentTypeComboBox->sizePolicy().hasHeightForWidth());
        m_pAttachmentTypeComboBox->setSizePolicy(sizePolicy);

        m_pAdapterOptionsLayout->addWidget(m_pAttachmentTypeComboBox, 0, 1, 1, 1);

        m_pAdapterNameLabel = new QLabel(m_pAdapterOptionsContainer);
        m_pAdapterNameLabel->setObjectName(QString::fromUtf8("m_pAdapterNameLabel"));
        m_pAdapterNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pAdapterOptionsLayout->addWidget(m_pAdapterNameLabel, 1, 0, 1, 1);

        m_pAdapterNameCombo = new QComboBox(m_pAdapterOptionsContainer);
        m_pAdapterNameCombo->setObjectName(QString::fromUtf8("m_pAdapterNameCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pAdapterNameCombo->sizePolicy().hasHeightForWidth());
        m_pAdapterNameCombo->setSizePolicy(sizePolicy1);

        m_pAdapterOptionsLayout->addWidget(m_pAdapterNameCombo, 1, 1, 1, 3);

        m_pAdvancedButtonLayout = new QHBoxLayout();
        m_pAdvancedButtonLayout->setContentsMargins(0, 0, 0, 0);
        m_pAdvancedButtonLayout->setObjectName(QString::fromUtf8("m_pAdvancedButtonLayout"));
        m_pHorizontalSpacer2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pAdvancedButtonLayout->addItem(m_pHorizontalSpacer2);

        m_pAdvancedArrow = new QIArrowButtonSwitch(m_pAdapterOptionsContainer);
        m_pAdvancedArrow->setObjectName(QString::fromUtf8("m_pAdvancedArrow"));

        m_pAdvancedButtonLayout->addWidget(m_pAdvancedArrow);


        m_pAdapterOptionsLayout->addLayout(m_pAdvancedButtonLayout, 2, 0, 1, 1);

        m_pAdapterTypeLabel = new QLabel(m_pAdapterOptionsContainer);
        m_pAdapterTypeLabel->setObjectName(QString::fromUtf8("m_pAdapterTypeLabel"));
        m_pAdapterTypeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pAdapterOptionsLayout->addWidget(m_pAdapterTypeLabel, 3, 0, 1, 1);

        m_pAdapterTypeCombo = new QComboBox(m_pAdapterOptionsContainer);
        m_pAdapterTypeCombo->setObjectName(QString::fromUtf8("m_pAdapterTypeCombo"));
        sizePolicy1.setHeightForWidth(m_pAdapterTypeCombo->sizePolicy().hasHeightForWidth());
        m_pAdapterTypeCombo->setSizePolicy(sizePolicy1);

        m_pAdapterOptionsLayout->addWidget(m_pAdapterTypeCombo, 3, 1, 1, 3);

        m_pPromiscuousModeLabel = new QLabel(m_pAdapterOptionsContainer);
        m_pPromiscuousModeLabel->setObjectName(QString::fromUtf8("m_pPromiscuousModeLabel"));
        m_pPromiscuousModeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pAdapterOptionsLayout->addWidget(m_pPromiscuousModeLabel, 4, 0, 1, 1);

        m_pPromiscuousModeCombo = new QComboBox(m_pAdapterOptionsContainer);
        m_pPromiscuousModeCombo->setObjectName(QString::fromUtf8("m_pPromiscuousModeCombo"));
        sizePolicy1.setHeightForWidth(m_pPromiscuousModeCombo->sizePolicy().hasHeightForWidth());
        m_pPromiscuousModeCombo->setSizePolicy(sizePolicy1);

        m_pAdapterOptionsLayout->addWidget(m_pPromiscuousModeCombo, 4, 1, 1, 3);

        m_pMACLabel = new QLabel(m_pAdapterOptionsContainer);
        m_pMACLabel->setObjectName(QString::fromUtf8("m_pMACLabel"));
        m_pMACLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pAdapterOptionsLayout->addWidget(m_pMACLabel, 5, 0, 1, 1);

        m_pMACEditor = new QILineEdit(m_pAdapterOptionsContainer);
        m_pMACEditor->setObjectName(QString::fromUtf8("m_pMACEditor"));
        sizePolicy1.setHeightForWidth(m_pMACEditor->sizePolicy().hasHeightForWidth());
        m_pMACEditor->setSizePolicy(sizePolicy1);

        m_pAdapterOptionsLayout->addWidget(m_pMACEditor, 5, 1, 1, 2);

        m_pMACButton = new QIToolButton(m_pAdapterOptionsContainer);
        m_pMACButton->setObjectName(QString::fromUtf8("m_pMACButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/refresh_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pMACButton->setIcon(icon);
        m_pMACButton->setAutoRaise(true);

        m_pAdapterOptionsLayout->addWidget(m_pMACButton, 5, 3, 1, 1);

        m_pGenericPropertiesLabel = new QLabel(m_pAdapterOptionsContainer);
        m_pGenericPropertiesLabel->setObjectName(QString::fromUtf8("m_pGenericPropertiesLabel"));
        m_pGenericPropertiesLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignTop);

        m_pAdapterOptionsLayout->addWidget(m_pGenericPropertiesLabel, 6, 0, 1, 1);

        m_pGenericPropertiesTextEdit = new QTextEdit(m_pAdapterOptionsContainer);
        m_pGenericPropertiesTextEdit->setObjectName(QString::fromUtf8("m_pGenericPropertiesTextEdit"));

        m_pAdapterOptionsLayout->addWidget(m_pGenericPropertiesTextEdit, 6, 1, 1, 3);

        m_pCableConnectedCheckBox = new QCheckBox(m_pAdapterOptionsContainer);
        m_pCableConnectedCheckBox->setObjectName(QString::fromUtf8("m_pCableConnectedCheckBox"));

        m_pAdapterOptionsLayout->addWidget(m_pCableConnectedCheckBox, 7, 1, 1, 3);

        m_pPortForwardingButton = new QPushButton(m_pAdapterOptionsContainer);
        m_pPortForwardingButton->setObjectName(QString::fromUtf8("m_pPortForwardingButton"));

        m_pAdapterOptionsLayout->addWidget(m_pPortForwardingButton, 8, 1, 1, 1);

        m_pVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_pAdapterOptionsLayout->addItem(m_pVerticalSpacer, 9, 0, 1, 4);


        m_pMainLayout->addWidget(m_pAdapterOptionsContainer, 1, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        m_pAttachmentTypeLabel->setBuddy(m_pAttachmentTypeComboBox);
        m_pAdapterNameLabel->setBuddy(m_pAdapterNameCombo);
        m_pAdapterTypeLabel->setBuddy(m_pAdapterTypeCombo);
        m_pPromiscuousModeLabel->setBuddy(m_pPromiscuousModeCombo);
        m_pMACLabel->setBuddy(m_pMACEditor);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsNetwork);

        QMetaObject::connectSlotsByName(UIMachineSettingsNetwork);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsNetwork)
    {
#ifndef QT_NO_WHATSTHIS
        m_pEnableAdapterCheckBox->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "When checked, plugs this virtual network adapter into the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pEnableAdapterCheckBox->setText(QApplication::translate("UIMachineSettingsNetwork", "&Enable Network Adapter", 0, QApplication::UnicodeUTF8));
        m_pAttachmentTypeLabel->setText(QApplication::translate("UIMachineSettingsNetwork", "&Attached to:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pAttachmentTypeComboBox->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Controls how this virtual adapter is attached to the real network of the Host OS.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pAdapterNameLabel->setText(QApplication::translate("UIMachineSettingsNetwork", "&Name:", 0, QApplication::UnicodeUTF8));
        m_pAdvancedArrow->setText(QApplication::translate("UIMachineSettingsNetwork", "A&dvanced", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pAdvancedArrow->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Shows or hides additional network adapter options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pAdapterTypeLabel->setText(QApplication::translate("UIMachineSettingsNetwork", "Adapter &Type:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pAdapterTypeCombo->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Selects the type of the virtual network adapter. Depending on this value, VirtualBox will provide different network hardware to the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pPromiscuousModeLabel->setText(QApplication::translate("UIMachineSettingsNetwork", "&Promiscuous Mode:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pPromiscuousModeCombo->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Selects the promiscuous mode policy of the network adapter when attached to an internal network, host only network or a bridge.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pMACLabel->setText(QApplication::translate("UIMachineSettingsNetwork", "&MAC Address:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pMACEditor->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Holds the MAC address of this adapter. It contains exactly 12 characters chosen from {0-9,A-F}. Note that the second character must be an even digit.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pMACButton->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Generates a new random MAC address.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pGenericPropertiesLabel->setText(QApplication::translate("UIMachineSettingsNetwork", "Generic Properties:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pGenericPropertiesTextEdit->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Enter any configuration settings here for the network attachment driver you will be using. The settings should be of the form <b>name=value</b> and will depend on the driver. Use <b>shift-enter</b> to add a new entry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pCableConnectedCheckBox->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Indicates whether the virtual network cable is plugged in on machine startup or not.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCableConnectedCheckBox->setText(QApplication::translate("UIMachineSettingsNetwork", "&Cable Connected", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pPortForwardingButton->setWhatsThis(QApplication::translate("UIMachineSettingsNetwork", "Opens a window to manage port forwarding rules.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pPortForwardingButton->setText(QApplication::translate("UIMachineSettingsNetwork", "&Port Forwarding", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIMachineSettingsNetwork);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsNetwork: public Ui_UIMachineSettingsNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSNETWORK_H
