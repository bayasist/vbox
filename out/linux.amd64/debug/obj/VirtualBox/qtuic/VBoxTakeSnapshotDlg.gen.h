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
** Form generated from reading UI file 'VBoxTakeSnapshotDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VBOXTAKESNAPSHOTDLG_H
#define VBOXTAKESNAPSHOTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include "QIDialogButtonBox.h"
#include "QILabel.h"

QT_BEGIN_NAMESPACE

class Ui_VBoxTakeSnapshotDlg
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *mLbIcon;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QLabel *mLbName;
    QLineEdit *mLeName;
    QVBoxLayout *vboxLayout2;
    QLabel *mLbDescription;
    QTextEdit *mTeDescription;
    QILabel *mLbInfo;
    QIDialogButtonBox *mButtonBox;

    void setupUi(QDialog *VBoxTakeSnapshotDlg)
    {
        if (VBoxTakeSnapshotDlg->objectName().isEmpty())
            VBoxTakeSnapshotDlg->setObjectName(QString::fromUtf8("VBoxTakeSnapshotDlg"));
        VBoxTakeSnapshotDlg->resize(300, 240);
        gridLayout = new QGridLayout(VBoxTakeSnapshotDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mLbIcon = new QLabel(VBoxTakeSnapshotDlg);
        mLbIcon->setObjectName(QString::fromUtf8("mLbIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLbIcon->sizePolicy().hasHeightForWidth());
        mLbIcon->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(mLbIcon);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addLayout(vboxLayout, 0, 0, 2, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(2);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        mLbName = new QLabel(VBoxTakeSnapshotDlg);
        mLbName->setObjectName(QString::fromUtf8("mLbName"));

        vboxLayout1->addWidget(mLbName);

        mLeName = new QLineEdit(VBoxTakeSnapshotDlg);
        mLeName->setObjectName(QString::fromUtf8("mLeName"));

        vboxLayout1->addWidget(mLeName);


        gridLayout->addLayout(vboxLayout1, 0, 1, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        mLbDescription = new QLabel(VBoxTakeSnapshotDlg);
        mLbDescription->setObjectName(QString::fromUtf8("mLbDescription"));

        vboxLayout2->addWidget(mLbDescription);

        mTeDescription = new QTextEdit(VBoxTakeSnapshotDlg);
        mTeDescription->setObjectName(QString::fromUtf8("mTeDescription"));

        vboxLayout2->addWidget(mTeDescription);


        gridLayout->addLayout(vboxLayout2, 1, 1, 1, 1);

        mLbInfo = new QILabel(VBoxTakeSnapshotDlg);
        mLbInfo->setObjectName(QString::fromUtf8("mLbInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLbInfo->sizePolicy().hasHeightForWidth());
        mLbInfo->setSizePolicy(sizePolicy1);
        mLbInfo->setWordWrap(true);

        gridLayout->addWidget(mLbInfo, 2, 0, 1, 2);

        mButtonBox = new QIDialogButtonBox(VBoxTakeSnapshotDlg);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 3, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        mLbName->setBuddy(mLeName);
        mLbDescription->setBuddy(mTeDescription);
#endif // QT_NO_SHORTCUT

        retranslateUi(VBoxTakeSnapshotDlg);
        QObject::connect(mButtonBox, SIGNAL(accepted()), VBoxTakeSnapshotDlg, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), VBoxTakeSnapshotDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(VBoxTakeSnapshotDlg);
    } // setupUi

    void retranslateUi(QDialog *VBoxTakeSnapshotDlg)
    {
        VBoxTakeSnapshotDlg->setWindowTitle(QApplication::translate("VBoxTakeSnapshotDlg", "Take Snapshot of Virtual Machine", 0, QApplication::UnicodeUTF8));
        mLbName->setText(QApplication::translate("VBoxTakeSnapshotDlg", "Snapshot &Name", 0, QApplication::UnicodeUTF8));
        mLbDescription->setText(QApplication::translate("VBoxTakeSnapshotDlg", "Snapshot &Description", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VBoxTakeSnapshotDlg: public Ui_VBoxTakeSnapshotDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VBOXTAKESNAPSHOTDLG_H
