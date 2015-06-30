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
** Form generated from reading UI file 'UIVMLogViewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIVMLOGVIEWER_H
#define UIVMLOGVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QIDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_UIVMLogViewer
{
public:
    QWidget *m_pCentralWidget;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *m_pMainLayout;
    QIDialogButtonBox *m_pButtonBox;

    void setupUi(QMainWindow *UIVMLogViewer)
    {
        if (UIVMLogViewer->objectName().isEmpty())
            UIVMLogViewer->setObjectName(QString::fromUtf8("UIVMLogViewer"));
        UIVMLogViewer->resize(588, 409);
        m_pCentralWidget = new QWidget(UIVMLogViewer);
        m_pCentralWidget->setObjectName(QString::fromUtf8("m_pCentralWidget"));
        vboxLayout = new QVBoxLayout(m_pCentralWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_pMainLayout = new QVBoxLayout();
        m_pMainLayout->setSpacing(0);
#ifndef Q_OS_MAC
        m_pMainLayout->setContentsMargins(0, 0, 0, 0);
#endif
        m_pMainLayout->setObjectName(QString::fromUtf8("m_pMainLayout"));

        vboxLayout->addLayout(m_pMainLayout);

        m_pButtonBox = new QIDialogButtonBox(m_pCentralWidget);
        m_pButtonBox->setObjectName(QString::fromUtf8("m_pButtonBox"));
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Save);

        vboxLayout->addWidget(m_pButtonBox);

        UIVMLogViewer->setCentralWidget(m_pCentralWidget);

        retranslateUi(UIVMLogViewer);

        QMetaObject::connectSlotsByName(UIVMLogViewer);
    } // setupUi

    void retranslateUi(QMainWindow *UIVMLogViewer)
    {
        Q_UNUSED(UIVMLogViewer);
    } // retranslateUi

};

namespace Ui {
    class UIVMLogViewer: public Ui_UIVMLogViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIVMLOGVIEWER_H
