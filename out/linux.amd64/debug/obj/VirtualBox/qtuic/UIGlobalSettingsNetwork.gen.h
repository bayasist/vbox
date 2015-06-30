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
** Form generated from reading UI file 'UIGlobalSettingsNetwork.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSNETWORK_H
#define UIGLOBALSETTINGSNETWORK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QITabWidget.h"
#include "UIToolBar.h"

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsNetwork
{
public:
    QVBoxLayout *vboxLayout;
    QITabWidget *m_pTabWidget;
    QWidget *m_pTabNAT;
    QHBoxLayout *hboxLayout;
    QTreeWidget *m_pTreeNetworkNAT;
    UIToolBar *m_pToolbarNetworkNAT;
    QWidget *m_pTabHostOnly;
    QHBoxLayout *hboxLayout1;
    QTreeWidget *m_pTreeNetworkHost;
    UIToolBar *m_pToolbarNetworkHost;

    void setupUi(QWidget *UIGlobalSettingsNetwork)
    {
        if (UIGlobalSettingsNetwork->objectName().isEmpty())
            UIGlobalSettingsNetwork->setObjectName(QString::fromUtf8("UIGlobalSettingsNetwork"));
        vboxLayout = new QVBoxLayout(UIGlobalSettingsNetwork);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_pTabWidget = new QITabWidget(UIGlobalSettingsNetwork);
        m_pTabWidget->setObjectName(QString::fromUtf8("m_pTabWidget"));
        m_pTabNAT = new QWidget();
        m_pTabNAT->setObjectName(QString::fromUtf8("m_pTabNAT"));
        hboxLayout = new QHBoxLayout(m_pTabNAT);
        hboxLayout->setSpacing(3);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_pTreeNetworkNAT = new QTreeWidget(m_pTabNAT);
        m_pTreeNetworkNAT->setObjectName(QString::fromUtf8("m_pTreeNetworkNAT"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pTreeNetworkNAT->sizePolicy().hasHeightForWidth());
        m_pTreeNetworkNAT->setSizePolicy(sizePolicy);
        m_pTreeNetworkNAT->setMinimumSize(QSize(0, 150));
        m_pTreeNetworkNAT->setRootIsDecorated(false);

        hboxLayout->addWidget(m_pTreeNetworkNAT);

        m_pToolbarNetworkNAT = new UIToolBar(m_pTabNAT);
        m_pToolbarNetworkNAT->setObjectName(QString::fromUtf8("m_pToolbarNetworkNAT"));

        hboxLayout->addWidget(m_pToolbarNetworkNAT);

        m_pTabWidget->addTab(m_pTabNAT, QString());
        m_pTabHostOnly = new QWidget();
        m_pTabHostOnly->setObjectName(QString::fromUtf8("m_pTabHostOnly"));
        hboxLayout1 = new QHBoxLayout(m_pTabHostOnly);
        hboxLayout1->setSpacing(3);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_pTreeNetworkHost = new QTreeWidget(m_pTabHostOnly);
        m_pTreeNetworkHost->setObjectName(QString::fromUtf8("m_pTreeNetworkHost"));
        sizePolicy.setHeightForWidth(m_pTreeNetworkHost->sizePolicy().hasHeightForWidth());
        m_pTreeNetworkHost->setSizePolicy(sizePolicy);
        m_pTreeNetworkHost->setMinimumSize(QSize(0, 150));
        m_pTreeNetworkHost->setRootIsDecorated(false);

        hboxLayout1->addWidget(m_pTreeNetworkHost);

        m_pToolbarNetworkHost = new UIToolBar(m_pTabHostOnly);
        m_pToolbarNetworkHost->setObjectName(QString::fromUtf8("m_pToolbarNetworkHost"));

        hboxLayout1->addWidget(m_pToolbarNetworkHost);

        m_pTabWidget->addTab(m_pTabHostOnly, QString());

        vboxLayout->addWidget(m_pTabWidget);


        retranslateUi(UIGlobalSettingsNetwork);

        QMetaObject::connectSlotsByName(UIGlobalSettingsNetwork);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsNetwork)
    {
#ifndef QT_NO_WHATSTHIS
        m_pTreeNetworkNAT->setWhatsThis(QApplication::translate("UIGlobalSettingsNetwork", "Lists all available NAT networks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabNAT), QApplication::translate("UIGlobalSettingsNetwork", "&NAT Networks", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_pTreeNetworkHost->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("UIGlobalSettingsNetwork", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pTreeNetworkHost->setWhatsThis(QApplication::translate("UIGlobalSettingsNetwork", "Lists all available host-only networks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabHostOnly), QApplication::translate("UIGlobalSettingsNetwork", "&Host-only Networks", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIGlobalSettingsNetwork);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsNetwork: public Ui_UIGlobalSettingsNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSNETWORK_H
