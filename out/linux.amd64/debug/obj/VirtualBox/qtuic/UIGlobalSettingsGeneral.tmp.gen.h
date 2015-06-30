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
** Form generated from reading UI file 'UIGlobalSettingsGeneral.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSGENERAL_H
#define UIGLOBALSETTINGSGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "VBoxFilePathSelectorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsGeneral
{
public:
    QGridLayout *gridLayout;
    QLabel *m_pLabelMachineFolder;
    VBoxFilePathSelectorWidget *m_pSelectorMachineFolder;
    QLabel *m_pLabelVRDPLibName;
    VBoxFilePathSelectorWidget *m_pSelectorVRDPLibName;
    QLabel *m_pLabelPresentationMode;
    QCheckBox *m_pCheckBoxPresentationMode;
    QLabel *m_pLabelHostScreenSaver;
    QCheckBox *m_pCheckBoxHostScreenSaver;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *UIGlobalSettingsGeneral)
    {
        if (UIGlobalSettingsGeneral->objectName().isEmpty())
            UIGlobalSettingsGeneral->setObjectName(QString::fromUtf8("UIGlobalSettingsGeneral"));
        gridLayout = new QGridLayout(UIGlobalSettingsGeneral);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pLabelMachineFolder = new QLabel(UIGlobalSettingsGeneral);
        m_pLabelMachineFolder->setObjectName(QString::fromUtf8("m_pLabelMachineFolder"));
        m_pLabelMachineFolder->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelMachineFolder, 0, 0, 1, 1);

        m_pSelectorMachineFolder = new VBoxFilePathSelectorWidget(UIGlobalSettingsGeneral);
        m_pSelectorMachineFolder->setObjectName(QString::fromUtf8("m_pSelectorMachineFolder"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pSelectorMachineFolder->sizePolicy().hasHeightForWidth());
        m_pSelectorMachineFolder->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_pSelectorMachineFolder, 0, 1, 1, 2);

        m_pLabelVRDPLibName = new QLabel(UIGlobalSettingsGeneral);
        m_pLabelVRDPLibName->setObjectName(QString::fromUtf8("m_pLabelVRDPLibName"));
        m_pLabelVRDPLibName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelVRDPLibName, 1, 0, 1, 1);

        m_pSelectorVRDPLibName = new VBoxFilePathSelectorWidget(UIGlobalSettingsGeneral);
        m_pSelectorVRDPLibName->setObjectName(QString::fromUtf8("m_pSelectorVRDPLibName"));
        sizePolicy.setHeightForWidth(m_pSelectorVRDPLibName->sizePolicy().hasHeightForWidth());
        m_pSelectorVRDPLibName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_pSelectorVRDPLibName, 1, 1, 1, 2);

        m_pLabelPresentationMode = new QLabel(UIGlobalSettingsGeneral);
        m_pLabelPresentationMode->setObjectName(QString::fromUtf8("m_pLabelPresentationMode"));
        m_pLabelPresentationMode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelPresentationMode, 2, 0, 1, 1);

        m_pCheckBoxPresentationMode = new QCheckBox(UIGlobalSettingsGeneral);
        m_pCheckBoxPresentationMode->setObjectName(QString::fromUtf8("m_pCheckBoxPresentationMode"));

        gridLayout->addWidget(m_pCheckBoxPresentationMode, 2, 1, 1, 1);

        m_pLabelHostScreenSaver = new QLabel(UIGlobalSettingsGeneral);
        m_pLabelHostScreenSaver->setObjectName(QString::fromUtf8("m_pLabelHostScreenSaver"));
        m_pLabelHostScreenSaver->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelHostScreenSaver, 3, 0, 1, 1);

        m_pCheckBoxHostScreenSaver = new QCheckBox(UIGlobalSettingsGeneral);
        m_pCheckBoxHostScreenSaver->setObjectName(QString::fromUtf8("m_pCheckBoxHostScreenSaver"));

        gridLayout->addWidget(m_pCheckBoxHostScreenSaver, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        m_pLabelMachineFolder->setBuddy(m_pSelectorMachineFolder);
        m_pLabelVRDPLibName->setBuddy(m_pSelectorVRDPLibName);
        m_pLabelPresentationMode->setBuddy(m_pCheckBoxPresentationMode);
        m_pLabelHostScreenSaver->setBuddy(m_pCheckBoxHostScreenSaver);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsGeneral);

        QMetaObject::connectSlotsByName(UIGlobalSettingsGeneral);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsGeneral)
    {
        m_pLabelMachineFolder->setText(QApplication::translate("UIGlobalSettingsGeneral", "Default &Machine Folder:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSelectorMachineFolder->setWhatsThis(QApplication::translate("UIGlobalSettingsGeneral", "Holds the path to the default virtual machine folder. This folder is used, if not explicitly specified otherwise, when creating new virtual machines.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelVRDPLibName->setText(QApplication::translate("UIGlobalSettingsGeneral", "V&RDP Authentication Library:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSelectorVRDPLibName->setWhatsThis(QApplication::translate("UIGlobalSettingsGeneral", "Holds the path to the library that provides authentication for Remote Display (VRDP) clients.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelPresentationMode->setText(QApplication::translate("UIGlobalSettingsGeneral", "&Dock and Menubar:", 0, QApplication::UnicodeUTF8));
        m_pCheckBoxPresentationMode->setText(QApplication::translate("UIGlobalSettingsGeneral", "Auto-Show in Fullscreen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxPresentationMode->setWhatsThis(QApplication::translate("UIGlobalSettingsGeneral", "When checked, the host dock and menu bar will be shown when the virtual machine is in fullscreen mode.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelHostScreenSaver->setText(QApplication::translate("UIGlobalSettingsGeneral", "&Host Screensaver:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxHostScreenSaver->setWhatsThis(QApplication::translate("UIGlobalSettingsGeneral", "When checked, the host screensaver will be disabled whenever a virtual machine is running.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxHostScreenSaver->setText(QApplication::translate("UIGlobalSettingsGeneral", "Disable When Running Virtual Machines", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIGlobalSettingsGeneral);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsGeneral: public Ui_UIGlobalSettingsGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSGENERAL_H
