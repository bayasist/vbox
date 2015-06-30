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
** Form generated from reading UI file 'UIMachineSettingsUSBFilterDetails.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSUSBFILTERDETAILS_H
#define UIMACHINESETTINGSUSBFILTERDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include "QIDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsUSBFilterDetails
{
public:
    QGridLayout *gridLayout;
    QLabel *mLbName;
    QLineEdit *mLeName;
    QLabel *mLbVendorID;
    QLineEdit *mLeVendorID;
    QLabel *mLbProductID;
    QLineEdit *mLeProductID;
    QLabel *mLbRevision;
    QLineEdit *mLeRevision;
    QLabel *mLbManufacturer;
    QLineEdit *mLeManufacturer;
    QLabel *mLbProduct;
    QLineEdit *mLeProduct;
    QLabel *mLbSerialNo;
    QLineEdit *mLeSerialNo;
    QLabel *mLbPort;
    QLineEdit *mLePort;
    QLabel *mLbRemote;
    QComboBox *mCbRemote;
    QSpacerItem *spacerItem;
    QIDialogButtonBox *mButtonBox;

    void setupUi(QDialog *UIMachineSettingsUSBFilterDetails)
    {
        if (UIMachineSettingsUSBFilterDetails->objectName().isEmpty())
            UIMachineSettingsUSBFilterDetails->setObjectName(QString::fromUtf8("UIMachineSettingsUSBFilterDetails"));
        UIMachineSettingsUSBFilterDetails->resize(350, 363);
        UIMachineSettingsUSBFilterDetails->setMinimumSize(QSize(350, 0));
        gridLayout = new QGridLayout(UIMachineSettingsUSBFilterDetails);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLbName = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbName->setObjectName(QString::fromUtf8("mLbName"));
        mLbName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbName, 0, 0, 1, 1);

        mLeName = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLeName->setObjectName(QString::fromUtf8("mLeName"));

        gridLayout->addWidget(mLeName, 0, 1, 1, 1);

        mLbVendorID = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbVendorID->setObjectName(QString::fromUtf8("mLbVendorID"));
        mLbVendorID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbVendorID, 1, 0, 1, 1);

        mLeVendorID = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLeVendorID->setObjectName(QString::fromUtf8("mLeVendorID"));

        gridLayout->addWidget(mLeVendorID, 1, 1, 1, 1);

        mLbProductID = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbProductID->setObjectName(QString::fromUtf8("mLbProductID"));
        mLbProductID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbProductID, 2, 0, 1, 1);

        mLeProductID = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLeProductID->setObjectName(QString::fromUtf8("mLeProductID"));

        gridLayout->addWidget(mLeProductID, 2, 1, 1, 1);

        mLbRevision = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbRevision->setObjectName(QString::fromUtf8("mLbRevision"));
        mLbRevision->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbRevision, 3, 0, 1, 1);

        mLeRevision = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLeRevision->setObjectName(QString::fromUtf8("mLeRevision"));

        gridLayout->addWidget(mLeRevision, 3, 1, 1, 1);

        mLbManufacturer = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbManufacturer->setObjectName(QString::fromUtf8("mLbManufacturer"));
        mLbManufacturer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbManufacturer, 4, 0, 1, 1);

        mLeManufacturer = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLeManufacturer->setObjectName(QString::fromUtf8("mLeManufacturer"));

        gridLayout->addWidget(mLeManufacturer, 4, 1, 1, 1);

        mLbProduct = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbProduct->setObjectName(QString::fromUtf8("mLbProduct"));
        mLbProduct->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbProduct, 5, 0, 1, 1);

        mLeProduct = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLeProduct->setObjectName(QString::fromUtf8("mLeProduct"));

        gridLayout->addWidget(mLeProduct, 5, 1, 1, 1);

        mLbSerialNo = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbSerialNo->setObjectName(QString::fromUtf8("mLbSerialNo"));
        mLbSerialNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbSerialNo, 6, 0, 1, 1);

        mLeSerialNo = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLeSerialNo->setObjectName(QString::fromUtf8("mLeSerialNo"));

        gridLayout->addWidget(mLeSerialNo, 6, 1, 1, 1);

        mLbPort = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbPort->setObjectName(QString::fromUtf8("mLbPort"));
        mLbPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbPort, 7, 0, 1, 1);

        mLePort = new QLineEdit(UIMachineSettingsUSBFilterDetails);
        mLePort->setObjectName(QString::fromUtf8("mLePort"));

        gridLayout->addWidget(mLePort, 7, 1, 1, 1);

        mLbRemote = new QLabel(UIMachineSettingsUSBFilterDetails);
        mLbRemote->setObjectName(QString::fromUtf8("mLbRemote"));
        mLbRemote->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mLbRemote, 8, 0, 1, 1);

        mCbRemote = new QComboBox(UIMachineSettingsUSBFilterDetails);
        mCbRemote->setObjectName(QString::fromUtf8("mCbRemote"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCbRemote->sizePolicy().hasHeightForWidth());
        mCbRemote->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mCbRemote, 8, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 9, 1, 1, 1);

        mButtonBox = new QIDialogButtonBox(UIMachineSettingsUSBFilterDetails);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 10, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        mLbName->setBuddy(mLeName);
        mLbVendorID->setBuddy(mLeVendorID);
        mLbProductID->setBuddy(mLeProductID);
        mLbRevision->setBuddy(mLeRevision);
        mLbManufacturer->setBuddy(mLeManufacturer);
        mLbProduct->setBuddy(mLeProduct);
        mLbSerialNo->setBuddy(mLeSerialNo);
        mLbPort->setBuddy(mLePort);
        mLbRemote->setBuddy(mCbRemote);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsUSBFilterDetails);
        QObject::connect(mButtonBox, SIGNAL(accepted()), UIMachineSettingsUSBFilterDetails, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), UIMachineSettingsUSBFilterDetails, SLOT(reject()));

        QMetaObject::connectSlotsByName(UIMachineSettingsUSBFilterDetails);
    } // setupUi

    void retranslateUi(QDialog *UIMachineSettingsUSBFilterDetails)
    {
        UIMachineSettingsUSBFilterDetails->setWindowTitle(QApplication::translate("UIMachineSettingsUSBFilterDetails", "USB Filter Details", 0, QApplication::UnicodeUTF8));
        mLbName->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "&Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeName->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Holds the filter name.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbVendorID->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "&Vendor ID:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeVendorID->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines the vendor ID filter. The <i>exact match</i> string format is <tt>XXXX</tt> where <tt>X</tt> is a hexadecimal digit. An empty string will match any value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbProductID->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "&Product ID:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeProductID->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines the product ID filter. The <i>exact match</i> string format is <tt>XXXX</tt> where <tt>X</tt> is a hexadecimal digit. An empty string will match any value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbRevision->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "&Revision:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeRevision->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines the revision number filter. The <i>exact match</i> string format is <tt>IIFF</tt> where <tt>I</tt> is a decimal digit of the integer part and <tt>F</tt> is a decimal digit of the fractional part. An empty string will match any value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbManufacturer->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "&Manufacturer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeManufacturer->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines the manufacturer filter as an <i>exact match</i> string. An empty string will match any value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbProduct->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Pro&duct:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeProduct->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines the product name filter as an <i>exact match</i> string. An empty string will match any value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbSerialNo->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "&Serial No.:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLeSerialNo->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines the serial number filter as an <i>exact match</i> string. An empty string will match any value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbPort->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Por&t:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLePort->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines the host USB port filter as an <i>exact match</i> string. An empty string will match any value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLbRemote->setText(QApplication::translate("UIMachineSettingsUSBFilterDetails", "R&emote:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCbRemote->setToolTip(QApplication::translate("UIMachineSettingsUSBFilterDetails", "Defines whether this filter applies to USB devices attached locally to the host computer (<i>No</i>), to a VRDP client's computer (<i>Yes</i>), or both (<i>Any</i>).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsUSBFilterDetails: public Ui_UIMachineSettingsUSBFilterDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSUSBFILTERDETAILS_H
