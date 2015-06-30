/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2010-2013 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIGlobalSettingsExtension.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSEXTENSION_H
#define UIGLOBALSETTINGSEXTENSION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "QILabelSeparator.h"
#include "UIToolBar.h"

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsExtension
{
public:
    QGridLayout *gridLayout;
    QILabelSeparator *m_pEntensionLabel;
    QWidget *m_pExtensionPackContainer;
    QHBoxLayout *m_pLayout1;
    QTreeWidget *m_pPackagesTree;
    UIToolBar *m_pPackagesToolbar;

    void setupUi(QWidget *UIGlobalSettingsExtension)
    {
        if (UIGlobalSettingsExtension->objectName().isEmpty())
            UIGlobalSettingsExtension->setObjectName(QString::fromUtf8("UIGlobalSettingsExtension"));
        gridLayout = new QGridLayout(UIGlobalSettingsExtension);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pEntensionLabel = new QILabelSeparator(UIGlobalSettingsExtension);
        m_pEntensionLabel->setObjectName(QString::fromUtf8("m_pEntensionLabel"));

        gridLayout->addWidget(m_pEntensionLabel, 0, 0, 1, 1);

        m_pExtensionPackContainer = new QWidget(UIGlobalSettingsExtension);
        m_pExtensionPackContainer->setObjectName(QString::fromUtf8("m_pExtensionPackContainer"));
        m_pLayout1 = new QHBoxLayout(m_pExtensionPackContainer);
        m_pLayout1->setSpacing(3);
        m_pLayout1->setContentsMargins(0, 0, 0, 0);
        m_pLayout1->setObjectName(QString::fromUtf8("m_pLayout1"));
        m_pPackagesTree = new QTreeWidget(m_pExtensionPackContainer);
        m_pPackagesTree->setObjectName(QString::fromUtf8("m_pPackagesTree"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pPackagesTree->sizePolicy().hasHeightForWidth());
        m_pPackagesTree->setSizePolicy(sizePolicy);
        m_pPackagesTree->setMinimumSize(QSize(0, 150));
        m_pPackagesTree->setRootIsDecorated(false);

        m_pLayout1->addWidget(m_pPackagesTree);

        m_pPackagesToolbar = new UIToolBar(m_pExtensionPackContainer);
        m_pPackagesToolbar->setObjectName(QString::fromUtf8("m_pPackagesToolbar"));

        m_pLayout1->addWidget(m_pPackagesToolbar);


        gridLayout->addWidget(m_pExtensionPackContainer, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        m_pEntensionLabel->setBuddy(m_pPackagesTree);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsExtension);

        QMetaObject::connectSlotsByName(UIGlobalSettingsExtension);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsExtension)
    {
        m_pEntensionLabel->setText(QApplication::translate("UIGlobalSettingsExtension", "&Extension Packages", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_pPackagesTree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("UIGlobalSettingsExtension", "Version", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("UIGlobalSettingsExtension", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("UIGlobalSettingsExtension", "Active", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pPackagesTree->setWhatsThis(QApplication::translate("UIGlobalSettingsExtension", "Lists all installed packages.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIGlobalSettingsExtension);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsExtension: public Ui_UIGlobalSettingsExtension {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSEXTENSION_H
