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
** Form generated from reading UI file 'UIGlobalSettingsUpdate.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSUPDATE_H
#define UIGLOBALSETTINGSUPDATE_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsUpdate
{
public:
    QGridLayout *gridLayout;
    QCheckBox *m_pCheckBoxUpdate;
    QSpacerItem *spacerItem;
    QWidget *m_pContainerUpdate;
    QGridLayout *m_pContainerLayoutUpdate;
    QLabel *m_pUpdatePeriodLabel;
    QHBoxLayout *hboxLayout;
    QComboBox *m_pComboBoxUpdatePeriod;
    QSpacerItem *spacerItem1;
    QLabel *m_pUpdateDateLabel;
    QLabel *m_pUpdateDateText;
    QLabel *m_pUpdateFilterLabel;
    QRadioButton *m_pRadioUpdateFilterStable;
    QRadioButton *m_pRadioUpdateFilterEvery;
    QRadioButton *m_pRadioUpdateFilterBetas;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *UIGlobalSettingsUpdate)
    {
        if (UIGlobalSettingsUpdate->objectName().isEmpty())
            UIGlobalSettingsUpdate->setObjectName(QString::fromUtf8("UIGlobalSettingsUpdate"));
        gridLayout = new QGridLayout(UIGlobalSettingsUpdate);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pCheckBoxUpdate = new QCheckBox(UIGlobalSettingsUpdate);
        m_pCheckBoxUpdate->setObjectName(QString::fromUtf8("m_pCheckBoxUpdate"));

        gridLayout->addWidget(m_pCheckBoxUpdate, 0, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        m_pContainerUpdate = new QWidget(UIGlobalSettingsUpdate);
        m_pContainerUpdate->setObjectName(QString::fromUtf8("m_pContainerUpdate"));
        m_pContainerLayoutUpdate = new QGridLayout(m_pContainerUpdate);
        m_pContainerLayoutUpdate->setContentsMargins(0, 0, 0, 0);
        m_pContainerLayoutUpdate->setObjectName(QString::fromUtf8("m_pContainerLayoutUpdate"));
        m_pContainerLayoutUpdate->setContentsMargins(0, 0, 0, 0);
        m_pUpdatePeriodLabel = new QLabel(m_pContainerUpdate);
        m_pUpdatePeriodLabel->setObjectName(QString::fromUtf8("m_pUpdatePeriodLabel"));
        m_pUpdatePeriodLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutUpdate->addWidget(m_pUpdatePeriodLabel, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_pComboBoxUpdatePeriod = new QComboBox(m_pContainerUpdate);
        m_pComboBoxUpdatePeriod->setObjectName(QString::fromUtf8("m_pComboBoxUpdatePeriod"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pComboBoxUpdatePeriod->sizePolicy().hasHeightForWidth());
        m_pComboBoxUpdatePeriod->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(m_pComboBoxUpdatePeriod);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        m_pContainerLayoutUpdate->addLayout(hboxLayout, 0, 1, 1, 1);

        m_pUpdateDateLabel = new QLabel(m_pContainerUpdate);
        m_pUpdateDateLabel->setObjectName(QString::fromUtf8("m_pUpdateDateLabel"));
        m_pUpdateDateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutUpdate->addWidget(m_pUpdateDateLabel, 1, 0, 1, 1);

        m_pUpdateDateText = new QLabel(m_pContainerUpdate);
        m_pUpdateDateText->setObjectName(QString::fromUtf8("m_pUpdateDateText"));

        m_pContainerLayoutUpdate->addWidget(m_pUpdateDateText, 1, 1, 1, 1);

        m_pUpdateFilterLabel = new QLabel(m_pContainerUpdate);
        m_pUpdateFilterLabel->setObjectName(QString::fromUtf8("m_pUpdateFilterLabel"));
        m_pUpdateFilterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutUpdate->addWidget(m_pUpdateFilterLabel, 2, 0, 1, 1);

        m_pRadioUpdateFilterStable = new QRadioButton(m_pContainerUpdate);
        m_pRadioUpdateFilterStable->setObjectName(QString::fromUtf8("m_pRadioUpdateFilterStable"));

        m_pContainerLayoutUpdate->addWidget(m_pRadioUpdateFilterStable, 2, 1, 1, 1);

        m_pRadioUpdateFilterEvery = new QRadioButton(m_pContainerUpdate);
        m_pRadioUpdateFilterEvery->setObjectName(QString::fromUtf8("m_pRadioUpdateFilterEvery"));

        m_pContainerLayoutUpdate->addWidget(m_pRadioUpdateFilterEvery, 3, 1, 1, 1);

        m_pRadioUpdateFilterBetas = new QRadioButton(m_pContainerUpdate);
        m_pRadioUpdateFilterBetas->setObjectName(QString::fromUtf8("m_pRadioUpdateFilterBetas"));

        m_pContainerLayoutUpdate->addWidget(m_pRadioUpdateFilterBetas, 4, 1, 1, 1);


        gridLayout->addWidget(m_pContainerUpdate, 1, 1, 1, 1);

        spacerItem2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        m_pUpdatePeriodLabel->setBuddy(m_pComboBoxUpdatePeriod);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsUpdate);

        QMetaObject::connectSlotsByName(UIGlobalSettingsUpdate);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsUpdate)
    {
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxUpdate->setWhatsThis(QApplication::translate("UIGlobalSettingsUpdate", "When checked, the application will periodically connect to the VirtualBox website and check whether a new VirtualBox version is available.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxUpdate->setText(QApplication::translate("UIGlobalSettingsUpdate", "&Check for Updates", 0, QApplication::UnicodeUTF8));
        m_pUpdatePeriodLabel->setText(QApplication::translate("UIGlobalSettingsUpdate", "&Once per:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pComboBoxUpdatePeriod->setWhatsThis(QApplication::translate("UIGlobalSettingsUpdate", "Specifies how often the new version check should be performed. Note that if you want to completely disable this check, just clear the above check box.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pUpdateDateLabel->setText(QApplication::translate("UIGlobalSettingsUpdate", "Next Check:", 0, QApplication::UnicodeUTF8));
        m_pUpdateFilterLabel->setText(QApplication::translate("UIGlobalSettingsUpdate", "Check for:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pRadioUpdateFilterStable->setWhatsThis(QApplication::translate("UIGlobalSettingsUpdate", "<p>Choose this if you only wish to be notified about stable updates to VirtualBox.</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pRadioUpdateFilterStable->setText(QApplication::translate("UIGlobalSettingsUpdate", "&Stable Release Versions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pRadioUpdateFilterEvery->setWhatsThis(QApplication::translate("UIGlobalSettingsUpdate", "<p>Choose this if you wish to be notified about all new VirtualBox releases.</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pRadioUpdateFilterEvery->setText(QApplication::translate("UIGlobalSettingsUpdate", "&All New Releases", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pRadioUpdateFilterBetas->setWhatsThis(QApplication::translate("UIGlobalSettingsUpdate", "<p>Choose this to be notified about all new VirtualBox releases and pre-release versions of VirtualBox.</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pRadioUpdateFilterBetas->setText(QApplication::translate("UIGlobalSettingsUpdate", "All New Releases and &Pre-Releases", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIGlobalSettingsUpdate);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsUpdate: public Ui_UIGlobalSettingsUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSUPDATE_H
