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
** Form generated from reading UI file 'UIMachineSettingsSFDetails.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSSFDETAILS_H
#define UIMACHINESETTINGSSFDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include "QIDialogButtonBox.h"
#include "VBoxFilePathSelectorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsSFDetails
{
public:
    QGridLayout *gridLayout;
    QLabel *mLbPath;
    VBoxFilePathSelectorWidget *mPsPath;
    QLabel *mLbName;
    QLineEdit *mLeName;
    QCheckBox *mCbReadonly;
    QCheckBox *mCbAutoMount;
    QCheckBox *mCbPermanent;
    QSpacerItem *spacerItem;
    QIDialogButtonBox *mButtonBox;

    void setupUi(QDialog *UIMachineSettingsSFDetails)
    {
        if (UIMachineSettingsSFDetails->objectName().isEmpty())
            UIMachineSettingsSFDetails->setObjectName(QString::fromUtf8("UIMachineSettingsSFDetails"));
        UIMachineSettingsSFDetails->resize(218, 196);
        gridLayout = new QGridLayout(UIMachineSettingsSFDetails);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLbPath = new QLabel(UIMachineSettingsSFDetails);
        mLbPath->setObjectName(QString::fromUtf8("mLbPath"));
        mLbPath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbPath, 0, 0, 1, 1);

        mPsPath = new VBoxFilePathSelectorWidget(UIMachineSettingsSFDetails);
        mPsPath->setObjectName(QString::fromUtf8("mPsPath"));

        gridLayout->addWidget(mPsPath, 0, 1, 1, 1);

        mLbName = new QLabel(UIMachineSettingsSFDetails);
        mLbName->setObjectName(QString::fromUtf8("mLbName"));
        mLbName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbName, 1, 0, 1, 1);

        mLeName = new QLineEdit(UIMachineSettingsSFDetails);
        mLeName->setObjectName(QString::fromUtf8("mLeName"));

        gridLayout->addWidget(mLeName, 1, 1, 1, 1);

        mCbReadonly = new QCheckBox(UIMachineSettingsSFDetails);
        mCbReadonly->setObjectName(QString::fromUtf8("mCbReadonly"));

        gridLayout->addWidget(mCbReadonly, 2, 1, 1, 1);

        mCbAutoMount = new QCheckBox(UIMachineSettingsSFDetails);
        mCbAutoMount->setObjectName(QString::fromUtf8("mCbAutoMount"));

        gridLayout->addWidget(mCbAutoMount, 3, 1, 1, 1);

        mCbPermanent = new QCheckBox(UIMachineSettingsSFDetails);
        mCbPermanent->setObjectName(QString::fromUtf8("mCbPermanent"));

        gridLayout->addWidget(mCbPermanent, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);

        mButtonBox = new QIDialogButtonBox(UIMachineSettingsSFDetails);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 6, 0, 1, 2);


        retranslateUi(UIMachineSettingsSFDetails);
        QObject::connect(mButtonBox, SIGNAL(accepted()), UIMachineSettingsSFDetails, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), UIMachineSettingsSFDetails, SLOT(reject()));

        QMetaObject::connectSlotsByName(UIMachineSettingsSFDetails);
    } // setupUi

    void retranslateUi(QDialog *UIMachineSettingsSFDetails)
    {
        UIMachineSettingsSFDetails->setWindowTitle(QApplication::translate("UIMachineSettingsSFDetails", "Window", 0, QApplication::UnicodeUTF8));
        mLbPath->setText(QApplication::translate("UIMachineSettingsSFDetails", "Folder Path:", 0, QApplication::UnicodeUTF8));
        mLbName->setText(QApplication::translate("UIMachineSettingsSFDetails", "Folder Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeName->setToolTip(QApplication::translate("UIMachineSettingsSFDetails", "Holds the name of the shared folder (as it will be seen by the guest OS).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mCbReadonly->setToolTip(QApplication::translate("UIMachineSettingsSFDetails", "When checked, the guest OS will not be able to write to the specified shared folder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCbReadonly->setText(QApplication::translate("UIMachineSettingsSFDetails", "&Read-only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCbAutoMount->setToolTip(QApplication::translate("UIMachineSettingsSFDetails", "When checked, the guest OS will try to automatically mount the shared folder on startup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCbAutoMount->setText(QApplication::translate("UIMachineSettingsSFDetails", "&Auto-mount", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCbPermanent->setToolTip(QApplication::translate("UIMachineSettingsSFDetails", "If checked, this shared folder will be permanent.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCbPermanent->setText(QApplication::translate("UIMachineSettingsSFDetails", "&Make Permanent", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsSFDetails: public Ui_UIMachineSettingsSFDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSSFDETAILS_H
