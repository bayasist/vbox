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
** Form generated from reading UI file 'UIMachineSettingsDisplay.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMACHINESETTINGSDISPLAY_H
#define UIMACHINESETTINGSDISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QIAdvancedSlider.h"
#include "QITabWidget.h"
#include "UIFilmContainer.h"
#include "VBoxFilePathSelectorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIMachineSettingsDisplay
{
public:
    QVBoxLayout *m_pLayoutMain;
    QITabWidget *m_pTabWidget;
    QWidget *m_pTabVideo;
    QVBoxLayout *m_pLayoutTabVideo;
    QWidget *m_pContainerVideo;
    QGridLayout *m_pLayoutContainerVideo;
    QLabel *m_pLabelVideoMemorySize;
    QGridLayout *m_pLayoutVideoMemorySizeSlider;
    QIAdvancedSlider *m_pSliderVideoMemorySize;
    QLabel *m_pLabelVideoMemorySizeMin;
    QSpacerItem *m_pSpacerVideoMemorySize;
    QLabel *m_pLabelVideoMemorySizeMax;
    QSpinBox *m_pEditorVideoMemorySize;
    QLabel *m_pLabelVideoMemoryUnit;
    QLabel *m_pLabelVideoScreenCount;
    QGridLayout *m_pLayoutVideoScreenCount;
    QIAdvancedSlider *m_pSliderVideoScreenCount;
    QLabel *m_pLabelVideoScreenCountMin;
    QSpacerItem *m_pSpacerVideoScreenCount;
    QLabel *m_pLabelVideoScreenCountMax;
    QSpinBox *m_pEditorVideoScreenCount;
    QLabel *m_pLabelVideoOptions;
    QCheckBox *m_pCheckbox3D;
    QCheckBox *m_pCheckbox2DVideo;
    QSpacerItem *m_pStretchVideo;
    QWidget *m_pTabRemoteDisplay;
    QVBoxLayout *m_pLayoutTabRemoteDisplay;
    QWidget *m_pContainerRemoteDisplay;
    QGridLayout *m_pLayoutContainerRemoteDisplay;
    QCheckBox *m_pCheckboxRemoteDisplay;
    QSpacerItem *m_pSpacerContainerRemoteDisplay;
    QWidget *m_pContainerRemoteDisplayOptions;
    QGridLayout *m_pLayoutContainerRemoteDisplayServer;
    QLabel *m_pLabelRemoteDisplayPort;
    QLineEdit *m_pEditorRemoteDisplayPort;
    QLabel *m_pLabelRemoteDisplayAuthMethod;
    QComboBox *m_pComboRemoteDisplayAuthMethod;
    QLabel *m_pLabelRemoteDisplayTimeout;
    QLineEdit *m_pEditorRemoteDisplayTimeout;
    QLabel *m_pLabelRemoteDisplayOptions;
    QCheckBox *m_pCheckboxMultipleConn;
    QSpacerItem *m_pStretchRemoteDisplay;
    QWidget *m_pTabVideoCapture;
    QVBoxLayout *m_pLayoutTabVideoCapture;
    QWidget *m_pContainerVideoCapture;
    QGridLayout *m_pLayoutContainerVideoCapture;
    QCheckBox *m_pCheckboxVideoCapture;
    QSpacerItem *m_pLeftSpacer;
    QWidget *m_pContainerVideoCaptureOptions;
    QGridLayout *m_pContainerLayoutVideoCapture;
    QLabel *m_pLabelVideoCapturePath;
    VBoxFilePathSelectorWidget *m_pEditorVideoCapturePath;
    QLabel *m_pLabelVideoCaptureSize;
    QComboBox *m_pComboVideoCaptureSize;
    QSpinBox *m_pEditorVideoCaptureWidth;
    QSpinBox *m_pEditorVideoCaptureHeight;
    QLabel *m_pLabelVideoCaptureFrameRate;
    QWidget *m_pContainerSliderVideoCaptureFrameRate;
    QGridLayout *m_pContainerLayoutSliderVideoCaptureFrameRate;
    QIAdvancedSlider *m_pSliderVideoCaptureFrameRate;
    QLabel *m_pLabelVideoCaptureFrameRateMin;
    QSpacerItem *m_pStretchVideoCaptureFrameRate;
    QLabel *m_pLabelVideoCaptureFrameRateMax;
    QSpinBox *m_pEditorVideoCaptureFrameRate;
    QLabel *m_pLabelVideoCaptureFrameRateUnits;
    QLabel *m_pLabelVideoCaptureRate;
    QWidget *m_pContainerSliderVideoCaptureQuality;
    QGridLayout *m_pContainerLayoutSliderVideoCaptureQuality;
    QIAdvancedSlider *m_pSliderVideoCaptureQuality;
    QLabel *m_pLabelVideoCaptureQualityMin;
    QSpacerItem *m_pStretchVideoCaptureQualityLeft;
    QLabel *m_pLabelVideoCaptureQualityMed;
    QSpacerItem *m_pStretchVideoCaptureQualityRight;
    QLabel *m_pLabelVideoCaptureQualityMax;
    QSpinBox *m_pEditorVideoCaptureBitRate;
    QLabel *m_pLabelVideoCaptureBitRateUnits;
    QLabel *m_pLabelVideoCaptureScreens;
    UIFilmContainer *m_pScrollerVideoCaptureScreens;
    QSpacerItem *m_pStretchVideoCapture;

    void setupUi(QWidget *UIMachineSettingsDisplay)
    {
        if (UIMachineSettingsDisplay->objectName().isEmpty())
            UIMachineSettingsDisplay->setObjectName(QString::fromUtf8("UIMachineSettingsDisplay"));
        UIMachineSettingsDisplay->resize(350, 300);
        m_pLayoutMain = new QVBoxLayout(UIMachineSettingsDisplay);
        m_pLayoutMain->setObjectName(QString::fromUtf8("m_pLayoutMain"));
        m_pTabWidget = new QITabWidget(UIMachineSettingsDisplay);
        m_pTabWidget->setObjectName(QString::fromUtf8("m_pTabWidget"));
        m_pTabVideo = new QWidget();
        m_pTabVideo->setObjectName(QString::fromUtf8("m_pTabVideo"));
        m_pLayoutTabVideo = new QVBoxLayout(m_pTabVideo);
        m_pLayoutTabVideo->setObjectName(QString::fromUtf8("m_pLayoutTabVideo"));
        m_pContainerVideo = new QWidget(m_pTabVideo);
        m_pContainerVideo->setObjectName(QString::fromUtf8("m_pContainerVideo"));
        m_pLayoutContainerVideo = new QGridLayout(m_pContainerVideo);
        m_pLayoutContainerVideo->setObjectName(QString::fromUtf8("m_pLayoutContainerVideo"));
        m_pLayoutContainerVideo->setContentsMargins(0, 0, 0, 0);
        m_pLabelVideoMemorySize = new QLabel(m_pContainerVideo);
        m_pLabelVideoMemorySize->setObjectName(QString::fromUtf8("m_pLabelVideoMemorySize"));
        m_pLabelVideoMemorySize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pLayoutContainerVideo->addWidget(m_pLabelVideoMemorySize, 0, 0, 1, 1);

        m_pLayoutVideoMemorySizeSlider = new QGridLayout();
        m_pLayoutVideoMemorySizeSlider->setSpacing(0);
        m_pLayoutVideoMemorySizeSlider->setObjectName(QString::fromUtf8("m_pLayoutVideoMemorySizeSlider"));
        m_pSliderVideoMemorySize = new QIAdvancedSlider(m_pContainerVideo);
        m_pSliderVideoMemorySize->setObjectName(QString::fromUtf8("m_pSliderVideoMemorySize"));
        m_pSliderVideoMemorySize->setOrientation(Qt::Horizontal);

        m_pLayoutVideoMemorySizeSlider->addWidget(m_pSliderVideoMemorySize, 0, 0, 1, 3);

        m_pLabelVideoMemorySizeMin = new QLabel(m_pContainerVideo);
        m_pLabelVideoMemorySizeMin->setObjectName(QString::fromUtf8("m_pLabelVideoMemorySizeMin"));

        m_pLayoutVideoMemorySizeSlider->addWidget(m_pLabelVideoMemorySizeMin, 1, 0, 1, 1);

        m_pSpacerVideoMemorySize = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pLayoutVideoMemorySizeSlider->addItem(m_pSpacerVideoMemorySize, 1, 1, 1, 1);

        m_pLabelVideoMemorySizeMax = new QLabel(m_pContainerVideo);
        m_pLabelVideoMemorySizeMax->setObjectName(QString::fromUtf8("m_pLabelVideoMemorySizeMax"));

        m_pLayoutVideoMemorySizeSlider->addWidget(m_pLabelVideoMemorySizeMax, 1, 2, 1, 1);


        m_pLayoutContainerVideo->addLayout(m_pLayoutVideoMemorySizeSlider, 0, 1, 2, 1);

        m_pEditorVideoMemorySize = new QSpinBox(m_pContainerVideo);
        m_pEditorVideoMemorySize->setObjectName(QString::fromUtf8("m_pEditorVideoMemorySize"));

        m_pLayoutContainerVideo->addWidget(m_pEditorVideoMemorySize, 0, 2, 1, 1);

        m_pLabelVideoMemoryUnit = new QLabel(m_pContainerVideo);
        m_pLabelVideoMemoryUnit->setObjectName(QString::fromUtf8("m_pLabelVideoMemoryUnit"));

        m_pLayoutContainerVideo->addWidget(m_pLabelVideoMemoryUnit, 0, 3, 1, 1);

        m_pLabelVideoScreenCount = new QLabel(m_pContainerVideo);
        m_pLabelVideoScreenCount->setObjectName(QString::fromUtf8("m_pLabelVideoScreenCount"));
        m_pLabelVideoScreenCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pLayoutContainerVideo->addWidget(m_pLabelVideoScreenCount, 2, 0, 1, 1);

        m_pLayoutVideoScreenCount = new QGridLayout();
        m_pLayoutVideoScreenCount->setSpacing(0);
        m_pLayoutVideoScreenCount->setObjectName(QString::fromUtf8("m_pLayoutVideoScreenCount"));
        m_pSliderVideoScreenCount = new QIAdvancedSlider(m_pContainerVideo);
        m_pSliderVideoScreenCount->setObjectName(QString::fromUtf8("m_pSliderVideoScreenCount"));
        m_pSliderVideoScreenCount->setOrientation(Qt::Horizontal);

        m_pLayoutVideoScreenCount->addWidget(m_pSliderVideoScreenCount, 0, 0, 1, 3);

        m_pLabelVideoScreenCountMin = new QLabel(m_pContainerVideo);
        m_pLabelVideoScreenCountMin->setObjectName(QString::fromUtf8("m_pLabelVideoScreenCountMin"));

        m_pLayoutVideoScreenCount->addWidget(m_pLabelVideoScreenCountMin, 1, 0, 1, 1);

        m_pSpacerVideoScreenCount = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pLayoutVideoScreenCount->addItem(m_pSpacerVideoScreenCount, 1, 1, 1, 1);

        m_pLabelVideoScreenCountMax = new QLabel(m_pContainerVideo);
        m_pLabelVideoScreenCountMax->setObjectName(QString::fromUtf8("m_pLabelVideoScreenCountMax"));

        m_pLayoutVideoScreenCount->addWidget(m_pLabelVideoScreenCountMax, 1, 2, 1, 1);


        m_pLayoutContainerVideo->addLayout(m_pLayoutVideoScreenCount, 2, 1, 2, 1);

        m_pEditorVideoScreenCount = new QSpinBox(m_pContainerVideo);
        m_pEditorVideoScreenCount->setObjectName(QString::fromUtf8("m_pEditorVideoScreenCount"));

        m_pLayoutContainerVideo->addWidget(m_pEditorVideoScreenCount, 2, 2, 1, 1);

        m_pLabelVideoOptions = new QLabel(m_pContainerVideo);
        m_pLabelVideoOptions->setObjectName(QString::fromUtf8("m_pLabelVideoOptions"));
        m_pLabelVideoOptions->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pLayoutContainerVideo->addWidget(m_pLabelVideoOptions, 4, 0, 1, 1);

        m_pCheckbox3D = new QCheckBox(m_pContainerVideo);
        m_pCheckbox3D->setObjectName(QString::fromUtf8("m_pCheckbox3D"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pCheckbox3D->sizePolicy().hasHeightForWidth());
        m_pCheckbox3D->setSizePolicy(sizePolicy);

        m_pLayoutContainerVideo->addWidget(m_pCheckbox3D, 4, 1, 1, 2);

        m_pCheckbox2DVideo = new QCheckBox(m_pContainerVideo);
        m_pCheckbox2DVideo->setObjectName(QString::fromUtf8("m_pCheckbox2DVideo"));
        sizePolicy.setHeightForWidth(m_pCheckbox2DVideo->sizePolicy().hasHeightForWidth());
        m_pCheckbox2DVideo->setSizePolicy(sizePolicy);

        m_pLayoutContainerVideo->addWidget(m_pCheckbox2DVideo, 5, 1, 1, 2);


        m_pLayoutTabVideo->addWidget(m_pContainerVideo);

        m_pStretchVideo = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_pLayoutTabVideo->addItem(m_pStretchVideo);

        m_pTabWidget->addTab(m_pTabVideo, QString());
        m_pTabRemoteDisplay = new QWidget();
        m_pTabRemoteDisplay->setObjectName(QString::fromUtf8("m_pTabRemoteDisplay"));
        m_pLayoutTabRemoteDisplay = new QVBoxLayout(m_pTabRemoteDisplay);
        m_pLayoutTabRemoteDisplay->setObjectName(QString::fromUtf8("m_pLayoutTabRemoteDisplay"));
        m_pContainerRemoteDisplay = new QWidget(m_pTabRemoteDisplay);
        m_pContainerRemoteDisplay->setObjectName(QString::fromUtf8("m_pContainerRemoteDisplay"));
        m_pLayoutContainerRemoteDisplay = new QGridLayout(m_pContainerRemoteDisplay);
        m_pLayoutContainerRemoteDisplay->setObjectName(QString::fromUtf8("m_pLayoutContainerRemoteDisplay"));
        m_pLayoutContainerRemoteDisplay->setContentsMargins(0, 0, 0, 0);
        m_pCheckboxRemoteDisplay = new QCheckBox(m_pContainerRemoteDisplay);
        m_pCheckboxRemoteDisplay->setObjectName(QString::fromUtf8("m_pCheckboxRemoteDisplay"));
        m_pCheckboxRemoteDisplay->setChecked(false);

        m_pLayoutContainerRemoteDisplay->addWidget(m_pCheckboxRemoteDisplay, 0, 0, 1, 2);

        m_pSpacerContainerRemoteDisplay = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        m_pLayoutContainerRemoteDisplay->addItem(m_pSpacerContainerRemoteDisplay, 1, 0, 1, 1);

        m_pContainerRemoteDisplayOptions = new QWidget(m_pContainerRemoteDisplay);
        m_pContainerRemoteDisplayOptions->setObjectName(QString::fromUtf8("m_pContainerRemoteDisplayOptions"));
        m_pLayoutContainerRemoteDisplayServer = new QGridLayout(m_pContainerRemoteDisplayOptions);
        m_pLayoutContainerRemoteDisplayServer->setObjectName(QString::fromUtf8("m_pLayoutContainerRemoteDisplayServer"));
        m_pLayoutContainerRemoteDisplayServer->setContentsMargins(0, 0, 0, 0);
        m_pLabelRemoteDisplayPort = new QLabel(m_pContainerRemoteDisplayOptions);
        m_pLabelRemoteDisplayPort->setObjectName(QString::fromUtf8("m_pLabelRemoteDisplayPort"));
        m_pLabelRemoteDisplayPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pLabelRemoteDisplayPort, 0, 0, 1, 1);

        m_pEditorRemoteDisplayPort = new QLineEdit(m_pContainerRemoteDisplayOptions);
        m_pEditorRemoteDisplayPort->setObjectName(QString::fromUtf8("m_pEditorRemoteDisplayPort"));

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pEditorRemoteDisplayPort, 0, 1, 1, 1);

        m_pLabelRemoteDisplayAuthMethod = new QLabel(m_pContainerRemoteDisplayOptions);
        m_pLabelRemoteDisplayAuthMethod->setObjectName(QString::fromUtf8("m_pLabelRemoteDisplayAuthMethod"));
        m_pLabelRemoteDisplayAuthMethod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pLabelRemoteDisplayAuthMethod, 1, 0, 1, 1);

        m_pComboRemoteDisplayAuthMethod = new QComboBox(m_pContainerRemoteDisplayOptions);
        m_pComboRemoteDisplayAuthMethod->setObjectName(QString::fromUtf8("m_pComboRemoteDisplayAuthMethod"));

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pComboRemoteDisplayAuthMethod, 1, 1, 1, 1);

        m_pLabelRemoteDisplayTimeout = new QLabel(m_pContainerRemoteDisplayOptions);
        m_pLabelRemoteDisplayTimeout->setObjectName(QString::fromUtf8("m_pLabelRemoteDisplayTimeout"));
        m_pLabelRemoteDisplayTimeout->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pLabelRemoteDisplayTimeout, 2, 0, 1, 1);

        m_pEditorRemoteDisplayTimeout = new QLineEdit(m_pContainerRemoteDisplayOptions);
        m_pEditorRemoteDisplayTimeout->setObjectName(QString::fromUtf8("m_pEditorRemoteDisplayTimeout"));

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pEditorRemoteDisplayTimeout, 2, 1, 1, 1);

        m_pLabelRemoteDisplayOptions = new QLabel(m_pContainerRemoteDisplayOptions);
        m_pLabelRemoteDisplayOptions->setObjectName(QString::fromUtf8("m_pLabelRemoteDisplayOptions"));
        m_pLabelRemoteDisplayOptions->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pLabelRemoteDisplayOptions, 3, 0, 1, 1);

        m_pCheckboxMultipleConn = new QCheckBox(m_pContainerRemoteDisplayOptions);
        m_pCheckboxMultipleConn->setObjectName(QString::fromUtf8("m_pCheckboxMultipleConn"));
        sizePolicy.setHeightForWidth(m_pCheckboxMultipleConn->sizePolicy().hasHeightForWidth());
        m_pCheckboxMultipleConn->setSizePolicy(sizePolicy);

        m_pLayoutContainerRemoteDisplayServer->addWidget(m_pCheckboxMultipleConn, 3, 1, 1, 1);


        m_pLayoutContainerRemoteDisplay->addWidget(m_pContainerRemoteDisplayOptions, 1, 1, 1, 1);


        m_pLayoutTabRemoteDisplay->addWidget(m_pContainerRemoteDisplay);

        m_pStretchRemoteDisplay = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_pLayoutTabRemoteDisplay->addItem(m_pStretchRemoteDisplay);

        m_pTabWidget->addTab(m_pTabRemoteDisplay, QString());
        m_pTabVideoCapture = new QWidget();
        m_pTabVideoCapture->setObjectName(QString::fromUtf8("m_pTabVideoCapture"));
        m_pLayoutTabVideoCapture = new QVBoxLayout(m_pTabVideoCapture);
        m_pLayoutTabVideoCapture->setObjectName(QString::fromUtf8("m_pLayoutTabVideoCapture"));
        m_pContainerVideoCapture = new QWidget(m_pTabVideoCapture);
        m_pContainerVideoCapture->setObjectName(QString::fromUtf8("m_pContainerVideoCapture"));
        m_pLayoutContainerVideoCapture = new QGridLayout(m_pContainerVideoCapture);
        m_pLayoutContainerVideoCapture->setObjectName(QString::fromUtf8("m_pLayoutContainerVideoCapture"));
        m_pLayoutContainerVideoCapture->setContentsMargins(0, 0, 0, 0);
        m_pCheckboxVideoCapture = new QCheckBox(m_pContainerVideoCapture);
        m_pCheckboxVideoCapture->setObjectName(QString::fromUtf8("m_pCheckboxVideoCapture"));
        m_pCheckboxVideoCapture->setChecked(false);

        m_pLayoutContainerVideoCapture->addWidget(m_pCheckboxVideoCapture, 0, 0, 1, 2);

        m_pLeftSpacer = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pLayoutContainerVideoCapture->addItem(m_pLeftSpacer, 1, 0, 1, 1);

        m_pContainerVideoCaptureOptions = new QWidget(m_pContainerVideoCapture);
        m_pContainerVideoCaptureOptions->setObjectName(QString::fromUtf8("m_pContainerVideoCaptureOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pContainerVideoCaptureOptions->sizePolicy().hasHeightForWidth());
        m_pContainerVideoCaptureOptions->setSizePolicy(sizePolicy1);
        m_pContainerLayoutVideoCapture = new QGridLayout(m_pContainerVideoCaptureOptions);
        m_pContainerLayoutVideoCapture->setObjectName(QString::fromUtf8("m_pContainerLayoutVideoCapture"));
        m_pContainerLayoutVideoCapture->setContentsMargins(0, 0, 0, 0);
        m_pLabelVideoCapturePath = new QLabel(m_pContainerVideoCaptureOptions);
        m_pLabelVideoCapturePath->setObjectName(QString::fromUtf8("m_pLabelVideoCapturePath"));
        m_pLabelVideoCapturePath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutVideoCapture->addWidget(m_pLabelVideoCapturePath, 0, 0, 1, 1);

        m_pEditorVideoCapturePath = new VBoxFilePathSelectorWidget(m_pContainerVideoCaptureOptions);
        m_pEditorVideoCapturePath->setObjectName(QString::fromUtf8("m_pEditorVideoCapturePath"));

        m_pContainerLayoutVideoCapture->addWidget(m_pEditorVideoCapturePath, 0, 1, 1, 3);

        m_pLabelVideoCaptureSize = new QLabel(m_pContainerVideoCaptureOptions);
        m_pLabelVideoCaptureSize->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureSize"));
        m_pLabelVideoCaptureSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutVideoCapture->addWidget(m_pLabelVideoCaptureSize, 1, 0, 1, 1);

        m_pComboVideoCaptureSize = new QComboBox(m_pContainerVideoCaptureOptions);
        m_pComboVideoCaptureSize->setObjectName(QString::fromUtf8("m_pComboVideoCaptureSize"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pComboVideoCaptureSize->sizePolicy().hasHeightForWidth());
        m_pComboVideoCaptureSize->setSizePolicy(sizePolicy2);

        m_pContainerLayoutVideoCapture->addWidget(m_pComboVideoCaptureSize, 1, 1, 1, 1);

        m_pEditorVideoCaptureWidth = new QSpinBox(m_pContainerVideoCaptureOptions);
        m_pEditorVideoCaptureWidth->setObjectName(QString::fromUtf8("m_pEditorVideoCaptureWidth"));

        m_pContainerLayoutVideoCapture->addWidget(m_pEditorVideoCaptureWidth, 1, 2, 1, 1);

        m_pEditorVideoCaptureHeight = new QSpinBox(m_pContainerVideoCaptureOptions);
        m_pEditorVideoCaptureHeight->setObjectName(QString::fromUtf8("m_pEditorVideoCaptureHeight"));

        m_pContainerLayoutVideoCapture->addWidget(m_pEditorVideoCaptureHeight, 1, 3, 1, 1);

        m_pLabelVideoCaptureFrameRate = new QLabel(m_pContainerVideoCaptureOptions);
        m_pLabelVideoCaptureFrameRate->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureFrameRate"));
        m_pLabelVideoCaptureFrameRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutVideoCapture->addWidget(m_pLabelVideoCaptureFrameRate, 2, 0, 1, 1);

        m_pContainerSliderVideoCaptureFrameRate = new QWidget(m_pContainerVideoCaptureOptions);
        m_pContainerSliderVideoCaptureFrameRate->setObjectName(QString::fromUtf8("m_pContainerSliderVideoCaptureFrameRate"));
        m_pContainerLayoutSliderVideoCaptureFrameRate = new QGridLayout(m_pContainerSliderVideoCaptureFrameRate);
        m_pContainerLayoutSliderVideoCaptureFrameRate->setSpacing(0);
        m_pContainerLayoutSliderVideoCaptureFrameRate->setObjectName(QString::fromUtf8("m_pContainerLayoutSliderVideoCaptureFrameRate"));
        m_pContainerLayoutSliderVideoCaptureFrameRate->setContentsMargins(0, 0, 0, 0);
        m_pSliderVideoCaptureFrameRate = new QIAdvancedSlider(m_pContainerSliderVideoCaptureFrameRate);
        m_pSliderVideoCaptureFrameRate->setObjectName(QString::fromUtf8("m_pSliderVideoCaptureFrameRate"));
        m_pSliderVideoCaptureFrameRate->setOrientation(Qt::Horizontal);

        m_pContainerLayoutSliderVideoCaptureFrameRate->addWidget(m_pSliderVideoCaptureFrameRate, 0, 0, 1, 3);

        m_pLabelVideoCaptureFrameRateMin = new QLabel(m_pContainerSliderVideoCaptureFrameRate);
        m_pLabelVideoCaptureFrameRateMin->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureFrameRateMin"));

        m_pContainerLayoutSliderVideoCaptureFrameRate->addWidget(m_pLabelVideoCaptureFrameRateMin, 1, 0, 1, 1);

        m_pStretchVideoCaptureFrameRate = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pContainerLayoutSliderVideoCaptureFrameRate->addItem(m_pStretchVideoCaptureFrameRate, 1, 1, 1, 1);

        m_pLabelVideoCaptureFrameRateMax = new QLabel(m_pContainerSliderVideoCaptureFrameRate);
        m_pLabelVideoCaptureFrameRateMax->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureFrameRateMax"));

        m_pContainerLayoutSliderVideoCaptureFrameRate->addWidget(m_pLabelVideoCaptureFrameRateMax, 1, 2, 1, 1);


        m_pContainerLayoutVideoCapture->addWidget(m_pContainerSliderVideoCaptureFrameRate, 2, 1, 2, 1);

        m_pEditorVideoCaptureFrameRate = new QSpinBox(m_pContainerVideoCaptureOptions);
        m_pEditorVideoCaptureFrameRate->setObjectName(QString::fromUtf8("m_pEditorVideoCaptureFrameRate"));

        m_pContainerLayoutVideoCapture->addWidget(m_pEditorVideoCaptureFrameRate, 2, 2, 1, 1);

        m_pLabelVideoCaptureFrameRateUnits = new QLabel(m_pContainerVideoCaptureOptions);
        m_pLabelVideoCaptureFrameRateUnits->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureFrameRateUnits"));

        m_pContainerLayoutVideoCapture->addWidget(m_pLabelVideoCaptureFrameRateUnits, 2, 3, 1, 1);

        m_pLabelVideoCaptureRate = new QLabel(m_pContainerVideoCaptureOptions);
        m_pLabelVideoCaptureRate->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureRate"));
        m_pLabelVideoCaptureRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        m_pContainerLayoutVideoCapture->addWidget(m_pLabelVideoCaptureRate, 4, 0, 1, 1);

        m_pContainerSliderVideoCaptureQuality = new QWidget(m_pContainerVideoCaptureOptions);
        m_pContainerSliderVideoCaptureQuality->setObjectName(QString::fromUtf8("m_pContainerSliderVideoCaptureQuality"));
        m_pContainerLayoutSliderVideoCaptureQuality = new QGridLayout(m_pContainerSliderVideoCaptureQuality);
        m_pContainerLayoutSliderVideoCaptureQuality->setSpacing(0);
        m_pContainerLayoutSliderVideoCaptureQuality->setObjectName(QString::fromUtf8("m_pContainerLayoutSliderVideoCaptureQuality"));
        m_pContainerLayoutSliderVideoCaptureQuality->setContentsMargins(0, 0, 0, 0);
        m_pSliderVideoCaptureQuality = new QIAdvancedSlider(m_pContainerSliderVideoCaptureQuality);
        m_pSliderVideoCaptureQuality->setObjectName(QString::fromUtf8("m_pSliderVideoCaptureQuality"));
        m_pSliderVideoCaptureQuality->setOrientation(Qt::Horizontal);

        m_pContainerLayoutSliderVideoCaptureQuality->addWidget(m_pSliderVideoCaptureQuality, 0, 0, 1, 5);

        m_pLabelVideoCaptureQualityMin = new QLabel(m_pContainerSliderVideoCaptureQuality);
        m_pLabelVideoCaptureQualityMin->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureQualityMin"));

        m_pContainerLayoutSliderVideoCaptureQuality->addWidget(m_pLabelVideoCaptureQualityMin, 1, 0, 1, 1);

        m_pStretchVideoCaptureQualityLeft = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pContainerLayoutSliderVideoCaptureQuality->addItem(m_pStretchVideoCaptureQualityLeft, 1, 1, 1, 1);

        m_pLabelVideoCaptureQualityMed = new QLabel(m_pContainerSliderVideoCaptureQuality);
        m_pLabelVideoCaptureQualityMed->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureQualityMed"));

        m_pContainerLayoutSliderVideoCaptureQuality->addWidget(m_pLabelVideoCaptureQualityMed, 1, 2, 1, 1);

        m_pStretchVideoCaptureQualityRight = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_pContainerLayoutSliderVideoCaptureQuality->addItem(m_pStretchVideoCaptureQualityRight, 1, 3, 1, 1);

        m_pLabelVideoCaptureQualityMax = new QLabel(m_pContainerSliderVideoCaptureQuality);
        m_pLabelVideoCaptureQualityMax->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureQualityMax"));

        m_pContainerLayoutSliderVideoCaptureQuality->addWidget(m_pLabelVideoCaptureQualityMax, 1, 4, 1, 1);


        m_pContainerLayoutVideoCapture->addWidget(m_pContainerSliderVideoCaptureQuality, 4, 1, 2, 1);

        m_pEditorVideoCaptureBitRate = new QSpinBox(m_pContainerVideoCaptureOptions);
        m_pEditorVideoCaptureBitRate->setObjectName(QString::fromUtf8("m_pEditorVideoCaptureBitRate"));

        m_pContainerLayoutVideoCapture->addWidget(m_pEditorVideoCaptureBitRate, 4, 2, 1, 1);

        m_pLabelVideoCaptureBitRateUnits = new QLabel(m_pContainerVideoCaptureOptions);
        m_pLabelVideoCaptureBitRateUnits->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureBitRateUnits"));

        m_pContainerLayoutVideoCapture->addWidget(m_pLabelVideoCaptureBitRateUnits, 4, 3, 1, 1);

        m_pLabelVideoCaptureScreens = new QLabel(m_pContainerVideoCaptureOptions);
        m_pLabelVideoCaptureScreens->setObjectName(QString::fromUtf8("m_pLabelVideoCaptureScreens"));
        m_pLabelVideoCaptureScreens->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignTop);

        m_pContainerLayoutVideoCapture->addWidget(m_pLabelVideoCaptureScreens, 6, 0, 1, 1);

        m_pScrollerVideoCaptureScreens = new UIFilmContainer(m_pContainerVideoCaptureOptions);
        m_pScrollerVideoCaptureScreens->setObjectName(QString::fromUtf8("m_pScrollerVideoCaptureScreens"));

        m_pContainerLayoutVideoCapture->addWidget(m_pScrollerVideoCaptureScreens, 6, 1, 1, 3);


        m_pLayoutContainerVideoCapture->addWidget(m_pContainerVideoCaptureOptions, 1, 1, 1, 1);


        m_pLayoutTabVideoCapture->addWidget(m_pContainerVideoCapture);

        m_pStretchVideoCapture = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_pLayoutTabVideoCapture->addItem(m_pStretchVideoCapture);

        m_pTabWidget->addTab(m_pTabVideoCapture, QString());

        m_pLayoutMain->addWidget(m_pTabWidget);

#ifndef QT_NO_SHORTCUT
        m_pLabelVideoMemorySize->setBuddy(m_pEditorVideoMemorySize);
        m_pLabelVideoScreenCount->setBuddy(m_pEditorVideoScreenCount);
        m_pLabelRemoteDisplayPort->setBuddy(m_pEditorRemoteDisplayPort);
        m_pLabelRemoteDisplayAuthMethod->setBuddy(m_pComboRemoteDisplayAuthMethod);
        m_pLabelRemoteDisplayTimeout->setBuddy(m_pEditorRemoteDisplayTimeout);
        m_pLabelVideoCapturePath->setBuddy(m_pEditorVideoCapturePath);
        m_pLabelVideoCaptureSize->setBuddy(m_pComboVideoCaptureSize);
        m_pLabelVideoCaptureFrameRate->setBuddy(m_pSliderVideoCaptureFrameRate);
        m_pLabelVideoCaptureRate->setBuddy(m_pSliderVideoCaptureQuality);
        m_pLabelVideoCaptureScreens->setBuddy(m_pScrollerVideoCaptureScreens);
#endif // QT_NO_SHORTCUT

        retranslateUi(UIMachineSettingsDisplay);
        QObject::connect(m_pCheckboxRemoteDisplay, SIGNAL(toggled(bool)), m_pContainerRemoteDisplayOptions, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(UIMachineSettingsDisplay);
    } // setupUi

    void retranslateUi(QWidget *UIMachineSettingsDisplay)
    {
        m_pLabelVideoMemorySize->setText(QApplication::translate("UIMachineSettingsDisplay", "Video &Memory:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSliderVideoMemorySize->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "Controls the amount of video memory provided to the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorVideoMemorySize->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "Controls the amount of video memory provided to the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelVideoMemoryUnit->setText(QApplication::translate("UIMachineSettingsDisplay", "MB", 0, QApplication::UnicodeUTF8));
        m_pLabelVideoScreenCount->setText(QApplication::translate("UIMachineSettingsDisplay", "Mo&nitor Count:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSliderVideoScreenCount->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "Controls the amount of virtual monitors provided to the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorVideoScreenCount->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "Controls the amount of virtual monitors provided to the virtual machine.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelVideoOptions->setText(QApplication::translate("UIMachineSettingsDisplay", "Extended Features:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckbox3D->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "When checked, the virtual machine will be given access to the 3D graphics capabilities available on the host.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckbox3D->setText(QApplication::translate("UIMachineSettingsDisplay", "Enable &3D Acceleration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckbox2DVideo->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "When checked, the virtual machine will be given access to the Video Acceleration capabilities available on the host.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckbox2DVideo->setText(QApplication::translate("UIMachineSettingsDisplay", "Enable &2D Video Acceleration", 0, QApplication::UnicodeUTF8));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabVideo), QApplication::translate("UIMachineSettingsDisplay", "&Video", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckboxRemoteDisplay->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "When checked, the VM will act as a Remote Desktop Protocol (RDP) server, allowing remote clients to connect and operate the VM (when it is running) using a standard RDP client.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckboxRemoteDisplay->setText(QApplication::translate("UIMachineSettingsDisplay", "&Enable Server", 0, QApplication::UnicodeUTF8));
        m_pLabelRemoteDisplayPort->setText(QApplication::translate("UIMachineSettingsDisplay", "Server &Port:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pEditorRemoteDisplayPort->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "The VRDP Server port number. You may specify <tt>0</tt> (zero), to select port 3389, the standard port for RDP.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelRemoteDisplayAuthMethod->setText(QApplication::translate("UIMachineSettingsDisplay", "Authentication &Method:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pComboRemoteDisplayAuthMethod->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "Defines the VRDP authentication method.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelRemoteDisplayTimeout->setText(QApplication::translate("UIMachineSettingsDisplay", "Authentication &Timeout:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pEditorRemoteDisplayTimeout->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "Specifies the timeout for guest authentication, in milliseconds.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelRemoteDisplayOptions->setText(QApplication::translate("UIMachineSettingsDisplay", "Extended Features:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckboxMultipleConn->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "Specifies whether multiple simultaneous connections to the VM are permitted.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckboxMultipleConn->setText(QApplication::translate("UIMachineSettingsDisplay", "&Allow Multiple Connections", 0, QApplication::UnicodeUTF8));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabRemoteDisplay), QApplication::translate("UIMachineSettingsDisplay", "&Remote Display", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pCheckboxVideoCapture->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "When checked, VirtualBox will record the virtual machine session as a video file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pCheckboxVideoCapture->setText(QApplication::translate("UIMachineSettingsDisplay", "&Enable Video Capture", 0, QApplication::UnicodeUTF8));
        m_pLabelVideoCapturePath->setText(QApplication::translate("UIMachineSettingsDisplay", "File &Path:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pEditorVideoCapturePath->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the filename VirtualBox uses to save the recorded content.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelVideoCaptureSize->setText(QApplication::translate("UIMachineSettingsDisplay", "Frame &Size:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pComboVideoCaptureSize->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the resolution (frame size) of the recorded video.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorVideoCaptureWidth->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the <b>horizontal</b> resolution (frame width) of the recorded video.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorVideoCaptureHeight->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the <b>vertical</b> resolution (frame height) of the recorded video.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelVideoCaptureFrameRate->setText(QApplication::translate("UIMachineSettingsDisplay", "&Frame Rate:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSliderVideoCaptureFrameRate->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the maximum number of <b>frames per second</b>. Additional frames will be skipped. Reducing this value will increase the number of skipped frames and reduce the file size.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorVideoCaptureFrameRate->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the maximum number of <b>frames per second</b>. Additional frames will be skipped. Reducing this value will increase the number of skipped frames and reduce the file size.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelVideoCaptureRate->setText(QApplication::translate("UIMachineSettingsDisplay", "&Quality:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pSliderVideoCaptureQuality->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the <b>quality</b>. Increasing this value will make the video look better at the cost of an increased file size.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_pEditorVideoCaptureBitRate->setWhatsThis(QApplication::translate("UIMachineSettingsDisplay", "This setting determines the bitrate in <b>kilobits per second</b>. Increasing this value will make the video look better at the cost of an increased file size.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLabelVideoCaptureScreens->setText(QApplication::translate("UIMachineSettingsDisplay", "&Screens:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        m_pScrollerVideoCaptureScreens->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabVideoCapture), QApplication::translate("UIMachineSettingsDisplay", "Video &Capture", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIMachineSettingsDisplay);
    } // retranslateUi

};

namespace Ui {
    class UIMachineSettingsDisplay: public Ui_UIMachineSettingsDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMACHINESETTINGSDISPLAY_H
