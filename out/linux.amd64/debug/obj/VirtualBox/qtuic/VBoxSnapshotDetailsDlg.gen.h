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
** Form generated from reading UI file 'VBoxSnapshotDetailsDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VBOXSNAPSHOTDETAILSDLG_H
#define VBOXSNAPSHOTDETAILSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include "QIDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_VBoxSnapshotDetailsDlg
{
public:
    QGridLayout *gridLayout;
    QLabel *mLbName;
    QLineEdit *mLeName;
    QLabel *mLbThumbnail;
    QLabel *mLbTaken;
    QLabel *mTxTaken;
    QLabel *mLbDescription;
    QTextEdit *mTeDescription;
    QLabel *mLbDetails;
    QTextEdit *mTeDetails;
    QIDialogButtonBox *mButtonBox;

    void setupUi(QDialog *VBoxSnapshotDetailsDlg)
    {
        if (VBoxSnapshotDetailsDlg->objectName().isEmpty())
            VBoxSnapshotDetailsDlg->setObjectName(QString::fromUtf8("VBoxSnapshotDetailsDlg"));
        VBoxSnapshotDetailsDlg->resize(450, 450);
        const QIcon icon = QIcon(QString::fromUtf8(":/snapshot_show_details_16px.png"));
        VBoxSnapshotDetailsDlg->setWindowIcon(icon);
        gridLayout = new QGridLayout(VBoxSnapshotDetailsDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLbName = new QLabel(VBoxSnapshotDetailsDlg);
        mLbName->setObjectName(QString::fromUtf8("mLbName"));
        mLbName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbName, 0, 0, 1, 1);

        mLeName = new QLineEdit(VBoxSnapshotDetailsDlg);
        mLeName->setObjectName(QString::fromUtf8("mLeName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLeName->sizePolicy().hasHeightForWidth());
        mLeName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLeName, 0, 1, 1, 1);

        mLbThumbnail = new QLabel(VBoxSnapshotDetailsDlg);
        mLbThumbnail->setObjectName(QString::fromUtf8("mLbThumbnail"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLbThumbnail->sizePolicy().hasHeightForWidth());
        mLbThumbnail->setSizePolicy(sizePolicy1);
        mLbThumbnail->setFrameShape(QFrame::Panel);
        mLbThumbnail->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(mLbThumbnail, 0, 2, 2, 1);

        mLbTaken = new QLabel(VBoxSnapshotDetailsDlg);
        mLbTaken->setObjectName(QString::fromUtf8("mLbTaken"));
        mLbTaken->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbTaken, 1, 0, 1, 1);

        mTxTaken = new QLabel(VBoxSnapshotDetailsDlg);
        mTxTaken->setObjectName(QString::fromUtf8("mTxTaken"));
        sizePolicy.setHeightForWidth(mTxTaken->sizePolicy().hasHeightForWidth());
        mTxTaken->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mTxTaken, 1, 1, 1, 1);

        mLbDescription = new QLabel(VBoxSnapshotDetailsDlg);
        mLbDescription->setObjectName(QString::fromUtf8("mLbDescription"));
        mLbDescription->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignTop);

        gridLayout->addWidget(mLbDescription, 2, 0, 1, 1);

        mTeDescription = new QTextEdit(VBoxSnapshotDetailsDlg);
        mTeDescription->setObjectName(QString::fromUtf8("mTeDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(mTeDescription->sizePolicy().hasHeightForWidth());
        mTeDescription->setSizePolicy(sizePolicy2);
        mTeDescription->setTabChangesFocus(true);
        mTeDescription->setAcceptRichText(false);

        gridLayout->addWidget(mTeDescription, 2, 1, 1, 2);

        mLbDetails = new QLabel(VBoxSnapshotDetailsDlg);
        mLbDetails->setObjectName(QString::fromUtf8("mLbDetails"));
        mLbDetails->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignTop);

        gridLayout->addWidget(mLbDetails, 3, 0, 1, 1);

        mTeDetails = new QTextEdit(VBoxSnapshotDetailsDlg);
        mTeDetails->setObjectName(QString::fromUtf8("mTeDetails"));
        sizePolicy2.setHeightForWidth(mTeDetails->sizePolicy().hasHeightForWidth());
        mTeDetails->setSizePolicy(sizePolicy2);
        mTeDetails->setFrameShape(QFrame::NoFrame);
        mTeDetails->setFrameShadow(QFrame::Plain);
        mTeDetails->setReadOnly(true);

        gridLayout->addWidget(mTeDetails, 3, 1, 1, 2);

        mButtonBox = new QIDialogButtonBox(VBoxSnapshotDetailsDlg);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 4, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        mLbName->setBuddy(mLeName);
        mLbDescription->setBuddy(mTeDescription);
        mLbDetails->setBuddy(mTeDetails);
#endif // QT_NO_SHORTCUT

        retranslateUi(VBoxSnapshotDetailsDlg);
        QObject::connect(mButtonBox, SIGNAL(accepted()), VBoxSnapshotDetailsDlg, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), VBoxSnapshotDetailsDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(VBoxSnapshotDetailsDlg);
    } // setupUi

    void retranslateUi(QDialog *VBoxSnapshotDetailsDlg)
    {
        mLbName->setText(QApplication::translate("VBoxSnapshotDetailsDlg", "&Name:", 0, QApplication::UnicodeUTF8));
        mLbTaken->setText(QApplication::translate("VBoxSnapshotDetailsDlg", "Taken:", 0, QApplication::UnicodeUTF8));
        mLbDescription->setText(QApplication::translate("VBoxSnapshotDetailsDlg", "&Description:", 0, QApplication::UnicodeUTF8));
        mLbDetails->setText(QApplication::translate("VBoxSnapshotDetailsDlg", "D&etails:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(VBoxSnapshotDetailsDlg);
    } // retranslateUi

};

namespace Ui {
    class VBoxSnapshotDetailsDlg: public Ui_VBoxSnapshotDetailsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VBOXSNAPSHOTDETAILSDLG_H
