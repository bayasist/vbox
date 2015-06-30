/****************************************************************************
** Meta object code from reading C++ file 'UIShortcutPool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/globals/UIShortcutPool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIShortcutPool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIShortcutPool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      47,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   15,   15,   15, 0x08,
     106,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIShortcutPool[] = {
    "UIShortcutPool\0\0sigSelectorShortcutsReloaded()\0"
    "sigMachineShortcutsReloaded()\0"
    "sltReloadSelectorShortcuts()\0"
    "sltReloadMachineShortcuts()\0"
};

void UIShortcutPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIShortcutPool *_t = static_cast<UIShortcutPool *>(_o);
        switch (_id) {
        case 0: _t->sigSelectorShortcutsReloaded(); break;
        case 1: _t->sigMachineShortcutsReloaded(); break;
        case 2: _t->sltReloadSelectorShortcuts(); break;
        case 3: _t->sltReloadMachineShortcuts(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIShortcutPool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIShortcutPool::staticMetaObject = {
    { &QIWithRetranslateUI3<QObject>::staticMetaObject, qt_meta_stringdata_UIShortcutPool,
      qt_meta_data_UIShortcutPool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIShortcutPool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIShortcutPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIShortcutPool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIShortcutPool))
        return static_cast<void*>(const_cast< UIShortcutPool*>(this));
    return QIWithRetranslateUI3<QObject>::qt_metacast(_clname);
}

int UIShortcutPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI3<QObject>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UIShortcutPool::sigSelectorShortcutsReloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIShortcutPool::sigMachineShortcutsReloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
