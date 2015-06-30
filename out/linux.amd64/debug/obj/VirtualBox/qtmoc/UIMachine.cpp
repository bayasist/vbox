/****************************************************************************
** Meta object code from reading C++ file 'UIMachine.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UIMachine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   11,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachine[] = {
    "UIMachine\0\0visualStateType\0"
    "sigRequestAsyncVisualStateChange(UIVisualStateType)\0"
    "sltChangeVisualState(UIVisualStateType)\0"
};

void UIMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachine *_t = static_cast<UIMachine *>(_o);
        switch (_id) {
        case 0: _t->sigRequestAsyncVisualStateChange((*reinterpret_cast< UIVisualStateType(*)>(_a[1]))); break;
        case 1: _t->sltChangeVisualState((*reinterpret_cast< UIVisualStateType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIMachine,
      qt_meta_data_UIMachine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachine))
        return static_cast<void*>(const_cast< UIMachine*>(this));
    return QObject::qt_metacast(_clname);
}

int UIMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UIMachine::sigRequestAsyncVisualStateChange(UIVisualStateType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
