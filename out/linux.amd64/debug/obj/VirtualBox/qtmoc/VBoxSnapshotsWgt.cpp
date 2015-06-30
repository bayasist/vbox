/****************************************************************************
** Meta object code from reading C++ file 'VBoxSnapshotsWgt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/VBoxSnapshotsWgt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxSnapshotsWgt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxSnapshotsWgt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x08,
      59,   17,   17,   17, 0x28,
      85,   78,   17,   17, 0x08,
     116,   18,   17,   17, 0x08,
     154,  148,   17,   17, 0x08,
     193,   17,   17,   17, 0x08,
     240,  211,   17,   17, 0x08,
     265,   17,   17,   17, 0x28,
     286,   17,   17,   17, 0x08,
     306,   17,   17,   17, 0x08,
     331,   17,   17,   17, 0x08,
     356,  350,   17,   17, 0x08,
     396,  384,   17,   17, 0x08,
     439,  384,   17,   17, 0x08,
     482,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxSnapshotsWgt[] = {
    "VBoxSnapshotsWgt\0\0aItem\0"
    "onCurrentChanged(QTreeWidgetItem*)\0"
    "onCurrentChanged()\0aPoint\0"
    "onContextMenuRequested(QPoint)\0"
    "onItemChanged(QTreeWidgetItem*)\0pItem\0"
    "sltItemDoubleClicked(QTreeWidgetItem*)\0"
    "sltTakeSnapshot()\0fSuppressNonCriticalWarnings\0"
    "sltRestoreSnapshot(bool)\0sltRestoreSnapshot()\0"
    "sltDeleteSnapshot()\0sltShowSnapshotDetails()\0"
    "sltCloneSnapshot()\0strId\0"
    "machineDataChanged(QString)\0strId,state\0"
    "machineStateChanged(QString,KMachineState)\0"
    "sessionStateChanged(QString,KSessionState)\0"
    "updateSnapshotsAge()\0"
};

void VBoxSnapshotsWgt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxSnapshotsWgt *_t = static_cast<VBoxSnapshotsWgt *>(_o);
        switch (_id) {
        case 0: _t->onCurrentChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->onCurrentChanged(); break;
        case 2: _t->onContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->onItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->sltItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->sltTakeSnapshot(); break;
        case 6: _t->sltRestoreSnapshot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sltRestoreSnapshot(); break;
        case 8: _t->sltDeleteSnapshot(); break;
        case 9: _t->sltShowSnapshotDetails(); break;
        case 10: _t->sltCloneSnapshot(); break;
        case 11: _t->machineDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->machineStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KMachineState(*)>(_a[2]))); break;
        case 13: _t->sessionStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KSessionState(*)>(_a[2]))); break;
        case 14: _t->updateSnapshotsAge(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxSnapshotsWgt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxSnapshotsWgt::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_VBoxSnapshotsWgt,
      qt_meta_data_VBoxSnapshotsWgt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxSnapshotsWgt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxSnapshotsWgt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxSnapshotsWgt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxSnapshotsWgt))
        return static_cast<void*>(const_cast< VBoxSnapshotsWgt*>(this));
    if (!strcmp(_clname, "Ui::VBoxSnapshotsWgt"))
        return static_cast< Ui::VBoxSnapshotsWgt*>(const_cast< VBoxSnapshotsWgt*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int VBoxSnapshotsWgt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
