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
** Form generated from reading UI file 'VBoxSnapshotsWgt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VBOXSNAPSHOTSWGT_H
#define VBOXSNAPSHOTSWGT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VBoxSnapshotsWgt
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *mTreeWidget;

    void setupUi(QWidget *VBoxSnapshotsWgt)
    {
        if (VBoxSnapshotsWgt->objectName().isEmpty())
            VBoxSnapshotsWgt->setObjectName(QString::fromUtf8("VBoxSnapshotsWgt"));
        VBoxSnapshotsWgt->resize(400, 300);
        vboxLayout = new QVBoxLayout(VBoxSnapshotsWgt);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        mTreeWidget = new QTreeWidget(VBoxSnapshotsWgt);
        mTreeWidget->setObjectName(QString::fromUtf8("mTreeWidget"));
        mTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        mTreeWidget->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(mTreeWidget);


        retranslateUi(VBoxSnapshotsWgt);

        QMetaObject::connectSlotsByName(VBoxSnapshotsWgt);
    } // setupUi

    void retranslateUi(QWidget *VBoxSnapshotsWgt)
    {
        VBoxSnapshotsWgt->setWindowTitle(QApplication::translate("VBoxSnapshotsWgt", "VBoxSnapshotsWgt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VBoxSnapshotsWgt: public Ui_VBoxSnapshotsWgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VBOXSNAPSHOTSWGT_H
