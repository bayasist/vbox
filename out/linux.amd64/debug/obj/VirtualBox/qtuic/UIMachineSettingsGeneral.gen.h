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
** Form generated from reading UI file 'UIMachineSettingsGeneral.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSGENERAL_H
#define UIMACHINESETTINGSGENERAL_H

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
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QITabWidget.h"
#include "UINameAndSystemEditor.h"
#include "VBoxFilePathSelectorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsGeneral
{
public:
    QHBoxLayout *mLtMain;
    QITabWidget *mTwGeneral;
    QWidget *mTabBasic;
    QVBoxLayout *mLtBasic;
    UINameAndSystemEditor *m_pNameAndSystemEditor;
    QSpacerItem *mSpVer1;
    QWidget *mTabAdvanced;
    QVBoxLayout *mLtAdvanced;
    QWidget *mWtAdvanced;
    QGridLayout *mLtAdvancedItems;
    QLabel *mLbSnapshot;
    VBoxFilePathSelectorWidget *mPsSnapshot;
    QLabel *mLbClipboard;
    QComboBox *mCbClipboard;
    QSpacerItem *mSpHor1;
    QLabel *mLbDragAndDrop;
    QComboBox *mCbDragAndDrop;
    QSpacerItem *mSpHor2;
    QLabel *mLbMedia;
    QCheckBox *mCbSaveMounted;
    QLabel *mLbToolBar;
    QCheckBox *mCbShowToolBar;
    QCheckBox *mCbToolBarAlignment;
    QSpacerItem *mSpVer3;
    QWidget *mTabDescription;
    QVBoxLayout *mLtDescription;
    QTextEdit *mTeDescription;

    void setupUi(QWidget *UIMachineSettingsGeneral)
    {
        if (UIMachineSettingsGeneral->objectName().isEmpty())
            UIMachineSettingsGeneral->setObjectName(QString::fromUtf8("UIMachineSettingsGeneral"));
        UIMachineSettingsGeneral->resize(350, 250);
        mLtMain = new QHBoxLayout(UIMachineSettingsGeneral);
        mLtMain->setObjectName(QString::fromUtf8("mLtMain"));
        mTwGeneral = new QITabWidget(UIMachineSettingsGeneral);
        mTwGeneral->setObjectName(QString::fromUtf8("mTwGeneral"));
        mTabBasic = new QWidget();
        mTabBasic->setObjectName(QString::fromUtf8("mTabBasic"));
        mLtBasic = new QVBoxLayout(mTabBasic);
        mLtBasic->setSpacing(0);
        mLtBasic->setObjectName(QString::fromUtf8("mLtBasic"));
        m_pNameAndSystemEditor = new UINameAndSystemEditor(mTabBasic);
        m_pNameAndSystemEditor->setObjectName(QString::fromUtf8("m_pNameAndSystemEditor"));

        mLtBasic->addWidget(m_pNameAndSystemEditor);

        mSpVer1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLtBasic->addItem(mSpVer1);

        mTwGeneral->addTab(mTabBasic, QString());
        mTabAdvanced = new QWidget();
        mTabAdvanced->setObjectName(QString::fromUtf8("mTabAdvanced"));
        mLtAdvanced = new QVBoxLayout(mTabAdvanced);
        mLtAdvanced->setSpacing(0);
        mLtAdvanced->setObjectName(QString::fromUtf8("mLtAdvanced"));
        mWtAdvanced = new QWidget(mTabAdvanced);
        mWtAdvanced->setObjectName(QString::fromUtf8("mWtAdvanced"));
        mLtAdvancedItems = new QGridLayout(mWtAdvanced);
        mLtAdvancedItems->setContentsMargins(0, 0, 0, 0);
        mLtAdvancedItems->setObjectName(QString::fromUtf8("mLtAdvancedItems"));
        mLbSnapshot = new QLabel(mWtAdvanced);
        mLbSnapshot->setObjectName(QString::fromUtf8("mLbSnapshot"));
        mLbSnapshot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAdvancedItems->addWidget(mLbSnapshot, 0, 0, 1, 1);

        mPsSnapshot = new VBoxFilePathSelectorWidget(mWtAdvanced);
        mPsSnapshot->setObjectName(QString::fromUtf8("mPsSnapshot"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPsSnapshot->sizePolicy().hasHeightForWidth());
        mPsSnapshot->setSizePolicy(sizePolicy);

        mLtAdvancedItems->addWidget(mPsSnapshot, 0, 1, 1, 2);

        mLbClipboard = new QLabel(mWtAdvanced);
        mLbClipboard->setObjectName(QString::fromUtf8("mLbClipboard"));
        mLbClipboard->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAdvancedItems->addWidget(mLbClipboard, 1, 0, 1, 1);

        mCbClipboard = new QComboBox(mWtAdvanced);
        mCbClipboard->setObjectName(QString::fromUtf8("mCbClipboard"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCbClipboard->sizePolicy().hasHeightForWidth());
        mCbClipboard->setSizePolicy(sizePolicy1);

        mLtAdvancedItems->addWidget(mCbClipboard, 1, 1, 1, 1);

        mSpHor1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mLtAdvancedItems->addItem(mSpHor1, 1, 2, 1, 1);

        mLbDragAndDrop = new QLabel(mWtAdvanced);
        mLbDragAndDrop->setObjectName(QString::fromUtf8("mLbDragAndDrop"));
        mLbDragAndDrop->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAdvancedItems->addWidget(mLbDragAndDrop, 2, 0, 1, 1);

        mCbDragAndDrop = new QComboBox(mWtAdvanced);
        mCbDragAndDrop->setObjectName(QString::fromUtf8("mCbDragAndDrop"));
        sizePolicy1.setHeightForWidth(mCbDragAndDrop->sizePolicy().hasHeightForWidth());
        mCbDragAndDrop->setSizePolicy(sizePolicy1);

        mLtAdvancedItems->addWidget(mCbDragAndDrop, 2, 1, 1, 1);

        mSpHor2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mLtAdvancedItems->addItem(mSpHor2, 2, 2, 1, 1);

        mLbMedia = new QLabel(mWtAdvanced);
        mLbMedia->setObjectName(QString::fromUtf8("mLbMedia"));
        mLbMedia->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAdvancedItems->addWidget(mLbMedia, 3, 0, 1, 1);

        mCbSaveMounted = new QCheckBox(mWtAdvanced);
        mCbSaveMounted->setObjectName(QString::fromUtf8("mCbSaveMounted"));
        sizePolicy.setHeightForWidth(mCbSaveMounted->sizePolicy().hasHeightForWidth());
        mCbSaveMounted->setSizePolicy(sizePolicy);
        mCbSaveMounted->setChecked(true);

        mLtAdvancedItems->addWidget(mCbSaveMounted, 3, 1, 1, 1);

        mLbToolBar = new QLabel(mWtAdvanced);
        mLbToolBar->setObjectName(QString::fromUtf8("mLbToolBar"));
        mLbToolBar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAdvancedItems->addWidget(mLbToolBar, 4, 0, 1, 1);

        mCbShowToolBar = new QCheckBox(mWtAdvanced);
        mCbShowToolBar->setObjectName(QString::fromUtf8("mCbShowToolBar"));
        sizePolicy.setHeightForWidth(mCbShowToolBar->sizePolicy().hasHeightForWidth());
        mCbShowToolBar->setSizePolicy(sizePolicy);
        mCbShowToolBar->setChecked(true);

        mLtAdvancedItems->addWidget(mCbShowToolBar, 4, 1, 1, 1);

        mCbToolBarAlignment = new QCheckBox(mWtAdvanced);
        mCbToolBarAlignment->setObjectName(QString::fromUtf8("mCbToolBarAlignment"));
        sizePolicy.setHeightForWidth(mCbToolBarAlignment->sizePolicy().hasHeightForWidth());
        mCbToolBarAlignment->setSizePolicy(sizePolicy);
        mCbToolBarAlignment->setChecked(false);

        mLtAdvancedItems->addWidget(mCbToolBarAlignment, 5, 1, 1, 1);


        mLtAdvanced->addWidget(mWtAdvanced);

        mSpVer3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLtAdvanced->addItem(mSpVer3);

        mTwGeneral->addTab(mTabAdvanced, QString());
        mTabDescription = new QWidget();
        mTabDescription->setObjectName(QString::fromUtf8("mTabDescription"));
        mLtDescription = new QVBoxLayout(mTabDescription);
        mLtDescription->setSpacing(0);
        mLtDescription->setObjectName(QString::fromUtf8("mLtDescription"));
        mTeDescription = new QTextEdit(mTabDescription);
        mTeDescription->setObjectName(QString::fromUtf8("mTeDescription"));
        mTeDescription->setAcceptRichText(false);

        mLtDescription->addWidget(mTeDescription);

        mTwGeneral->addTab(mTabDescription, QString());

        mLtMain->addWidget(mTwGeneral);

#ifndef QT_NO_SHORTCUT
        mLbSnapshot->setBuddy(mPsSnapshot);
        mLbClipboard->setBuddy(mCbClipboard);
        mLbDragAndDrop->setBuddy(mCbDragAndDrop);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsGeneral);
        QObject::connect(mCbShowToolBar, SIGNAL(toggled(bool)), mCbToolBarAlignment, SLOT(setEnabled(bool)));

        mTwGeneral->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UIMachineSettingsGeneral);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsGeneral)
    {
        mTwGeneral->setTabText(mTwGeneral->indexOf(mTabBasic), QApplication::translate("UIMachineSettingsGeneral", "&Basic", 0, QApplication::UnicodeUTF8));
        mLbSnapshot->setText(QApplication::translate("UIMachineSettingsGeneral", "S&napshot Folder:", 0, QApplication::UnicodeUTF8));
        mLbClipboard->setText(QApplication::translate("UIMachineSettingsGeneral", "&Shared Clipboard:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbClipboard->setWhatsThis(QApplication::translate("UIMachineSettingsGeneral", "Selects which clipboard data will be copied between the guest and the host OS. This feature requires Guest Additions to be installed in the guest OS.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbDragAndDrop->setText(QApplication::translate("UIMachineSettingsGeneral", "&Drag'n'Drop:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbDragAndDrop->setWhatsThis(QApplication::translate("UIMachineSettingsGeneral", "Selects which data will be copied between the guest and the host OS by drag'n'drop. This feature requires Guest Additions to be installed in the guest OS.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbMedia->setText(QApplication::translate("UIMachineSettingsGeneral", "Removable Media:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbSaveMounted->setWhatsThis(QApplication::translate("UIMachineSettingsGeneral", "If checked, any CD/DVD or floppy disks inserted into or removed from the virtual drives while the machine is running will be remembered.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbSaveMounted->setText(QApplication::translate("UIMachineSettingsGeneral", "&Remember Runtime Changes", 0, QApplication::UnicodeUTF8));
        mLbToolBar->setText(QApplication::translate("UIMachineSettingsGeneral", "Mini ToolBar:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbShowToolBar->setWhatsThis(QApplication::translate("UIMachineSettingsGeneral", "If checked, show the Mini ToolBar in Fullscreen and Seamless modes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbShowToolBar->setText(QApplication::translate("UIMachineSettingsGeneral", "Show in &Fullscreen/Seamless", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbToolBarAlignment->setWhatsThis(QApplication::translate("UIMachineSettingsGeneral", "If checked, show the Mini ToolBar at the top of the screen, rather than in its default position at the bottom of the screen.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbToolBarAlignment->setText(QApplication::translate("UIMachineSettingsGeneral", "Show at &Top of Screen", 0, QApplication::UnicodeUTF8));
        mTwGeneral->setTabText(mTwGeneral->indexOf(mTabAdvanced), QApplication::translate("UIMachineSettingsGeneral", "&Advanced", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mTeDescription->setWhatsThis(QApplication::translate("UIMachineSettingsGeneral", "Holds the description of the virtual machine. The description field is useful for commenting on configuration details of the installed guest OS.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mTwGeneral->setTabText(mTwGeneral->indexOf(mTabDescription), QApplication::translate("UIMachineSettingsGeneral", "&Description", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIMachineSettingsGeneral);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsGeneral: public Ui_UIMachineSettingsGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSGENERAL_H
