/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2006-2012 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIMediumManager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMEDIUMMANAGER_H
#define UIMEDIUMMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QIDialogButtonBox.h"
#include "QILabel.h"
#include "QITabWidget.h"
#include "QITreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIMediumManager
{
public:
    QWidget *mCentralWidget;
    QVBoxLayout *vboxLayout;
    QITabWidget *mTabWidget;
    QWidget *mTabHD;
    QVBoxLayout *vboxLayout1;
    QITreeWidget *mTwHD;
    QFrame *mHDContainer;
    QGridLayout *gridLayout;
    QLabel *m_pTypeLabel;
    QILabel *m_pTypePane;
    QLabel *m_pLocationLabel;
    QILabel *m_pLocationPane;
    QLabel *m_pFormatLabel;
    QILabel *m_pFormatPane;
    QLabel *m_pDetailsLabel;
    QILabel *m_pDetailsPane;
    QLabel *m_pUsageLabel;
    QILabel *m_pUsagePane;
    QWidget *mTabCD;
    QVBoxLayout *vboxLayout2;
    QITreeWidget *mTwCD;
    QFrame *mCDContainer;
    QGridLayout *gridLayout1;
    QLabel *mLbCD1;
    QILabel *mIpCD1;
    QLabel *mLbCD2;
    QILabel *mIpCD2;
    QWidget *mTabFD;
    QVBoxLayout *vboxLayout3;
    QITreeWidget *mTwFD;
    QFrame *mFDContainer;
    QGridLayout *gridLayout2;
    QLabel *mLbFD1;
    QILabel *mIpFD1;
    QLabel *mLbFD2;
    QILabel *mIpFD2;
    QIDialogButtonBox *mButtonBox;
    QStatusBar *mStatusBar;

    void setupUi(QMainWindow *UIMediumManager)
    {
        if (UIMediumManager->objectName().isEmpty())
            UIMediumManager->setObjectName(QString::fromUtf8("UIMediumManager"));
        UIMediumManager->resize(620, 460);
        UIMediumManager->setMinimumSize(QSize(280, 190));
        mCentralWidget = new QWidget(UIMediumManager);
        mCentralWidget->setObjectName(QString::fromUtf8("mCentralWidget"));
        vboxLayout = new QVBoxLayout(mCentralWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mTabWidget = new QITabWidget(mCentralWidget);
        mTabWidget->setObjectName(QString::fromUtf8("mTabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTabWidget->sizePolicy().hasHeightForWidth());
        mTabWidget->setSizePolicy(sizePolicy);
        mTabHD = new QWidget();
        mTabHD->setObjectName(QString::fromUtf8("mTabHD"));
        vboxLayout1 = new QVBoxLayout(mTabHD);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        mTwHD = new QITreeWidget(mTabHD);
        mTwHD->setObjectName(QString::fromUtf8("mTwHD"));
        mTwHD->setContextMenuPolicy(Qt::CustomContextMenu);
        mTwHD->setAcceptDrops(true);
        mTwHD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mTwHD->setAlternatingRowColors(true);
        mTwHD->setAllColumnsShowFocus(true);

        vboxLayout1->addWidget(mTwHD);

        mHDContainer = new QFrame(mTabHD);
        mHDContainer->setObjectName(QString::fromUtf8("mHDContainer"));
        mHDContainer->setFrameShape(QFrame::Box);
        mHDContainer->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(mHDContainer);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        m_pTypeLabel = new QLabel(mHDContainer);
        m_pTypeLabel->setObjectName(QString::fromUtf8("m_pTypeLabel"));

        gridLayout->addWidget(m_pTypeLabel, 0, 0, 1, 1);

        m_pTypePane = new QILabel(mHDContainer);
        m_pTypePane->setObjectName(QString::fromUtf8("m_pTypePane"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pTypePane->sizePolicy().hasHeightForWidth());
        m_pTypePane->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pTypePane, 0, 1, 1, 1);

        m_pLocationLabel = new QLabel(mHDContainer);
        m_pLocationLabel->setObjectName(QString::fromUtf8("m_pLocationLabel"));

        gridLayout->addWidget(m_pLocationLabel, 1, 0, 1, 1);

        m_pLocationPane = new QILabel(mHDContainer);
        m_pLocationPane->setObjectName(QString::fromUtf8("m_pLocationPane"));
        sizePolicy1.setHeightForWidth(m_pLocationPane->sizePolicy().hasHeightForWidth());
        m_pLocationPane->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pLocationPane, 1, 1, 1, 1);

        m_pFormatLabel = new QLabel(mHDContainer);
        m_pFormatLabel->setObjectName(QString::fromUtf8("m_pFormatLabel"));

        gridLayout->addWidget(m_pFormatLabel, 2, 0, 1, 1);

        m_pFormatPane = new QILabel(mHDContainer);
        m_pFormatPane->setObjectName(QString::fromUtf8("m_pFormatPane"));
        sizePolicy1.setHeightForWidth(m_pFormatPane->sizePolicy().hasHeightForWidth());
        m_pFormatPane->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pFormatPane, 2, 1, 1, 1);

        m_pDetailsLabel = new QLabel(mHDContainer);
        m_pDetailsLabel->setObjectName(QString::fromUtf8("m_pDetailsLabel"));

        gridLayout->addWidget(m_pDetailsLabel, 3, 0, 1, 1);

        m_pDetailsPane = new QILabel(mHDContainer);
        m_pDetailsPane->setObjectName(QString::fromUtf8("m_pDetailsPane"));
        sizePolicy1.setHeightForWidth(m_pDetailsPane->sizePolicy().hasHeightForWidth());
        m_pDetailsPane->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pDetailsPane, 3, 1, 1, 1);

        m_pUsageLabel = new QLabel(mHDContainer);
        m_pUsageLabel->setObjectName(QString::fromUtf8("m_pUsageLabel"));

        gridLayout->addWidget(m_pUsageLabel, 4, 0, 1, 1);

        m_pUsagePane = new QILabel(mHDContainer);
        m_pUsagePane->setObjectName(QString::fromUtf8("m_pUsagePane"));
        sizePolicy1.setHeightForWidth(m_pUsagePane->sizePolicy().hasHeightForWidth());
        m_pUsagePane->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pUsagePane, 4, 1, 1, 1);


        vboxLayout1->addWidget(mHDContainer);

        mTabWidget->addTab(mTabHD, QString());
        mTabCD = new QWidget();
        mTabCD->setObjectName(QString::fromUtf8("mTabCD"));
        vboxLayout2 = new QVBoxLayout(mTabCD);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        mTwCD = new QITreeWidget(mTabCD);
        mTwCD->setObjectName(QString::fromUtf8("mTwCD"));
        mTwCD->setContextMenuPolicy(Qt::CustomContextMenu);
        mTwCD->setAcceptDrops(true);
        mTwCD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mTwCD->setAlternatingRowColors(true);
        mTwCD->setAllColumnsShowFocus(true);

        vboxLayout2->addWidget(mTwCD);

        mCDContainer = new QFrame(mTabCD);
        mCDContainer->setObjectName(QString::fromUtf8("mCDContainer"));
        mCDContainer->setFrameShape(QFrame::Box);
        mCDContainer->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(mCDContainer);
        gridLayout1->setContentsMargins(5, 5, 5, 5);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setVerticalSpacing(0);
        mLbCD1 = new QLabel(mCDContainer);
        mLbCD1->setObjectName(QString::fromUtf8("mLbCD1"));

        gridLayout1->addWidget(mLbCD1, 0, 0, 1, 1);

        mIpCD1 = new QILabel(mCDContainer);
        mIpCD1->setObjectName(QString::fromUtf8("mIpCD1"));
        sizePolicy1.setHeightForWidth(mIpCD1->sizePolicy().hasHeightForWidth());
        mIpCD1->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(mIpCD1, 0, 1, 1, 1);

        mLbCD2 = new QLabel(mCDContainer);
        mLbCD2->setObjectName(QString::fromUtf8("mLbCD2"));

        gridLayout1->addWidget(mLbCD2, 1, 0, 1, 1);

        mIpCD2 = new QILabel(mCDContainer);
        mIpCD2->setObjectName(QString::fromUtf8("mIpCD2"));
        sizePolicy1.setHeightForWidth(mIpCD2->sizePolicy().hasHeightForWidth());
        mIpCD2->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(mIpCD2, 1, 1, 1, 1);


        vboxLayout2->addWidget(mCDContainer);

        mTabWidget->addTab(mTabCD, QString());
        mTabFD = new QWidget();
        mTabFD->setObjectName(QString::fromUtf8("mTabFD"));
        vboxLayout3 = new QVBoxLayout(mTabFD);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        mTwFD = new QITreeWidget(mTabFD);
        mTwFD->setObjectName(QString::fromUtf8("mTwFD"));
        mTwFD->setContextMenuPolicy(Qt::CustomContextMenu);
        mTwFD->setAcceptDrops(true);
        mTwFD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mTwFD->setAlternatingRowColors(true);
        mTwFD->setAllColumnsShowFocus(true);

        vboxLayout3->addWidget(mTwFD);

        mFDContainer = new QFrame(mTabFD);
        mFDContainer->setObjectName(QString::fromUtf8("mFDContainer"));
        mFDContainer->setFrameShape(QFrame::Box);
        mFDContainer->setFrameShadow(QFrame::Sunken);
        gridLayout2 = new QGridLayout(mFDContainer);
        gridLayout2->setContentsMargins(5, 5, 5, 5);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(0);
        mLbFD1 = new QLabel(mFDContainer);
        mLbFD1->setObjectName(QString::fromUtf8("mLbFD1"));

        gridLayout2->addWidget(mLbFD1, 0, 0, 1, 1);

        mIpFD1 = new QILabel(mFDContainer);
        mIpFD1->setObjectName(QString::fromUtf8("mIpFD1"));
        sizePolicy1.setHeightForWidth(mIpFD1->sizePolicy().hasHeightForWidth());
        mIpFD1->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(mIpFD1, 0, 1, 1, 1);

        mLbFD2 = new QLabel(mFDContainer);
        mLbFD2->setObjectName(QString::fromUtf8("mLbFD2"));

        gridLayout2->addWidget(mLbFD2, 1, 0, 1, 1);

        mIpFD2 = new QILabel(mFDContainer);
        mIpFD2->setObjectName(QString::fromUtf8("mIpFD2"));
        sizePolicy1.setHeightForWidth(mIpFD2->sizePolicy().hasHeightForWidth());
        mIpFD2->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(mIpFD2, 1, 1, 1, 1);


        vboxLayout3->addWidget(mFDContainer);

        mTabWidget->addTab(mTabFD, QString());

        vboxLayout->addWidget(mTabWidget);

        mButtonBox = new QIDialogButtonBox(mCentralWidget);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Help|QDialogButtonBox::Ok);

        vboxLayout->addWidget(mButtonBox);

        UIMediumManager->setCentralWidget(mCentralWidget);
        mStatusBar = new QStatusBar(UIMediumManager);
        mStatusBar->setObjectName(QString::fromUtf8("mStatusBar"));
        UIMediumManager->setStatusBar(mStatusBar);

        retranslateUi(UIMediumManager);

        QMetaObject::connectSlotsByName(UIMediumManager);
    } // setupUi

    void retranslateUi(QMainWindow *UIMediumManager)
    {
        mTabWidget->setTabText(mTabWidget->indexOf(mTabHD), QApplication::translate("UIMediumManager", "Page", 0, QApplication::UnicodeUTF8));
        mTabWidget->setTabText(mTabWidget->indexOf(mTabCD), QApplication::translate("UIMediumManager", "Page", 0, QApplication::UnicodeUTF8));
        mTabWidget->setTabText(mTabWidget->indexOf(mTabFD), QApplication::translate("UIMediumManager", "Page", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIMediumManager);
    } // retranslateUi

};

namespace Ui {
    class UIMediumManager: public Ui_UIMediumManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMEDIUMMANAGER_H
