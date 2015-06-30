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
** Form generated from reading UI file 'UIMachineSettingsAudio.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSAUDIO_H
#define UIMACHINESETTINGSAUDIO_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsAudio
{
public:
    QVBoxLayout *m_pMainLayout;
    QWidget *m_pContainerAudioOptions;
    QGridLayout *m_pContainerLayoutAudioOptions;
    QCheckBox *m_pCheckBoxAudio;
    QSpacerItem *spacerItem;
    QWidget *m_pContainerAudioSubOptions;
    QGridLayout *m_pContainerLayoutAudioSubOptions;
    QLabel *m_pLabelAudioDriver;
    QComboBox *m_pComboAudioDriver;
    QLabel *m_pLabelAudioController;
    QComboBox *m_pComboAudioController;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *UIMachineSettingsAudio)
    {
        if (UIMachineSettingsAudio->objectName().isEmpty())
            UIMachineSettingsAudio->setObjectName(QString::fromUtf8("UIMachineSettingsAudio"));
        m_pMainLayout = new QVBoxLayout(UIMachineSettingsAudio);
        m_pMainLayout->setObjectName(QString::fromUtf8("m_pMainLayout"));
        m_pContainerAudioOptions = new QWidget(UIMachineSettingsAudio);
        m_pContainerAudioOptions->setObjectName(QString::fromUtf8("m_pContainerAudioOptions"));
        m_pContainerLayoutAudioOptions = new QGridLayout(m_pContainerAudioOptions);
        m_pContainerLayoutAudioOptions->setObjectName(QString::fromUtf8("m_pContainerLayoutAudioOptions"));
        m_pContainerLayoutAudioOptions->setContentsMargins(0, 0, 0, 0);
        m_pCheckBoxAudio = new QCheckBox(m_pContainerAudioOptions);
        m_pCheckBoxAudio->setObjectName(QString::fromUtf8("m_pCheckBoxAudio"));

        m_pContainerLayoutAudioOptions->addWidget(m_pCheckBoxAudio, 0, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        m_pContainerLayoutAudioOptions->addItem(spacerItem, 1, 0, 1, 1);

        m_pContainerAudioSubOptions = new QWidget(m_pContainerAudioOptions);
        m_pContainerAudioSubOptions->setObjectName(QString::fromUtf8("m_pContainerAudioSubOptions"));
        m_pContainerLayoutAudioSubOptions = new QGridLayout(m_pContainerAudioSubOptions);
        m_pContainerLayoutAudioSubOptions->setContentsMargins(0, 0, 0, 0);
        m_pContainerLayoutAudioSubOptions->setObjectName(QString::fromUtf8("m_pContainerLayoutAudioSubOptions"));
        m_pContainerLayoutAudioSubOptions->setContentsMargins(0, 0, 0, 0);
        m_pLabelAudioDriver = new QLabel(m_pContainerAudioSubOptions);
        m_pLabelAudioDriver->setObjectName(QString::fromUtf8("m_pLabelAudioDriver"));
        m_pLabelAudioDriver->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutAudioSubOptions->addWidget(m_pLabelAudioDriver, 0, 0, 1, 1);

        m_pComboAudioDriver = new QComboBox(m_pContainerAudioSubOptions);
        m_pComboAudioDriver->setObjectName(QString::fromUtf8("m_pComboAudioDriver"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pComboAudioDriver->sizePolicy().hasHeightForWidth());
        m_pComboAudioDriver->setSizePolicy(sizePolicy);

        m_pContainerLayoutAudioSubOptions->addWidget(m_pComboAudioDriver, 0, 1, 1, 1);

        m_pLabelAudioController = new QLabel(m_pContainerAudioSubOptions);
        m_pLabelAudioController->setObjectName(QString::fromUtf8("m_pLabelAudioController"));
        m_pLabelAudioController->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutAudioSubOptions->addWidget(m_pLabelAudioController, 1, 0, 1, 1);

        m_pComboAudioController = new QComboBox(m_pContainerAudioSubOptions);
        m_pComboAudioController->setObjectName(QString::fromUtf8("m_pComboAudioController"));
        sizePolicy.setHeightForWidth(m_pComboAudioController->sizePolicy().hasHeightForWidth());
        m_pComboAudioController->setSizePolicy(sizePolicy);

        m_pContainerLayoutAudioSubOptions->addWidget(m_pComboAudioController, 1, 1, 1, 1);


        m_pContainerLayoutAudioOptions->addWidget(m_pContainerAudioSubOptions, 1, 1, 1, 1);


        m_pMainLayout->addWidget(m_pContainerAudioOptions);

        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_pMainLayout->addItem(spacerItem1);

#ifndef QT_NO_SHORTCUT
        m_pLabelAudioDriver->setBuddy(m_pComboAudioDriver);
        m_pLabelAudioController->setBuddy(m_pComboAudioController);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsAudio);
        QObject::connect(m_pCheckBoxAudio, SIGNAL(toggled(bool)), m_pContainerAudioSubOptions, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(UIMachineSettingsAudio);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsAudio)
    {
#ifndef QT_NO_WHATSTHIS
        m_pCheckBoxAudio->setWhatsThis(QApplication::translate("UIMachineSettingsAudio", "When checked, a virtual PCI audio card will be plugged into the virtual machine and will communicate with the host audio system using the specified driver.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckBoxAudio->setText(QApplication::translate("UIMachineSettingsAudio", "Enable &Audio", 0, QApplication::UnicodeUTF8));
        m_pLabelAudioDriver->setText(QApplication::translate("UIMachineSettingsAudio", "Host Audio &Driver:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pComboAudioDriver->setWhatsThis(QApplication::translate("UIMachineSettingsAudio", "Controls the audio output driver. The <b>Null Audio Driver</b> makes the guest see an audio card, however every access to it will be ignored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelAudioController->setText(QApplication::translate("UIMachineSettingsAudio", "Audio &Controller:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pComboAudioController->setWhatsThis(QApplication::translate("UIMachineSettingsAudio", "Selects the type of the virtual sound card. Depending on this value, VirtualBox will provide different audio hardware to the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(UIMachineSettingsAudio);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsAudio: public Ui_UIMachineSettingsAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSAUDIO_H
