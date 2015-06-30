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
** Form generated from reading UI file 'UIMachineSettingsSF.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSSF_H
#define UIMACHINESETTINGSSF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QILabelSeparator.h"
#include "UIToolBar.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsSF
{
public:
    QVBoxLayout *vboxLayout;
    QILabelSeparator *mNameSeparator;
    QWidget *mTwFoldersContainer;
    QHBoxLayout *mLtFolders;
    QTreeWidget *mTwFolders;
    UIToolBar *m_pFoldersToolBar;

    void setupUi(QWidget *UIMachineSettingsSF)
    {
        if (UIMachineSettingsSF->objectName().isEmpty())
            UIMachineSettingsSF->setObjectName(QString::fromUtf8("UIMachineSettingsSF"));
        UIMachineSettingsSF->resize(300, 220);
        vboxLayout = new QVBoxLayout(UIMachineSettingsSF);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mNameSeparator = new QILabelSeparator(UIMachineSettingsSF);
        mNameSeparator->setObjectName(QString::fromUtf8("mNameSeparator"));

        vboxLayout->addWidget(mNameSeparator);

        mTwFoldersContainer = new QWidget(UIMachineSettingsSF);
        mTwFoldersContainer->setObjectName(QString::fromUtf8("mTwFoldersContainer"));
        mLtFolders = new QHBoxLayout(mTwFoldersContainer);
        mLtFolders->setSpacing(3);
        mLtFolders->setObjectName(QString::fromUtf8("mLtFolders"));
        mLtFolders->setContentsMargins(0, 0, 0, 0);
        mTwFolders = new QTreeWidget(mTwFoldersContainer);
        mTwFolders->setObjectName(QString::fromUtf8("mTwFolders"));
        mTwFolders->setMinimumSize(QSize(0, 200));
        mTwFolders->setContextMenuPolicy(Qt::CustomContextMenu);
        mTwFolders->setUniformRowHeights(true);
        mTwFolders->setAllColumnsShowFocus(true);

        mLtFolders->addWidget(mTwFolders);

        m_pFoldersToolBar = new UIToolBar(mTwFoldersContainer);
        m_pFoldersToolBar->setObjectName(QString::fromUtf8("m_pFoldersToolBar"));

        mLtFolders->addWidget(m_pFoldersToolBar);


        vboxLayout->addWidget(mTwFoldersContainer);

#ifndef QT_NO_SHORTCUT
        mNameSeparator->setBuddy(mTwFolders);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsSF);

        QMetaObject::connectSlotsByName(UIMachineSettingsSF);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsSF)
    {
        mNameSeparator->setText(QApplication::translate("UIMachineSettingsSF", "&Folders List", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mTwFolders->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("UIMachineSettingsSF", "Access", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("UIMachineSettingsSF", "Auto-mount", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("UIMachineSettingsSF", "Path", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("UIMachineSettingsSF", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mTwFolders->setWhatsThis(QApplication::translate("UIMachineSettingsSF", "Lists all shared folders accessible to this machine. Use 'net use x: \\\\vboxsvr\\share' to access a shared folder named <i>share</i> from a DOS-like OS, or 'mount -t vboxsf share mount_point' to access it from a Linux OS. This feature requires Guest Additions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIMachineSettingsSF);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsSF: public Ui_UIMachineSettingsSF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSSF_H
