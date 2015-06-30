/****************************************************************************
** Meta object code from reading C++ file 'UIUpdateManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UIUpdateManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIUpdateManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIUpdateManager[] = {

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
      17,   16,   16,   16, 0x0a,
      44,   33,   16,   16, 0x08,
      78,   16,   16,   16, 0x28,
     108,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIUpdateManager[] = {
    "UIUpdateManager\0\0sltForceCheck()\0"
    "fForceCall\0sltCheckIfUpdateIsNecessary(bool)\0"
    "sltCheckIfUpdateIsNecessary()\0"
    "sltHandleUpdateFinishing()\0"
};

void UIUpdateManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIUpdateManager *_t = static_cast<UIUpdateManager *>(_o);
        switch (_id) {
        case 0: _t->sltForceCheck(); break;
        case 1: _t->sltCheckIfUpdateIsNecessary((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sltCheckIfUpdateIsNecessary(); break;
        case 3: _t->sltHandleUpdateFinishing(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIUpdateManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIUpdateManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIUpdateManager,
      qt_meta_data_UIUpdateManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIUpdateManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIUpdateManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIUpdateManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIUpdateManager))
        return static_cast<void*>(const_cast< UIUpdateManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UIUpdateManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
