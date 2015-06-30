/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2009-2012 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIMachineSettingsStorage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSSTORAGE_H
#define UIMACHINESETTINGSSTORAGE_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QILabel.h"
#include "QILabelSeparator.h"
#include "QISplitter.h"
#include "QIToolButton.h"
#include "QITreeView.h"
#include "UIToolBar.h"
#include "VBoxMediaComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsStorage
{
public:
    QVBoxLayout *mLtMain;
    QISplitter *mSplitter;
    QWidget *mWtLeftPane;
    QVBoxLayout *mLtLeftPane;
    QILabelSeparator *mLsLeftPane;
    QVBoxLayout *mLtStorage;
    QITreeView *mTwStorageTree;
    QHBoxLayout *mLtStorageBar;
    QSpacerItem *mSp1;
    UIToolBar *mTbStorageBar;
    QStackedWidget *mSwRightPane;
    QWidget *mWtEmpty;
    QGridLayout *mLtEmpty;
    QILabelSeparator *mLsEmpty;
    QLabel *mLbInfo;
    QSpacerItem *mSp2;
    QWidget *mWtController;
    QGridLayout *mLtController;
    QILabelSeparator *mLsParameters;
    QLabel *mLbName;
    QLineEdit *mLeName;
    QLabel *mLbType;
    QComboBox *mCbType;
    QLabel *mLbPortCount;
    QSpinBox *mSbPortCount;
    QCheckBox *mCbIoCache;
    QSpacerItem *mSp3;
    QWidget *mWtAttachment;
    QGridLayout *mLtAttachment;
    QILabelSeparator *mLsAttributes;
    QLabel *mLbMedium;
    QHBoxLayout *mLtContainer;
    QComboBox *mCbSlot;
    QIToolButton *mTbOpen;
    QCheckBox *mCbPassthrough;
    QCheckBox *mCbTempEject;
    QCheckBox *mCbNonRotational;
    QILabelSeparator *mLsInformation;
    QLabel *mLbHDFormat;
    QILabel *mLbHDFormatValue;
    QLabel *mLbCDFDType;
    QILabel *mLbCDFDTypeValue;
    QLabel *mLbHDVirtualSize;
    QILabel *mLbHDVirtualSizeValue;
    QLabel *mLbHDActualSize;
    QILabel *mLbHDActualSizeValue;
    QLabel *mLbSize;
    QILabel *mLbSizeValue;
    QLabel *mLbHDDetails;
    QILabel *mLbHDDetailsValue;
    QLabel *mLbLocation;
    QILabel *mLbLocationValue;
    QLabel *mLbUsage;
    QILabel *mLbUsageValue;
    QSpacerItem *mSp6;

    void setupUi(QWidget *UIMachineSettingsStorage)
    {
        if (UIMachineSettingsStorage->objectName().isEmpty())
            UIMachineSettingsStorage->setObjectName(QString::fromUtf8("UIMachineSettingsStorage"));
        UIMachineSettingsStorage->resize(800, 700);
        mLtMain = new QVBoxLayout(UIMachineSettingsStorage);
        mLtMain->setObjectName(QString::fromUtf8("mLtMain"));
        mSplitter = new QISplitter(UIMachineSettingsStorage);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Horizontal);
        mSplitter->setHandleWidth(4);
        mWtLeftPane = new QWidget(mSplitter);
        mWtLeftPane->setObjectName(QString::fromUtf8("mWtLeftPane"));
        mLtLeftPane = new QVBoxLayout(mWtLeftPane);
        mLtLeftPane->setObjectName(QString::fromUtf8("mLtLeftPane"));
        mLtLeftPane->setContentsMargins(0, 0, 10, 0);
        mLsLeftPane = new QILabelSeparator(mWtLeftPane);
        mLsLeftPane->setObjectName(QString::fromUtf8("mLsLeftPane"));

        mLtLeftPane->addWidget(mLsLeftPane);

        mLtStorage = new QVBoxLayout();
        mLtStorage->setSpacing(0);
        mLtStorage->setContentsMargins(0, 0, 0, 0);
        mLtStorage->setObjectName(QString::fromUtf8("mLtStorage"));
        mTwStorageTree = new QITreeView(mWtLeftPane);
        mTwStorageTree->setObjectName(QString::fromUtf8("mTwStorageTree"));

        mLtStorage->addWidget(mTwStorageTree);

        mLtStorageBar = new QHBoxLayout();
        mLtStorageBar->setObjectName(QString::fromUtf8("mLtStorageBar"));
        mSp1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mLtStorageBar->addItem(mSp1);

        mTbStorageBar = new UIToolBar(mWtLeftPane);
        mTbStorageBar->setObjectName(QString::fromUtf8("mTbStorageBar"));

        mLtStorageBar->addWidget(mTbStorageBar);


        mLtStorage->addLayout(mLtStorageBar);


        mLtLeftPane->addLayout(mLtStorage);

        mSplitter->addWidget(mWtLeftPane);
        mSwRightPane = new QStackedWidget(mSplitter);
        mSwRightPane->setObjectName(QString::fromUtf8("mSwRightPane"));
        mWtEmpty = new QWidget();
        mWtEmpty->setObjectName(QString::fromUtf8("mWtEmpty"));
        mLtEmpty = new QGridLayout(mWtEmpty);
        mLtEmpty->setObjectName(QString::fromUtf8("mLtEmpty"));
        mLtEmpty->setContentsMargins(10, 0, 0, 0);
        mLsEmpty = new QILabelSeparator(mWtEmpty);
        mLsEmpty->setObjectName(QString::fromUtf8("mLsEmpty"));

        mLtEmpty->addWidget(mLsEmpty, 0, 0, 1, 2);

        mLbInfo = new QLabel(mWtEmpty);
        mLbInfo->setObjectName(QString::fromUtf8("mLbInfo"));
        mLbInfo->setWordWrap(true);

        mLtEmpty->addWidget(mLbInfo, 1, 1, 1, 1);

        mSp2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLtEmpty->addItem(mSp2, 2, 0, 1, 2);

        mSwRightPane->addWidget(mWtEmpty);
        mWtController = new QWidget();
        mWtController->setObjectName(QString::fromUtf8("mWtController"));
        mLtController = new QGridLayout(mWtController);
        mLtController->setObjectName(QString::fromUtf8("mLtController"));
        mLtController->setContentsMargins(10, 0, 0, 0);
        mLsParameters = new QILabelSeparator(mWtController);
        mLsParameters->setObjectName(QString::fromUtf8("mLsParameters"));

        mLtController->addWidget(mLsParameters, 0, 0, 1, 3);

        mLbName = new QLabel(mWtController);
        mLbName->setObjectName(QString::fromUtf8("mLbName"));
        mLbName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtController->addWidget(mLbName, 1, 1, 1, 1);

        mLeName = new QLineEdit(mWtController);
        mLeName->setObjectName(QString::fromUtf8("mLeName"));

        mLtController->addWidget(mLeName, 1, 2, 1, 1);

        mLbType = new QLabel(mWtController);
        mLbType->setObjectName(QString::fromUtf8("mLbType"));
        mLbType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtController->addWidget(mLbType, 2, 1, 1, 1);

        mCbType = new QComboBox(mWtController);
        mCbType->setObjectName(QString::fromUtf8("mCbType"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCbType->sizePolicy().hasHeightForWidth());
        mCbType->setSizePolicy(sizePolicy);

        mLtController->addWidget(mCbType, 2, 2, 1, 1);

        mLbPortCount = new QLabel(mWtController);
        mLbPortCount->setObjectName(QString::fromUtf8("mLbPortCount"));
        mLbPortCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtController->addWidget(mLbPortCount, 3, 1, 1, 1);

        mSbPortCount = new QSpinBox(mWtController);
        mSbPortCount->setObjectName(QString::fromUtf8("mSbPortCount"));
        sizePolicy.setHeightForWidth(mSbPortCount->sizePolicy().hasHeightForWidth());
        mSbPortCount->setSizePolicy(sizePolicy);

        mLtController->addWidget(mSbPortCount, 3, 2, 1, 1);

        mCbIoCache = new QCheckBox(mWtController);
        mCbIoCache->setObjectName(QString::fromUtf8("mCbIoCache"));

        mLtController->addWidget(mCbIoCache, 4, 2, 1, 1);

        mSp3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLtController->addItem(mSp3, 5, 0, 1, 3);

        mSwRightPane->addWidget(mWtController);
        mWtAttachment = new QWidget();
        mWtAttachment->setObjectName(QString::fromUtf8("mWtAttachment"));
        mLtAttachment = new QGridLayout(mWtAttachment);
        mLtAttachment->setObjectName(QString::fromUtf8("mLtAttachment"));
        mLtAttachment->setContentsMargins(10, 0, 0, 0);
        mLsAttributes = new QILabelSeparator(mWtAttachment);
        mLsAttributes->setObjectName(QString::fromUtf8("mLsAttributes"));

        mLtAttachment->addWidget(mLsAttributes, 0, 0, 1, 3);

        mLbMedium = new QLabel(mWtAttachment);
        mLbMedium->setObjectName(QString::fromUtf8("mLbMedium"));
        mLbMedium->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbMedium, 1, 1, 1, 1);

        mLtContainer = new QHBoxLayout();
        mLtContainer->setSpacing(1);
        mLtContainer->setObjectName(QString::fromUtf8("mLtContainer"));
        mLtContainer->setContentsMargins(0, 0, 0, 0);
        mCbSlot = new QComboBox(mWtAttachment);
        mCbSlot->setObjectName(QString::fromUtf8("mCbSlot"));
        sizePolicy.setHeightForWidth(mCbSlot->sizePolicy().hasHeightForWidth());
        mCbSlot->setSizePolicy(sizePolicy);

        mLtContainer->addWidget(mCbSlot);

        mTbOpen = new QIToolButton(mWtAttachment);
        mTbOpen->setObjectName(QString::fromUtf8("mTbOpen"));
        mTbOpen->setAutoRaise(true);

        mLtContainer->addWidget(mTbOpen);


        mLtAttachment->addLayout(mLtContainer, 1, 2, 1, 1);

        mCbPassthrough = new QCheckBox(mWtAttachment);
        mCbPassthrough->setObjectName(QString::fromUtf8("mCbPassthrough"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCbPassthrough->sizePolicy().hasHeightForWidth());
        mCbPassthrough->setSizePolicy(sizePolicy1);

        mLtAttachment->addWidget(mCbPassthrough, 2, 2, 1, 1);

        mCbTempEject = new QCheckBox(mWtAttachment);
        mCbTempEject->setObjectName(QString::fromUtf8("mCbTempEject"));
        sizePolicy1.setHeightForWidth(mCbTempEject->sizePolicy().hasHeightForWidth());
        mCbTempEject->setSizePolicy(sizePolicy1);

        mLtAttachment->addWidget(mCbTempEject, 2, 2, 1, 1);

        mCbNonRotational = new QCheckBox(mWtAttachment);
        mCbNonRotational->setObjectName(QString::fromUtf8("mCbNonRotational"));
        sizePolicy1.setHeightForWidth(mCbNonRotational->sizePolicy().hasHeightForWidth());
        mCbNonRotational->setSizePolicy(sizePolicy1);

        mLtAttachment->addWidget(mCbNonRotational, 2, 2, 1, 1);

        mLsInformation = new QILabelSeparator(mWtAttachment);
        mLsInformation->setObjectName(QString::fromUtf8("mLsInformation"));

        mLtAttachment->addWidget(mLsInformation, 3, 0, 1, 3);

        mLbHDFormat = new QLabel(mWtAttachment);
        mLbHDFormat->setObjectName(QString::fromUtf8("mLbHDFormat"));
        mLbHDFormat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbHDFormat, 4, 1, 1, 1);

        mLbHDFormatValue = new QILabel(mWtAttachment);
        mLbHDFormatValue->setObjectName(QString::fromUtf8("mLbHDFormatValue"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLbHDFormatValue->sizePolicy().hasHeightForWidth());
        mLbHDFormatValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbHDFormatValue, 4, 2, 1, 1);

        mLbCDFDType = new QLabel(mWtAttachment);
        mLbCDFDType->setObjectName(QString::fromUtf8("mLbCDFDType"));
        mLbCDFDType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbCDFDType, 5, 1, 1, 1);

        mLbCDFDTypeValue = new QILabel(mWtAttachment);
        mLbCDFDTypeValue->setObjectName(QString::fromUtf8("mLbCDFDTypeValue"));
        sizePolicy2.setHeightForWidth(mLbCDFDTypeValue->sizePolicy().hasHeightForWidth());
        mLbCDFDTypeValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbCDFDTypeValue, 5, 2, 1, 1);

        mLbHDVirtualSize = new QLabel(mWtAttachment);
        mLbHDVirtualSize->setObjectName(QString::fromUtf8("mLbHDVirtualSize"));
        mLbHDVirtualSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbHDVirtualSize, 6, 1, 1, 1);

        mLbHDVirtualSizeValue = new QILabel(mWtAttachment);
        mLbHDVirtualSizeValue->setObjectName(QString::fromUtf8("mLbHDVirtualSizeValue"));
        sizePolicy2.setHeightForWidth(mLbHDVirtualSizeValue->sizePolicy().hasHeightForWidth());
        mLbHDVirtualSizeValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbHDVirtualSizeValue, 6, 2, 1, 1);

        mLbHDActualSize = new QLabel(mWtAttachment);
        mLbHDActualSize->setObjectName(QString::fromUtf8("mLbHDActualSize"));
        mLbHDActualSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbHDActualSize, 7, 1, 1, 1);

        mLbHDActualSizeValue = new QILabel(mWtAttachment);
        mLbHDActualSizeValue->setObjectName(QString::fromUtf8("mLbHDActualSizeValue"));
        sizePolicy2.setHeightForWidth(mLbHDActualSizeValue->sizePolicy().hasHeightForWidth());
        mLbHDActualSizeValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbHDActualSizeValue, 7, 2, 1, 1);

        mLbSize = new QLabel(mWtAttachment);
        mLbSize->setObjectName(QString::fromUtf8("mLbSize"));
        mLbSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbSize, 8, 1, 1, 1);

        mLbSizeValue = new QILabel(mWtAttachment);
        mLbSizeValue->setObjectName(QString::fromUtf8("mLbSizeValue"));
        sizePolicy2.setHeightForWidth(mLbSizeValue->sizePolicy().hasHeightForWidth());
        mLbSizeValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbSizeValue, 8, 2, 1, 1);

        mLbHDDetails = new QLabel(mWtAttachment);
        mLbHDDetails->setObjectName(QString::fromUtf8("mLbHDDetails"));
        mLbHDDetails->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbHDDetails, 9, 1, 1, 1);

        mLbHDDetailsValue = new QILabel(mWtAttachment);
        mLbHDDetailsValue->setObjectName(QString::fromUtf8("mLbHDDetailsValue"));
        sizePolicy2.setHeightForWidth(mLbHDDetailsValue->sizePolicy().hasHeightForWidth());
        mLbHDDetailsValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbHDDetailsValue, 9, 2, 1, 1);

        mLbLocation = new QLabel(mWtAttachment);
        mLbLocation->setObjectName(QString::fromUtf8("mLbLocation"));
        mLbLocation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbLocation, 10, 1, 1, 1);

        mLbLocationValue = new QILabel(mWtAttachment);
        mLbLocationValue->setObjectName(QString::fromUtf8("mLbLocationValue"));
        sizePolicy2.setHeightForWidth(mLbLocationValue->sizePolicy().hasHeightForWidth());
        mLbLocationValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbLocationValue, 10, 2, 1, 1);

        mLbUsage = new QLabel(mWtAttachment);
        mLbUsage->setObjectName(QString::fromUtf8("mLbUsage"));
        mLbUsage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        mLtAttachment->addWidget(mLbUsage, 11, 1, 1, 1);

        mLbUsageValue = new QILabel(mWtAttachment);
        mLbUsageValue->setObjectName(QString::fromUtf8("mLbUsageValue"));
        sizePolicy2.setHeightForWidth(mLbUsageValue->sizePolicy().hasHeightForWidth());
        mLbUsageValue->setSizePolicy(sizePolicy2);

        mLtAttachment->addWidget(mLbUsageValue, 11, 2, 1, 1);

        mSp6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mLtAttachment->addItem(mSp6, 12, 0, 1, 3);

        mSwRightPane->addWidget(mWtAttachment);
        mSplitter->addWidget(mSwRightPane);

        mLtMain->addWidget(mSplitter);

#ifndef QT_NO_SHORTCUT
        mLsLeftPane->setBuddy(mTwStorageTree);
        mLbName->setBuddy(mLeName);
        mLbType->setBuddy(mCbType);
        mLbPortCount->setBuddy(mSbPortCount);
        mLbMedium->setBuddy(mTbOpen);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsStorage);

        QMetaObject::connectSlotsByName(UIMachineSettingsStorage);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsStorage)
    {
        mLsLeftPane->setText(QApplication::translate("UIMachineSettingsStorage", "&Storage Tree", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mTwStorageTree->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "Contains all storage controllers for this machine and the virtual images and host drives attached to them.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLsEmpty->setText(QApplication::translate("UIMachineSettingsStorage", "Information", 0, QApplication::UnicodeUTF8));
        mLbInfo->setText(QApplication::translate("UIMachineSettingsStorage", "The Storage Tree can contain several controllers of different types. This machine currently has no controllers.", 0, QApplication::UnicodeUTF8));
        mLsParameters->setText(QApplication::translate("UIMachineSettingsStorage", "Attributes", 0, QApplication::UnicodeUTF8));
        mLbName->setText(QApplication::translate("UIMachineSettingsStorage", "&Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mLeName->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "Changes the name of the storage controller currently selected in the Storage Tree.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbType->setText(QApplication::translate("UIMachineSettingsStorage", "&Type:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbType->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "Selects the sub-type of the storage controller currently selected in the Storage Tree.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mLbPortCount->setText(QApplication::translate("UIMachineSettingsStorage", "&Port Count:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mSbPortCount->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "Selects the port count of the SATA storage controller currently selected in the Storage Tree. This must be at least one more than the highest port number you need to use.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        mCbIoCache->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "Allows to use host I/O caching capabilities.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbIoCache->setText(QApplication::translate("UIMachineSettingsStorage", "Use Host I/O Cache", 0, QApplication::UnicodeUTF8));
        mLsAttributes->setText(QApplication::translate("UIMachineSettingsStorage", "Attributes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbSlot->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "Selects the slot on the storage controller used by this attachment. The available slots depend on the type of the controller and other attachments on it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mTbOpen->setText(QString());
#ifndef QT_NO_WHATSTHIS
        mCbPassthrough->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "When checked, allows the guest to send ATAPI commands directly to the host-drive which makes it possible to use CD/DVD writers connected to the host inside the VM. Note that writing audio CD inside the VM is not yet supported.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbPassthrough->setText(QApplication::translate("UIMachineSettingsStorage", "&Passthrough", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbTempEject->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "When checked the virtual disk will not be removed when the guest system ejects it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbTempEject->setText(QApplication::translate("UIMachineSettingsStorage", "&Live CD/DVD", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        mCbNonRotational->setWhatsThis(QApplication::translate("UIMachineSettingsStorage", "When checked the guest system will see the virtual disk as a solid state device.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCbNonRotational->setText(QApplication::translate("UIMachineSettingsStorage", "&Solid-state Drive", 0, QApplication::UnicodeUTF8));
        mLsInformation->setText(QApplication::translate("UIMachineSettingsStorage", "Information", 0, QApplication::UnicodeUTF8));
        mLbHDFormat->setText(QApplication::translate("UIMachineSettingsStorage", "Type (Format):", 0, QApplication::UnicodeUTF8));
        mLbCDFDType->setText(QApplication::translate("UIMachineSettingsStorage", "Type:", 0, QApplication::UnicodeUTF8));
        mLbHDVirtualSize->setText(QApplication::translate("UIMachineSettingsStorage", "Virtual Size:", 0, QApplication::UnicodeUTF8));
        mLbHDActualSize->setText(QApplication::translate("UIMachineSettingsStorage", "Actual Size:", 0, QApplication::UnicodeUTF8));
        mLbSize->setText(QApplication::translate("UIMachineSettingsStorage", "Size:", 0, QApplication::UnicodeUTF8));
        mLbHDDetails->setText(QApplication::translate("UIMachineSettingsStorage", "Details:", 0, QApplication::UnicodeUTF8));
        mLbLocation->setText(QApplication::translate("UIMachineSettingsStorage", "Location:", 0, QApplication::UnicodeUTF8));
        mLbUsage->setText(QApplication::translate("UIMachineSettingsStorage", "Attached to:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIMachineSettingsStorage);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsStorage: public Ui_UIMachineSettingsStorage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSSTORAGE_H
