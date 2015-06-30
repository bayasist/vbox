/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2009-2013 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIGlobalSettingsNetworkDetailsNAT.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSNETWORKDETAILSNAT_H
#define UIGLOBALSETTINGSNETWORKDETAILSNAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "QIDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsNetworkDetailsNAT
{
public:
    QGridLayout *gridLayout;
    QCheckBox *m_pCheckboxNetwork;
    QWidget *m_pContainerOptions;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *m_pLabelNetworkName;
    QLineEdit *m_pEditorNetworkName;
    QLabel *m_pLabelNetworkCIDR;
    QLineEdit *m_pEditorNetworkCIDR;
    QLabel *m_pLabelOptionsAdvanced;
    QCheckBox *m_pCheckboxSupportsDHCP;
    QCheckBox *m_pCheckboxSupportsIPv6;
    QCheckBox *m_pCheckboxAdvertiseDefaultIPv6Route;
    QPushButton *m_pButtonPortForwarding;
    QSpacerItem *spacerItem1;
    QIDialogButtonBox *m_pButtonBox;

    void setupUi(QWidget *UIGlobalSettingsNetworkDetailsNAT)
    {
        if (UIGlobalSettingsNetworkDetailsNAT->objectName().isEmpty())
            UIGlobalSettingsNetworkDetailsNAT->setObjectName(QString::fromUtf8("UIGlobalSettingsNetworkDetailsNAT"));
        gridLayout = new QGridLayout(UIGlobalSettingsNetworkDetailsNAT);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pCheckboxNetwork = new QCheckBox(UIGlobalSettingsNetworkDetailsNAT);
        m_pCheckboxNetwork->setObjectName(QString::fromUtf8("m_pCheckboxNetwork"));

        gridLayout->addWidget(m_pCheckboxNetwork, 0, 0, 1, 1);

        m_pContainerOptions = new QWidget(UIGlobalSettingsNetworkDetailsNAT);
        m_pContainerOptions->setObjectName(QString::fromUtf8("m_pContainerOptions"));
        gridLayout1 = new QGridLayout(m_pContainerOptions);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 0, 1, 1);

        m_pLabelNetworkName = new QLabel(m_pContainerOptions);
        m_pLabelNetworkName->setObjectName(QString::fromUtf8("m_pLabelNetworkName"));
        m_pLabelNetworkName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pLabelNetworkName, 0, 1, 1, 1);

        m_pEditorNetworkName = new QLineEdit(m_pContainerOptions);
        m_pEditorNetworkName->setObjectName(QString::fromUtf8("m_pEditorNetworkName"));

        gridLayout1->addWidget(m_pEditorNetworkName, 0, 2, 1, 2);

        m_pLabelNetworkCIDR = new QLabel(m_pContainerOptions);
        m_pLabelNetworkCIDR->setObjectName(QString::fromUtf8("m_pLabelNetworkCIDR"));
        m_pLabelNetworkCIDR->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pLabelNetworkCIDR, 1, 1, 1, 1);

        m_pEditorNetworkCIDR = new QLineEdit(m_pContainerOptions);
        m_pEditorNetworkCIDR->setObjectName(QString::fromUtf8("m_pEditorNetworkCIDR"));

        gridLayout1->addWidget(m_pEditorNetworkCIDR, 1, 2, 1, 2);

        m_pLabelOptionsAdvanced = new QLabel(m_pContainerOptions);
        m_pLabelOptionsAdvanced->setObjectName(QString::fromUtf8("m_pLabelOptionsAdvanced"));
        m_pLabelOptionsAdvanced->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignTop);

        gridLayout1->addWidget(m_pLabelOptionsAdvanced, 2, 1, 1, 1);

        m_pCheckboxSupportsDHCP = new QCheckBox(m_pContainerOptions);
        m_pCheckboxSupportsDHCP->setObjectName(QString::fromUtf8("m_pCheckboxSupportsDHCP"));

        gridLayout1->addWidget(m_pCheckboxSupportsDHCP, 2, 2, 1, 1);

        m_pCheckboxSupportsIPv6 = new QCheckBox(m_pContainerOptions);
        m_pCheckboxSupportsIPv6->setObjectName(QString::fromUtf8("m_pCheckboxSupportsIPv6"));

        gridLayout1->addWidget(m_pCheckboxSupportsIPv6, 3, 2, 1, 1);

        m_pCheckboxAdvertiseDefaultIPv6Route = new QCheckBox(m_pContainerOptions);
        m_pCheckboxAdvertiseDefaultIPv6Route->setObjectName(QString::fromUtf8("m_pCheckboxAdvertiseDefaultIPv6Route"));

        gridLayout1->addWidget(m_pCheckboxAdvertiseDefaultIPv6Route, 4, 2, 1, 1);

        m_pButtonPortForwarding = new QPushButton(m_pContainerOptions);
        m_pButtonPortForwarding->setObjectName(QString::fromUtf8("m_pButtonPortForwarding"));

        gridLayout1->addWidget(m_pButtonPortForwarding, 5, 2, 1, 1);


        gridLayout->addWidget(m_pContainerOptions, 1, 0, 1, 2);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 2);

        m_pButtonBox = new QIDialogButtonBox(UIGlobalSettingsNetworkDetailsNAT);
        m_pButtonBox->setObjectName(QString::fromUtf8("m_pButtonBox"));
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(m_pButtonBox, 3, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        m_pLabelNetworkName->setBuddy(m_pEditorNetworkName);
        m_pLabelNetworkCIDR->setBuddy(m_pEditorNetworkCIDR);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsNetworkDetailsNAT);
        QObject::connect(m_pCheckboxNetwork, SIGNAL(toggled(bool)), m_pContainerOptions, SLOT(setEnabled(bool)));
        QObject::connect(m_pCheckboxSupportsIPv6, SIGNAL(toggled(bool)), m_pCheckboxAdvertiseDefaultIPv6Route, SLOT(setEnabled(bool)));
        QObject::connect(m_pButtonPortForwarding, SIGNAL(clicked(bool)), UIGlobalSettingsNetworkDetailsNAT, SLOT(sltEditPortForwarding()));
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), UIGlobalSettingsNetworkDetailsNAT, SLOT(accept()));
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), UIGlobalSettingsNetworkDetailsNAT, SLOT(reject()));

        QMetaObject::connectSlotsByName(UIGlobalSettingsNetworkDetailsNAT);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsNetworkDetailsNAT)
    {
        UIGlobalSettingsNetworkDetailsNAT->setWindowTitle(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "NAT Network Details", 0, QApplication::UnicodeUTF8));
        m_pCheckboxNetwork->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "&Enable Network", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pCheckboxNetwork->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Enable this NAT network.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pLabelNetworkName->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Network &Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pEditorNetworkName->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Holds the name for this network.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pLabelNetworkCIDR->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Network &CIDR:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pEditorNetworkCIDR->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Holds the CIDR for this network.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pLabelOptionsAdvanced->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Network Options:", 0, QApplication::UnicodeUTF8));
        m_pCheckboxSupportsDHCP->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Supports &DHCP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pCheckboxSupportsDHCP->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Determines whether this network supports DHCP.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pCheckboxSupportsIPv6->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Supports &IPv6", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pCheckboxSupportsIPv6->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Determines whether this network supports IPv6.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pCheckboxAdvertiseDefaultIPv6Route->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Advertise Default IPv6 &Route", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pCheckboxAdvertiseDefaultIPv6Route->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Determines whether this network should be advertised as the default IPv6 route.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        m_pButtonPortForwarding->setWhatsThis(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "Opens a window to manage port forwarding rules.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pButtonPortForwarding->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsNAT", "&Port Forwarding", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsNetworkDetailsNAT: public Ui_UIGlobalSettingsNetworkDetailsNAT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSNETWORKDETAILSNAT_H
