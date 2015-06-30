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
** Form generated from reading UI file 'UIGlobalSettingsLanguage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSLANGUAGE_H
#define UIGLOBALSETTINGSLANGUAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "QILabelSeparator.h"
#include "QIRichTextLabel.h"
#include "QITreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsLanguage
{
public:
    QGridLayout *gridLayout;
    QILabelSeparator *m_pLanguageLabel;
    QITreeWidget *m_pLanguageTree;
    QIRichTextLabel *m_pLanguageInfo;

    void setupUi(QWidget *UIGlobalSettingsLanguage)
    {
        if (UIGlobalSettingsLanguage->objectName().isEmpty())
            UIGlobalSettingsLanguage->setObjectName(QString::fromUtf8("UIGlobalSettingsLanguage"));
        gridLayout = new QGridLayout(UIGlobalSettingsLanguage);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pLanguageLabel = new QILabelSeparator(UIGlobalSettingsLanguage);
        m_pLanguageLabel->setObjectName(QString::fromUtf8("m_pLanguageLabel"));

        gridLayout->addWidget(m_pLanguageLabel, 0, 0, 1, 1);

        m_pLanguageTree = new QITreeWidget(UIGlobalSettingsLanguage);
        m_pLanguageTree->setObjectName(QString::fromUtf8("m_pLanguageTree"));
        m_pLanguageTree->setRootIsDecorated(false);

        gridLayout->addWidget(m_pLanguageTree, 1, 0, 1, 1);

        m_pLanguageInfo = new QIRichTextLabel(UIGlobalSettingsLanguage);
        m_pLanguageInfo->setObjectName(QString::fromUtf8("m_pLanguageInfo"));

        gridLayout->addWidget(m_pLanguageInfo, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        m_pLanguageLabel->setBuddy(m_pLanguageTree);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsLanguage);

        QMetaObject::connectSlotsByName(UIGlobalSettingsLanguage);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsLanguage)
    {
        m_pLanguageLabel->setText(QApplication::translate("UIGlobalSettingsLanguage", "&Interface Languages", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_pLanguageTree->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("UIGlobalSettingsLanguage", "Author", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("UIGlobalSettingsLanguage", "Language", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("UIGlobalSettingsLanguage", "Id", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("UIGlobalSettingsLanguage", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pLanguageTree->setWhatsThis(QApplication::translate("UIGlobalSettingsLanguage", "Lists all available user interface languages. The effective language is written in <b>bold</b>. Select <i>Default</i> to reset to the system default language.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIGlobalSettingsLanguage);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsLanguage: public Ui_UIGlobalSettingsLanguage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSLANGUAGE_H
