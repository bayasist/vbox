/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2009-2012 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIGlobalSettingsNetworkDetailsHost.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSNETWORKDETAILSHOST_H
#define UIGLOBALSETTINGSNETWORKDETAILSHOST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QIDialogButtonBox.h"
#include "QILineEdit.h"
#include "QITabWidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsNetworkDetailsHost
{
public:
    QVBoxLayout *vboxLayout;
    QITabWidget *m_pDetailsTabWidget;
    QWidget *m_pInterfaceTab;
    QGridLayout *gridLayout;
    QCheckBox *m_pEnableManualCheckbox;
    QLabel *m_pIPv4Label;
    QILineEdit *m_pIPv4Editor;
    QLabel *m_pNMv4Label;
    QILineEdit *m_pNMv4Editor;
    QLabel *m_pIPv6Label;
    QILineEdit *m_pIPv6Editor;
    QLabel *m_pNMv6Label;
    QILineEdit *m_pNMv6Editor;
    QSpacerItem *verticalSpacer1;
    QWidget *m_pDhcpServerTab;
    QGridLayout *gridLayout1;
    QCheckBox *m_pEnabledDhcpServerCheckbox;
    QLabel *m_pDhcpAddressLabel;
    QILineEdit *m_pDhcpAddressEditor;
    QLabel *m_pDhcpMaskLabel;
    QILineEdit *m_pDhcpMaskEditor;
    QLabel *m_pDhcpLowerAddressLabel;
    QILineEdit *m_pDhcpLowerAddressEditor;
    QLabel *m_pDhcpUpperAddressLabel;
    QILineEdit *m_pDhcpUpperAddressEditor;
    QSpacerItem *verticalSpacer2;
    QIDialogButtonBox *m_pButtonBox;

    void setupUi(QWidget *UIGlobalSettingsNetworkDetailsHost)
    {
        if (UIGlobalSettingsNetworkDetailsHost->objectName().isEmpty())
            UIGlobalSettingsNetworkDetailsHost->setObjectName(QString::fromUtf8("UIGlobalSettingsNetworkDetailsHost"));
        UIGlobalSettingsNetworkDetailsHost->resize(402, 255);
        vboxLayout = new QVBoxLayout(UIGlobalSettingsNetworkDetailsHost);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_pDetailsTabWidget = new QITabWidget(UIGlobalSettingsNetworkDetailsHost);
        m_pDetailsTabWidget->setObjectName(QString::fromUtf8("m_pDetailsTabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pDetailsTabWidget->sizePolicy().hasHeightForWidth());
        m_pDetailsTabWidget->setSizePolicy(sizePolicy);
        m_pInterfaceTab = new QWidget();
        m_pInterfaceTab->setObjectName(QString::fromUtf8("m_pInterfaceTab"));
        gridLayout = new QGridLayout(m_pInterfaceTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pEnableManualCheckbox = new QCheckBox(m_pInterfaceTab);
        m_pEnableManualCheckbox->setObjectName(QString::fromUtf8("m_pEnableManualCheckbox"));
        m_pEnableManualCheckbox->setChecked(true);

        gridLayout->addWidget(m_pEnableManualCheckbox, 0, 0, 1, 3);

        m_pIPv4Label = new QLabel(m_pInterfaceTab);
        m_pIPv4Label->setObjectName(QString::fromUtf8("m_pIPv4Label"));
        m_pIPv4Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pIPv4Label, 1, 1, 1, 1);

        m_pIPv4Editor = new QILineEdit(m_pInterfaceTab);
        m_pIPv4Editor->setObjectName(QString::fromUtf8("m_pIPv4Editor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pIPv4Editor->sizePolicy().hasHeightForWidth());
        m_pIPv4Editor->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pIPv4Editor, 1, 2, 1, 1);

        m_pNMv4Label = new QLabel(m_pInterfaceTab);
        m_pNMv4Label->setObjectName(QString::fromUtf8("m_pNMv4Label"));
        m_pNMv4Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pNMv4Label, 2, 1, 1, 1);

        m_pNMv4Editor = new QILineEdit(m_pInterfaceTab);
        m_pNMv4Editor->setObjectName(QString::fromUtf8("m_pNMv4Editor"));
        sizePolicy1.setHeightForWidth(m_pNMv4Editor->sizePolicy().hasHeightForWidth());
        m_pNMv4Editor->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pNMv4Editor, 2, 2, 1, 1);

        m_pIPv6Label = new QLabel(m_pInterfaceTab);
        m_pIPv6Label->setObjectName(QString::fromUtf8("m_pIPv6Label"));
        m_pIPv6Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pIPv6Label, 3, 1, 1, 1);

        m_pIPv6Editor = new QILineEdit(m_pInterfaceTab);
        m_pIPv6Editor->setObjectName(QString::fromUtf8("m_pIPv6Editor"));
        sizePolicy1.setHeightForWidth(m_pIPv6Editor->sizePolicy().hasHeightForWidth());
        m_pIPv6Editor->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pIPv6Editor, 3, 2, 1, 1);

        m_pNMv6Label = new QLabel(m_pInterfaceTab);
        m_pNMv6Label->setObjectName(QString::fromUtf8("m_pNMv6Label"));
        m_pNMv6Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pNMv6Label, 4, 1, 1, 1);

        m_pNMv6Editor = new QILineEdit(m_pInterfaceTab);
        m_pNMv6Editor->setObjectName(QString::fromUtf8("m_pNMv6Editor"));
        sizePolicy1.setHeightForWidth(m_pNMv6Editor->sizePolicy().hasHeightForWidth());
        m_pNMv6Editor->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pNMv6Editor, 4, 2, 1, 1);

        verticalSpacer1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer1, 5, 0, 1, 3);

        m_pDetailsTabWidget->addTab(m_pInterfaceTab, QString());
        m_pDhcpServerTab = new QWidget();
        m_pDhcpServerTab->setObjectName(QString::fromUtf8("m_pDhcpServerTab"));
        gridLayout1 = new QGridLayout(m_pDhcpServerTab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_pEnabledDhcpServerCheckbox = new QCheckBox(m_pDhcpServerTab);
        m_pEnabledDhcpServerCheckbox->setObjectName(QString::fromUtf8("m_pEnabledDhcpServerCheckbox"));

        gridLayout1->addWidget(m_pEnabledDhcpServerCheckbox, 0, 0, 1, 3);

        m_pDhcpAddressLabel = new QLabel(m_pDhcpServerTab);
        m_pDhcpAddressLabel->setObjectName(QString::fromUtf8("m_pDhcpAddressLabel"));
        m_pDhcpAddressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pDhcpAddressLabel, 1, 1, 1, 1);

        m_pDhcpAddressEditor = new QILineEdit(m_pDhcpServerTab);
        m_pDhcpAddressEditor->setObjectName(QString::fromUtf8("m_pDhcpAddressEditor"));
        sizePolicy1.setHeightForWidth(m_pDhcpAddressEditor->sizePolicy().hasHeightForWidth());
        m_pDhcpAddressEditor->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(m_pDhcpAddressEditor, 1, 2, 1, 1);

        m_pDhcpMaskLabel = new QLabel(m_pDhcpServerTab);
        m_pDhcpMaskLabel->setObjectName(QString::fromUtf8("m_pDhcpMaskLabel"));
        m_pDhcpMaskLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pDhcpMaskLabel, 2, 1, 1, 1);

        m_pDhcpMaskEditor = new QILineEdit(m_pDhcpServerTab);
        m_pDhcpMaskEditor->setObjectName(QString::fromUtf8("m_pDhcpMaskEditor"));
        sizePolicy1.setHeightForWidth(m_pDhcpMaskEditor->sizePolicy().hasHeightForWidth());
        m_pDhcpMaskEditor->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(m_pDhcpMaskEditor, 2, 2, 1, 1);

        m_pDhcpLowerAddressLabel = new QLabel(m_pDhcpServerTab);
        m_pDhcpLowerAddressLabel->setObjectName(QString::fromUtf8("m_pDhcpLowerAddressLabel"));
        m_pDhcpLowerAddressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pDhcpLowerAddressLabel, 3, 1, 1, 1);

        m_pDhcpLowerAddressEditor = new QILineEdit(m_pDhcpServerTab);
        m_pDhcpLowerAddressEditor->setObjectName(QString::fromUtf8("m_pDhcpLowerAddressEditor"));
        sizePolicy1.setHeightForWidth(m_pDhcpLowerAddressEditor->sizePolicy().hasHeightForWidth());
        m_pDhcpLowerAddressEditor->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(m_pDhcpLowerAddressEditor, 3, 2, 1, 1);

        m_pDhcpUpperAddressLabel = new QLabel(m_pDhcpServerTab);
        m_pDhcpUpperAddressLabel->setObjectName(QString::fromUtf8("m_pDhcpUpperAddressLabel"));
        m_pDhcpUpperAddressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(m_pDhcpUpperAddressLabel, 4, 1, 1, 1);

        m_pDhcpUpperAddressEditor = new QILineEdit(m_pDhcpServerTab);
        m_pDhcpUpperAddressEditor->setObjectName(QString::fromUtf8("m_pDhcpUpperAddressEditor"));
        sizePolicy1.setHeightForWidth(m_pDhcpUpperAddressEditor->sizePolicy().hasHeightForWidth());
        m_pDhcpUpperAddressEditor->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(m_pDhcpUpperAddressEditor, 4, 2, 1, 1);

        verticalSpacer2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(verticalSpacer2, 5, 0, 1, 3);

        m_pDetailsTabWidget->addTab(m_pDhcpServerTab, QString());

        vboxLayout->addWidget(m_pDetailsTabWidget);

        m_pButtonBox = new QIDialogButtonBox(UIGlobalSettingsNetworkDetailsHost);
        m_pButtonBox->setObjectName(QString::fromUtf8("m_pButtonBox"));
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_pButtonBox);

#ifndef QT_NO_SHORTCUT
        m_pIPv4Label->setBuddy(m_pIPv4Editor);
        m_pNMv4Label->setBuddy(m_pNMv4Editor);
        m_pIPv6Label->setBuddy(m_pIPv6Editor);
        m_pNMv6Label->setBuddy(m_pNMv6Editor);
        m_pDhcpAddressLabel->setBuddy(m_pDhcpAddressEditor);
        m_pDhcpMaskLabel->setBuddy(m_pDhcpMaskEditor);
        m_pDhcpLowerAddressLabel->setBuddy(m_pDhcpLowerAddressEditor);
        m_pDhcpUpperAddressLabel->setBuddy(m_pDhcpUpperAddressEditor);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsNetworkDetailsHost);
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), UIGlobalSettingsNetworkDetailsHost, SLOT(accept()));
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), UIGlobalSettingsNetworkDetailsHost, SLOT(reject()));

        m_pDetailsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UIGlobalSettingsNetworkDetailsHost);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsNetworkDetailsHost)
    {
        UIGlobalSettingsNetworkDetailsHost->setWindowTitle(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Host-only Network Details", 0, QApplication::UnicodeUTF8));
        m_pEnableManualCheckbox->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Manual &Configuration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pEnableManualCheckbox->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Use manual configuration for this host-only network adapter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pIPv4Label->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "&IPv4 Address:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pIPv4Editor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the host IPv4 address for this adapter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pNMv4Label->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "IPv4 Network &Mask:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pNMv4Editor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the host IPv4 network mask for this adapter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pIPv6Label->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "I&Pv6 Address:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pIPv6Editor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the host IPv6 address for this adapter if IPv6 is supported.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pNMv6Label->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "IPv6 Network Mask &Length:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pNMv6Editor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the host IPv6 network mask prefix length for this adapter if IPv6 is supported.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pDetailsTabWidget->setTabText(m_pDetailsTabWidget->indexOf(m_pInterfaceTab), QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "&Adapter", 0, QApplication::UnicodeUTF8));
        m_pEnabledDhcpServerCheckbox->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "&Enable Server", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pEnabledDhcpServerCheckbox->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Indicates whether the DHCP Server is enabled on machine startup or not.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pDhcpAddressLabel->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Server Add&ress:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pDhcpAddressEditor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the address of the DHCP server servicing the network associated with this host-only adapter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pDhcpMaskLabel->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Server &Mask:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pDhcpMaskEditor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the network mask of the DHCP server servicing the network associated with this host-only adapter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pDhcpLowerAddressLabel->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "&Lower Address Bound:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pDhcpLowerAddressEditor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the lower address bound offered by the DHCP server servicing the network associated with this host-only adapter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pDhcpUpperAddressLabel->setText(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "&Upper Address Bound:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pDhcpUpperAddressEditor->setToolTip(QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "Holds the upper address bound offered by the DHCP server servicing the network associated with this host-only adapter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pDetailsTabWidget->setTabText(m_pDetailsTabWidget->indexOf(m_pDhcpServerTab), QApplication::translate("UIGlobalSettingsNetworkDetailsHost", "&DHCP Server", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsNetworkDetailsHost: public Ui_UIGlobalSettingsNetworkDetailsHost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSNETWORKDETAILSHOST_H
