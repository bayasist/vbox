/****************************************************************************
** Meta object code from reading C++ file 'UISelectorWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/UISelectorWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UISelectorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UISelectorWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x08,
      49,   18,   17,   17, 0x08,
      90,   77,   17,   17, 0x08,
     122,   17,   17,   17, 0x08,
     161,  157,   17,   17, 0x08,
     196,   17,   17,   17, 0x08,
     231,  219,   17,   17, 0x08,
     269,   17,   17,   17, 0x28,
     300,   17,   17,   17, 0x08,
     331,   17,   17,   17, 0x08,
     358,   17,   17,   17, 0x08,
     375,  219,   17,   17, 0x08,
     408,   17,   17,   17, 0x28,
     463,  434,   17,   17, 0x08,
     540,  517,   17,   17, 0x28,
     598,  586,   17,   17, 0x28,
     636,   17,   17,   17, 0x28,
     667,   17,   17,   17, 0x08,
     695,   17,   17,   17, 0x08,
     725,   17,   17,   17, 0x08,
     758,  751,   17,   17, 0x08,
     792,   17,   17,   17, 0x08,
     816,   17,   17,   17, 0x08,
     839,   17,   17,   17, 0x08,
     870,   17,   17,   17, 0x08,
     897,   17,   17,   17, 0x08,
     916,   17,   17,   17, 0x08,
     946,   17,   17,   17, 0x08,
     979,   17,   17,   17, 0x08,
    1010,   17,   17,   17, 0x08,
    1097, 1043,   17,   17, 0x08,
    1171, 1137,   17,   17, 0x28,
    1222, 1206,   17,   17, 0x28,
    1252,   17,   17,   17, 0x28,
    1283, 1278,   17,   17, 0x08,
    1308,   17,   17,   17, 0x28,
    1322,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UISelectorWindow[] = {
    "UISelectorWindow\0\0strId\0"
    "sltStateChanged(QString)\0"
    "sltSnapshotChanged(QString)\0iWidgetIndex\0"
    "sltDetailsViewIndexChanged(int)\0"
    "sltHandleMediumEnumerationFinish()\0"
    "pos\0sltShowSelectorContextMenu(QPoint)\0"
    "sltShowMediumManager()\0strFileName\0"
    "sltShowImportApplianceWizard(QString)\0"
    "sltShowImportApplianceWizard()\0"
    "sltShowExportApplianceWizard()\0"
    "sltShowPreferencesDialog()\0sltPerformExit()\0"
    "sltShowAddMachineDialog(QString)\0"
    "sltShowAddMachineDialog()\0"
    "strCategory,strControl,strId\0"
    "sltShowMachineSettingsDialog(QString,QString,QString)\0"
    "strCategory,strControl\0"
    "sltShowMachineSettingsDialog(QString,QString)\0"
    "strCategory\0sltShowMachineSettingsDialog(QString)\0"
    "sltShowMachineSettingsDialog()\0"
    "sltShowCloneMachineWizard()\0"
    "sltPerformStartOrShowAction()\0"
    "sltPerformDiscardAction()\0fPause\0"
    "sltPerformPauseResumeAction(bool)\0"
    "sltPerformResetAction()\0sltPerformSaveAction()\0"
    "sltPerformACPIShutdownAction()\0"
    "sltPerformPowerOffAction()\0"
    "sltShowLogDialog()\0sltShowMachineInFileManager()\0"
    "sltPerformCreateShortcutAction()\0"
    "sltGroupCloseMenuAboutToShow()\0"
    "sltMachineCloseMenuAboutToShow()\0"
    "fRefreshDetails,fRefreshSnapshots,fRefreshDescription\0"
    "sltCurrentVMItemChanged(bool,bool,bool)\0"
    "fRefreshDetails,fRefreshSnapshots\0"
    "sltCurrentVMItemChanged(bool,bool)\0"
    "fRefreshDetails\0sltCurrentVMItemChanged(bool)\0"
    "sltCurrentVMItemChanged()\0list\0"
    "sltOpenUrls(QList<QUrl>)\0sltOpenUrls()\0"
    "sltGroupSavingUpdate()\0"
};

void UISelectorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISelectorWindow *_t = static_cast<UISelectorWindow *>(_o);
        switch (_id) {
        case 0: _t->sltStateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sltSnapshotChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sltDetailsViewIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sltHandleMediumEnumerationFinish(); break;
        case 4: _t->sltShowSelectorContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->sltShowMediumManager(); break;
        case 6: _t->sltShowImportApplianceWizard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->sltShowImportApplianceWizard(); break;
        case 8: _t->sltShowExportApplianceWizard(); break;
        case 9: _t->sltShowPreferencesDialog(); break;
        case 10: _t->sltPerformExit(); break;
        case 11: _t->sltShowAddMachineDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->sltShowAddMachineDialog(); break;
        case 13: _t->sltShowMachineSettingsDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->sltShowMachineSettingsDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->sltShowMachineSettingsDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->sltShowMachineSettingsDialog(); break;
        case 17: _t->sltShowCloneMachineWizard(); break;
        case 18: _t->sltPerformStartOrShowAction(); break;
        case 19: _t->sltPerformDiscardAction(); break;
        case 20: _t->sltPerformPauseResumeAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->sltPerformResetAction(); break;
        case 22: _t->sltPerformSaveAction(); break;
        case 23: _t->sltPerformACPIShutdownAction(); break;
        case 24: _t->sltPerformPowerOffAction(); break;
        case 25: _t->sltShowLogDialog(); break;
        case 26: _t->sltShowMachineInFileManager(); break;
        case 27: _t->sltPerformCreateShortcutAction(); break;
        case 28: _t->sltGroupCloseMenuAboutToShow(); break;
        case 29: _t->sltMachineCloseMenuAboutToShow(); break;
        case 30: _t->sltCurrentVMItemChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 31: _t->sltCurrentVMItemChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->sltCurrentVMItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->sltCurrentVMItemChanged(); break;
        case 34: _t->sltOpenUrls((*reinterpret_cast< QList<QUrl>(*)>(_a[1]))); break;
        case 35: _t->sltOpenUrls(); break;
        case 36: _t->sltGroupSavingUpdate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISelectorWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISelectorWindow::staticMetaObject = {
    { &QIWithRetranslateUI2<QMainWindow>::staticMetaObject, qt_meta_stringdata_UISelectorWindow,
      qt_meta_data_UISelectorWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISelectorWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISelectorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISelectorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISelectorWindow))
        return static_cast<void*>(const_cast< UISelectorWindow*>(this));
    return QIWithRetranslateUI2<QMainWindow>::qt_metacast(_clname);
}

int UISelectorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI2<QMainWindow>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
