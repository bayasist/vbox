/****************************************************************************
** Meta object code from reading C++ file 'UISettingsDialogSpecific.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/UISettingsDialogSpecific.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UISettingsDialogSpecific.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UISettingsDialogGlobal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_UISettingsDialogGlobal[] = {
    "UISettingsDialogGlobal\0"
};

void UISettingsDialogGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UISettingsDialogGlobal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISettingsDialogGlobal::staticMetaObject = {
    { &UISettingsDialog::staticMetaObject, qt_meta_stringdata_UISettingsDialogGlobal,
      qt_meta_data_UISettingsDialogGlobal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISettingsDialogGlobal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISettingsDialogGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISettingsDialogGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISettingsDialogGlobal))
        return static_cast<void*>(const_cast< UISettingsDialogGlobal*>(this));
    return UISettingsDialog::qt_metacast(_clname);
}

int UISettingsDialogGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UISettingsDialogMachine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      41,   24,   24,   24, 0x08,
      82,   56,   24,   24, 0x08,
     154,  128,   24,   24, 0x08,
     213,  200,   24,   24, 0x08,
     248,  244,   24,   24, 0x08,
     272,   24,   24,   24, 0x08,
     300,   24,   24,   24, 0x08,
     321,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UISettingsDialogMachine[] = {
    "UISettingsDialogMachine\0\0sltMarkLoaded()\0"
    "sltMarkSaved()\0strMachineId,sessionState\0"
    "sltSessionStateChanged(QString,KSessionState)\0"
    "strMachineId,machineState\0"
    "sltMachineStateChanged(QString,KMachineState)\0"
    "strMachineId\0sltMachineDataChanged(QString)\0"
    "cId\0sltCategoryChanged(int)\0"
    "sltAllowResetFirstRunFlag()\0"
    "sltSetFirstRunFlag()\0sltResetFirstRunFlag()\0"
};

void UISettingsDialogMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISettingsDialogMachine *_t = static_cast<UISettingsDialogMachine *>(_o);
        switch (_id) {
        case 0: _t->sltMarkLoaded(); break;
        case 1: _t->sltMarkSaved(); break;
        case 2: _t->sltSessionStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KSessionState(*)>(_a[2]))); break;
        case 3: _t->sltMachineStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KMachineState(*)>(_a[2]))); break;
        case 4: _t->sltMachineDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sltCategoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sltAllowResetFirstRunFlag(); break;
        case 7: _t->sltSetFirstRunFlag(); break;
        case 8: _t->sltResetFirstRunFlag(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISettingsDialogMachine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISettingsDialogMachine::staticMetaObject = {
    { &UISettingsDialog::staticMetaObject, qt_meta_stringdata_UISettingsDialogMachine,
      qt_meta_data_UISettingsDialogMachine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISettingsDialogMachine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISettingsDialogMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISettingsDialogMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISettingsDialogMachine))
        return static_cast<void*>(const_cast< UISettingsDialogMachine*>(this));
    return UISettingsDialog::qt_metacast(_clname);
}

int UISettingsDialogMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
