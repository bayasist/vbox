/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2012-2013 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIGlobalSettingsDisplay.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGLOBALSETTINGSDISPLAY_H
#define UIGLOBALSETTINGSDISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIGlobalSettingsDisplay
{
public:
    QGridLayout *gridLayout;
    QLabel *m_pMaxResolutionLabel;
    QComboBox *m_pMaxResolutionCombo;
    QLabel *m_pResolutionWidthLabel;
    QSpinBox *m_pResolutionWidthSpin;
    QLabel *m_pResolutionHeightLabel;
    QSpinBox *m_pResolutionHeightSpin;
    QLabel *m_pLabelMachineWindow;
    QCheckBox *m_pCheckBoxActivateOnMouseHover;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *UIGlobalSettingsDisplay)
    {
        if (UIGlobalSettingsDisplay->objectName().isEmpty())
            UIGlobalSettingsDisplay->setObjectName(QString::fromUtf8("UIGlobalSettingsDisplay"));
        gridLayout = new QGridLayout(UIGlobalSettingsDisplay);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pMaxResolutionLabel = new QLabel(UIGlobalSettingsDisplay);
        m_pMaxResolutionLabel->setObjectName(QString::fromUtf8("m_pMaxResolutionLabel"));
        m_pMaxResolutionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pMaxResolutionLabel, 0, 0, 1, 1);

        m_pMaxResolutionCombo = new QComboBox(UIGlobalSettingsDisplay);
        m_pMaxResolutionCombo->setObjectName(QString::fromUtf8("m_pMaxResolutionCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pMaxResolutionCombo->sizePolicy().hasHeightForWidth());
        m_pMaxResolutionCombo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_pMaxResolutionCombo, 0, 1, 1, 1);

        m_pResolutionWidthLabel = new QLabel(UIGlobalSettingsDisplay);
        m_pResolutionWidthLabel->setObjectName(QString::fromUtf8("m_pResolutionWidthLabel"));
        m_pResolutionWidthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pResolutionWidthLabel, 1, 0, 1, 1);

        m_pResolutionWidthSpin = new QSpinBox(UIGlobalSettingsDisplay);
        m_pResolutionWidthSpin->setObjectName(QString::fromUtf8("m_pResolutionWidthSpin"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pResolutionWidthSpin->sizePolicy().hasHeightForWidth());
        m_pResolutionWidthSpin->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pResolutionWidthSpin, 1, 1, 1, 1);

        m_pResolutionHeightLabel = new QLabel(UIGlobalSettingsDisplay);
        m_pResolutionHeightLabel->setObjectName(QString::fromUtf8("m_pResolutionHeightLabel"));
        m_pResolutionHeightLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pResolutionHeightLabel, 2, 0, 1, 1);

        m_pResolutionHeightSpin = new QSpinBox(UIGlobalSettingsDisplay);
        m_pResolutionHeightSpin->setObjectName(QString::fromUtf8("m_pResolutionHeightSpin"));
        sizePolicy1.setHeightForWidth(m_pResolutionHeightSpin->sizePolicy().hasHeightForWidth());
        m_pResolutionHeightSpin->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pResolutionHeightSpin, 2, 1, 1, 1);

        m_pLabelMachineWindow = new QLabel(UIGlobalSettingsDisplay);
        m_pLabelMachineWindow->setObjectName(QString::fromUtf8("m_pLabelMachineWindow"));
        m_pLabelMachineWindow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_pLabelMachineWindow, 3, 0, 1, 1);

        m_pCheckBoxActivateOnMouseHover = new QCheckBox(UIGlobalSettingsDisplay);
        m_pCheckBoxActivateOnMouseHover->setObjectName(QString::fromUtf8("m_pCheckBoxActivateOnMouseHover"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pCheckBoxActivateOnMouseHover->sizePolicy().hasHeightForWidth());
        m_pCheckBoxActivateOnMouseHover->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(m_pCheckBoxActivateOnMouseHover, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        m_pMaxResolutionLabel->setBuddy(m_pMaxResolutionCombo);
        m_pResolutionWidthLabel->setBuddy(m_pResolutionWidthSpin);
        m_pResolutionHeightLabel->setBuddy(m_pResolutionHeightSpin);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIGlobalSettingsDisplay);

        QMetaObject::connectSlotsByName(UIGlobalSettingsDisplay);
    } // setupUi

    void retranslateUi(QWidget *UIGlobalSettingsDisplay)
    {
        m_pMaxResolutionLabel->setText(QApplication::translate("UIGlobalSettingsDisplay", "Maximum Guest Screen &Size:", 0, QApplication::UnicodeUTF8));
        m_pResolutionWidthLabel->setText(QApplication::translate("UIGlobalSettingsDisplay", "&Width:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pResolutionWidthSpin->setWhatsThis(QApplication::translate("UIGlobalSettingsDisplay", "Specifies the maximum width which we would like the guest to use.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pResolutionHeightLabel->setText(QApplication::translate("UIGlobalSettingsDisplay", "&Height:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pResolutionHeightSpin->setWhatsThis(QApplication::translate("UIGlobalSettingsDisplay", "Specifies the maximum height which we would like the guest to use.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelMachineWindow->setText(QApplication::translate("UIGlobalSettingsDisplay", "Machine Windows:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxActivateOnMouseHover->setWhatsThis(QApplication::translate("UIGlobalSettingsDisplay", "If checked, machine windows will be raised when the mouse pointer moves over them.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxActivateOnMouseHover->setText(QApplication::translate("UIGlobalSettingsDisplay", "&Raise Window Under Mouse", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIGlobalSettingsDisplay);
    } // retranslateUi

};

namespace Ui {
    class UIGlobalSettingsDisplay: public Ui_UIGlobalSettingsDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGLOBALSETTINGSDISPLAY_H
