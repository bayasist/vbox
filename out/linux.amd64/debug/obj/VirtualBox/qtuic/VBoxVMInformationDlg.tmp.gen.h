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
** Form generated from reading UI file 'VBoxVMInformationDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VBOXVMINFORMATIONDLG_H
#define VBOXVMINFORMATIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QIDialogButtonBox.h"
#include "QITabWidget.h"
#include "VBoxUtils.h"

QT_BEGIN_NAMESPACE

class Ui_VBoxVMInformationDlg
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QITabWidget *mInfoStack;
    QWidget *mPage1;
    QVBoxLayout *vboxLayout1;
    QRichTextEdit *mDetailsText;
    QWidget *mPage2;
    QVBoxLayout *vboxLayout2;
    QRichTextEdit *mStatisticText;
    QIDialogButtonBox *mButtonBox;

    void setupUi(QMainWindow *VBoxVMInformationDlg)
    {
        if (VBoxVMInformationDlg->objectName().isEmpty())
            VBoxVMInformationDlg->setObjectName(QString::fromUtf8("VBoxVMInformationDlg"));
        VBoxVMInformationDlg->resize(487, 391);
        centralwidget = new QWidget(VBoxVMInformationDlg);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mInfoStack = new QITabWidget(centralwidget);
        mInfoStack->setObjectName(QString::fromUtf8("mInfoStack"));
        mPage1 = new QWidget();
        mPage1->setObjectName(QString::fromUtf8("mPage1"));
        vboxLayout1 = new QVBoxLayout(mPage1);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        mDetailsText = new QRichTextEdit(mPage1);
        mDetailsText->setObjectName(QString::fromUtf8("mDetailsText"));
        mDetailsText->setFrameShape(QFrame::NoFrame);
        mDetailsText->setFrameShadow(QFrame::Plain);
        mDetailsText->setReadOnly(true);

        vboxLayout1->addWidget(mDetailsText);

        const QIcon icon = QIcon(QString::fromUtf8(":/session_info_details_16px.png"));
        mInfoStack->addTab(mPage1, icon, QString());
        mPage2 = new QWidget();
        mPage2->setObjectName(QString::fromUtf8("mPage2"));
        vboxLayout2 = new QVBoxLayout(mPage2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        mStatisticText = new QRichTextEdit(mPage2);
        mStatisticText->setObjectName(QString::fromUtf8("mStatisticText"));
        mStatisticText->setFrameShape(QFrame::NoFrame);
        mStatisticText->setFrameShadow(QFrame::Plain);
        mStatisticText->setReadOnly(true);

        vboxLayout2->addWidget(mStatisticText);

        const QIcon icon1 = QIcon(QString::fromUtf8(":/session_info_runtime_16px.png"));
        mInfoStack->addTab(mPage2, icon1, QString());

        vboxLayout->addWidget(mInfoStack);

        mButtonBox = new QIDialogButtonBox(centralwidget);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Close);

        vboxLayout->addWidget(mButtonBox);

        VBoxVMInformationDlg->setCentralWidget(centralwidget);

        retranslateUi(VBoxVMInformationDlg);
        QObject::connect(mButtonBox, SIGNAL(rejected()), VBoxVMInformationDlg, SLOT(close()));

        mInfoStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VBoxVMInformationDlg);
    } // setupUi

    void retranslateUi(QMainWindow *VBoxVMInformationDlg)
    {
        VBoxVMInformationDlg->setWindowTitle(QApplication::translate("VBoxVMInformationDlg", "VBoxVMInformationDlg", 0, QApplication::UnicodeUTF8));
        mInfoStack->setTabText(mInfoStack->indexOf(mPage1), QApplication::translate("VBoxVMInformationDlg", "Configuration &Details", 0, QApplication::UnicodeUTF8));
        mInfoStack->setTabText(mInfoStack->indexOf(mPage2), QApplication::translate("VBoxVMInformationDlg", "&Runtime Information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VBoxVMInformationDlg: public Ui_VBoxVMInformationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VBOXVMINFORMATIONDLG_H
