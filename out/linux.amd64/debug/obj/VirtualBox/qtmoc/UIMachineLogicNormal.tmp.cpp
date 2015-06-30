/****************************************************************************
** Meta object code from reading C++ file 'UIMachineLogicNormal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/normal/UIMachineLogicNormal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineLogicNormal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineLogicNormal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      60,   21,   21,   21, 0x08,
      90,   21,   21,   21, 0x08,
     119,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineLogicNormal[] = {
    "UIMachineLogicNormal\0\0"
    "sltCheckForRequestedVisualStateType()\0"
    "sltPrepareSharedFoldersMenu()\0"
    "sltPrepareVideoCaptureMenu()\0"
    "sltPrepareMouseIntegrationMenu()\0"
};

void UIMachineLogicNormal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineLogicNormal *_t = static_cast<UIMachineLogicNormal *>(_o);
        switch (_id) {
        case 0: _t->sltCheckForRequestedVisualStateType(); break;
        case 1: _t->sltPrepareSharedFoldersMenu(); break;
        case 2: _t->sltPrepareVideoCaptureMenu(); break;
        case 3: _t->sltPrepareMouseIntegrationMenu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIMachineLogicNormal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineLogicNormal::staticMetaObject = {
    { &UIMachineLogic::staticMetaObject, qt_meta_stringdata_UIMachineLogicNormal,
      qt_meta_data_UIMachineLogicNormal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineLogicNormal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineLogicNormal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineLogicNormal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineLogicNormal))
        return static_cast<void*>(const_cast< UIMachineLogicNormal*>(this));
    return UIMachineLogic::qt_metacast(_clname);
}

int UIMachineLogicNormal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIMachineLogic::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
