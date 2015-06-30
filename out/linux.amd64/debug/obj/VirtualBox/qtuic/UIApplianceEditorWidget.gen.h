/*

 VBox frontends: Qt4 GUI ("VirtualBox"):

 Copyright (C) 2009-2013 Oracle Corporation

 This file is part of VirtualBox Open Source Edition (OSE), as
 available from http://www.virtualbox.org. This file is free software;
 you can redistribute it and/or modify it under the terms of the GNU
 General Public License (GPL) as published by the Free Software
 Foundation, in version 2 as it comes in the "COPYING" file of the
 VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 
*/

/********************************************************************************
** Form generated from reading UI file 'UIApplianceEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIAPPLIANCEEDITORWIDGET_H
#define UIAPPLIANCEEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIApplianceEditorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *m_pInfoWidget;
    QVBoxLayout *m_pInfoPaneLayout;
    QTreeView *m_pTvSettings;
    QCheckBox *m_pReinitMACsCheckBox;
    QWidget *m_pWarningWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *mWarningTextEdit;

    void setupUi(QWidget *UIApplianceEditorWidget)
    {
        if (UIApplianceEditorWidget->objectName().isEmpty())
            UIApplianceEditorWidget->setObjectName(QString::fromUtf8("UIApplianceEditorWidget"));
        UIApplianceEditorWidget->resize(548, 411);
        verticalLayout_2 = new QVBoxLayout(UIApplianceEditorWidget);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_pInfoWidget = new QWidget(UIApplianceEditorWidget);
        m_pInfoWidget->setObjectName(QString::fromUtf8("m_pInfoWidget"));
        m_pInfoPaneLayout = new QVBoxLayout(m_pInfoWidget);
        m_pInfoPaneLayout->setContentsMargins(0, 0, 0, 0);
        m_pInfoPaneLayout->setObjectName(QString::fromUtf8("m_pInfoPaneLayout"));
        m_pTvSettings = new QTreeView(m_pInfoWidget);
        m_pTvSettings->setObjectName(QString::fromUtf8("m_pTvSettings"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pTvSettings->sizePolicy().hasHeightForWidth());
        m_pTvSettings->setSizePolicy(sizePolicy);

        m_pInfoPaneLayout->addWidget(m_pTvSettings);

        m_pReinitMACsCheckBox = new QCheckBox(m_pInfoWidget);
        m_pReinitMACsCheckBox->setObjectName(QString::fromUtf8("m_pReinitMACsCheckBox"));

        m_pInfoPaneLayout->addWidget(m_pReinitMACsCheckBox);


        verticalLayout_2->addWidget(m_pInfoWidget);

        m_pWarningWidget = new QWidget(UIApplianceEditorWidget);
        m_pWarningWidget->setObjectName(QString::fromUtf8("m_pWarningWidget"));
        m_pWarningWidget->setVisible(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pWarningWidget->sizePolicy().hasHeightForWidth());
        m_pWarningWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(m_pWarningWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(m_pWarningWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mWarningTextEdit = new QTextEdit(m_pWarningWidget);
        mWarningTextEdit->setObjectName(QString::fromUtf8("mWarningTextEdit"));
        mWarningTextEdit->setMaximumSize(QSize(16777215, 50));
        mWarningTextEdit->setAutoFormatting(QTextEdit::AutoBulletList);
        mWarningTextEdit->setReadOnly(true);

        verticalLayout->addWidget(mWarningTextEdit);


        verticalLayout_2->addWidget(m_pWarningWidget);


        retranslateUi(UIApplianceEditorWidget);

        QMetaObject::connectSlotsByName(UIApplianceEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *UIApplianceEditorWidget)
    {
#ifndef QT_NO_TOOLTIP
        m_pReinitMACsCheckBox->setToolTip(QApplication::translate("UIApplianceEditorWidget", "When checked a new unique MAC address will assigned to all configured network cards.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pReinitMACsCheckBox->setText(QApplication::translate("UIApplianceEditorWidget", "&Reinitialize the MAC address of all network cards", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UIApplianceEditorWidget", "Warnings:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(UIApplianceEditorWidget);
    } // retranslateUi

};

namespace Ui {
    class UIApplianceEditorWidget: public Ui_UIApplianceEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIAPPLIANCEEDITORWIDGET_H
