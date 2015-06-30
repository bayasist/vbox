/****************************************************************************
** Meta object code from reading C++ file 'UIMachineWindowSeamless.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/seamless/UIMachineWindowSeamless.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineWindowSeamless.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineWindowSeamless[] = {

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
      25,   24,   24,   24, 0x08,
      50,   24,   24,   24, 0x08,
      69,   24,   24,   24, 0x08,
      90,   86,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineWindowSeamless[] = {
    "UIMachineWindowSeamless\0\0"
    "sltMachineStateChanged()\0sltPopupMainMenu()\0"
    "sltRevokeFocus()\0geo\0"
    "sltUpdateMiniToolbarMask(QRect)\0"
};

void UIMachineWindowSeamless::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineWindowSeamless *_t = static_cast<UIMachineWindowSeamless *>(_o);
        switch (_id) {
        case 0: _t->sltMachineStateChanged(); break;
        case 1: _t->sltPopupMainMenu(); break;
        case 2: _t->sltRevokeFocus(); break;
        case 3: _t->sltUpdateMiniToolbarMask((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineWindowSeamless::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineWindowSeamless::staticMetaObject = {
    { &UIMachineWindow::staticMetaObject, qt_meta_stringdata_UIMachineWindowSeamless,
      qt_meta_data_UIMachineWindowSeamless, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineWindowSeamless::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineWindowSeamless::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineWindowSeamless::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineWindowSeamless))
        return static_cast<void*>(const_cast< UIMachineWindowSeamless*>(this));
    return UIMachineWindow::qt_metacast(_clname);
}

int UIMachineWindowSeamless::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIMachineWindow::qt_metacall(_c, _id, _a);
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
