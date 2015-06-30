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
** Form generated from reading UI file 'UIGlobalSettingsInput.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSINPUT_H
#define UIGLOBALSETTINGSINPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsInput
{
public:
    QGridLayout *m_pMainLayout;
    QCheckBox *m_pEnableAutoGrabCheckbox;

    void setupUi(QWidget *UIGlobalSettingsInput)
    {
        if (UIGlobalSettingsInput->objectName().isEmpty())
            UIGlobalSettingsInput->setObjectName(QString::fromUtf8("UIGlobalSettingsInput"));
        m_pMainLayout = new QGridLayout(UIGlobalSettingsInput);
        m_pMainLayout->setContentsMargins(0, 0, 0, 0);
        m_pMainLayout->setObjectName(QString::fromUtf8("m_pMainLayout"));
        m_pEnableAutoGrabCheckbox = new QCheckBox(UIGlobalSettingsInput);
        m_pEnableAutoGrabCheckbox->setObjectName(QString::fromUtf8("m_pEnableAutoGrabCheckbox"));

        m_pMainLayout->addWidget(m_pEnableAutoGrabCheckbox, 1, 0, 1, 1);


        retranslateUi(UIGlobalSettingsInput);

        QMetaObject::connectSlotsByName(UIGlobalSettingsInput);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsInput)
    {
#ifndef QT_NO_WHATSTHIS
        m_pEnableAutoGrabCheckbox->setWhatsThis(QApplication::translate("UIGlobalSettingsInput", "When checked, the keyboard is automatically captured every time the VM window is activated. When the keyboard is captured, all keystrokes (including system ones like Alt-Tab) are directed to the VM.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pEnableAutoGrabCheckbox->setText(QApplication::translate("UIGlobalSettingsInput", "&Auto Capture Keyboard", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIGlobalSettingsInput);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsInput: public Ui_UIGlobalSettingsInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSINPUT_H
