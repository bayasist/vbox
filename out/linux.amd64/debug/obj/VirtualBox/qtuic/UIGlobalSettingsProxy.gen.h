/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2011-2013 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIGlobalSettingsProxy.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSPROXY_H
#define UIGLOBALSETTINGSPROXY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "QILineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsProxy
{
public:
    QGridLayout *gridLayout;
    QCheckBox *m_pCheckboxProxy;
    QSpacerItem *spacerItem;
    QWidget *m_pContainerProxy;
    QHBoxLayout *hboxLayout;
    QLabel *m_pHostLabel;
    QILineEdit *m_pHostEditor;
    QLabel *m_pPortLabel;
    QILineEdit *m_pPortEditor;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *UIGlobalSettingsProxy)
    {
        if (UIGlobalSettingsProxy->objectName().isEmpty())
            UIGlobalSettingsProxy->setObjectName(QString::fromUtf8("UIGlobalSettingsProxy"));
        gridLayout = new QGridLayout(UIGlobalSettingsProxy);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pCheckboxProxy = new QCheckBox(UIGlobalSettingsProxy);
        m_pCheckboxProxy->setObjectName(QString::fromUtf8("m_pCheckboxProxy"));

        gridLayout->addWidget(m_pCheckboxProxy, 0, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        m_pContainerProxy = new QWidget(UIGlobalSettingsProxy);
        m_pContainerProxy->setObjectName(QString::fromUtf8("m_pContainerProxy"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pContainerProxy->sizePolicy().hasHeightForWidth());
        m_pContainerProxy->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(m_pContainerProxy);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        m_pHostLabel = new QLabel(m_pContainerProxy);
        m_pHostLabel->setObjectName(QString::fromUtf8("m_pHostLabel"));
        m_pHostLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(m_pHostLabel);

        m_pHostEditor = new QILineEdit(m_pContainerProxy);
        m_pHostEditor->setObjectName(QString::fromUtf8("m_pHostEditor"));

        hboxLayout->addWidget(m_pHostEditor);

        m_pPortLabel = new QLabel(m_pContainerProxy);
        m_pPortLabel->setObjectName(QString::fromUtf8("m_pPortLabel"));
        m_pPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(m_pPortLabel);

        m_pPortEditor = new QILineEdit(m_pContainerProxy);
        m_pPortEditor->setObjectName(QString::fromUtf8("m_pPortEditor"));

        hboxLayout->addWidget(m_pPortEditor);


        gridLayout->addWidget(m_pContainerProxy, 1, 1, 1, 2);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        m_pHostLabel->setBuddy(m_pHostEditor);
        m_pPortLabel->setBuddy(m_pPortEditor);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsProxy);

        QMetaObject::connectSlotsByName(UIGlobalSettingsProxy);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsProxy)
    {
#ifndef QT_NO_WHATSTHIS
        m_pCheckboxProxy->setWhatsThis(QApplication::translate("UIGlobalSettingsProxy", "When checked, VirtualBox will use the proxy settings supplied for tasks like downloading Guest Additions from the network or checking for updates.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckboxProxy->setText(QApplication::translate("UIGlobalSettingsProxy", "&Enable Proxy", 0, QApplication::UnicodeUTF8));
        m_pHostLabel->setText(QApplication::translate("UIGlobalSettingsProxy", "Ho&st:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pHostEditor->setWhatsThis(QApplication::translate("UIGlobalSettingsProxy", "Changes the proxy host.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pPortLabel->setText(QApplication::translate("UIGlobalSettingsProxy", "&Port:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pPortEditor->setWhatsThis(QApplication::translate("UIGlobalSettingsProxy", "Changes the proxy port.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIGlobalSettingsProxy);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsProxy: public Ui_UIGlobalSettingsProxy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSPROXY_H
