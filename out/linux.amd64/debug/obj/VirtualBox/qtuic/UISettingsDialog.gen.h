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
** Form generated from reading UI file 'UISettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UISETTINGSDIALOG_H
#define UISETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>
#include "QIDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_UISettingsDialog
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *m_pLbTitle;
    QWidget *m_pWtStackHandler;
    QIDialogButtonBox *m_pButtonBox;

    void setupUi(QMainWindow *UISettingsDialog)
    {
        if (UISettingsDialog->objectName().isEmpty())
            UISettingsDialog->setObjectName(QString::fromUtf8("UISettingsDialog"));
        UISettingsDialog->resize(550, 450);
        centralwidget = new QWidget(UISettingsDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pLbTitle = new QLabel(centralwidget);
        m_pLbTitle->setObjectName(QString::fromUtf8("m_pLbTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pLbTitle->sizePolicy().hasHeightForWidth());
        m_pLbTitle->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        m_pLbTitle->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        m_pLbTitle->setFont(font);
        m_pLbTitle->setAutoFillBackground(true);
        m_pLbTitle->setFrameShape(QFrame::Box);
        m_pLbTitle->setFrameShadow(QFrame::Sunken);
        m_pLbTitle->setMargin(7);

        gridLayout->addWidget(m_pLbTitle, 0, 1, 1, 1);

        m_pWtStackHandler = new QWidget(centralwidget);
        m_pWtStackHandler->setObjectName(QString::fromUtf8("m_pWtStackHandler"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pWtStackHandler->sizePolicy().hasHeightForWidth());
        m_pWtStackHandler->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_pWtStackHandler, 1, 1, 1, 1);

        m_pButtonBox = new QIDialogButtonBox(centralwidget);
        m_pButtonBox->setObjectName(QString::fromUtf8("m_pButtonBox"));
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(m_pButtonBox, 2, 0, 1, 2);

        UISettingsDialog->setCentralWidget(centralwidget);

        retranslateUi(UISettingsDialog);
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), UISettingsDialog, SLOT(reject()));
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), UISettingsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(UISettingsDialog);
    } // setupUi

    void retranslateUi(QMainWindow *UISettingsDialog)
    {
#ifndef QT_NO_WHATSTHIS
        UISettingsDialog->setWhatsThis(QApplication::translate("UISettingsDialog", "<i>Select a settings category from the list on the left-hand side and move the mouse over a settings item to get more information.</i>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        m_pLbTitle->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UISettingsDialog: public Ui_UISettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UISETTINGSDIALOG_H
