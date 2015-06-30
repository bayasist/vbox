/****************************************************************************
** Meta object code from reading C++ file 'UIMultiScreenLayout.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UIMultiScreenLayout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMultiScreenLayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMultiScreenLayout[] = {

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
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   46,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMultiScreenLayout[] = {
    "UIMultiScreenLayout\0\0sigScreenLayoutChanged()\0"
    "pAction\0sltScreenLayoutChanged(QAction*)\0"
};

void UIMultiScreenLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMultiScreenLayout *_t = static_cast<UIMultiScreenLayout *>(_o);
        switch (_id) {
        case 0: _t->sigScreenLayoutChanged(); break;
        case 1: _t->sltScreenLayoutChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMultiScreenLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMultiScreenLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIMultiScreenLayout,
      qt_meta_data_UIMultiScreenLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMultiScreenLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMultiScreenLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMultiScreenLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMultiScreenLayout))
        return static_cast<void*>(const_cast< UIMultiScreenLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int UIMultiScreenLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UIMultiScreenLayout::sigScreenLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
