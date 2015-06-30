/****************************************************************************
** Meta object code from reading C++ file 'VBoxSettingsSelector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/VBoxSettingsSelector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxSettingsSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxSettingsSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_VBoxSettingsSelector[] = {
    "VBoxSettingsSelector\0\0categoryChanged(int)\0"
};

void VBoxSettingsSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxSettingsSelector *_t = static_cast<VBoxSettingsSelector *>(_o);
        switch (_id) {
        case 0: _t->categoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxSettingsSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxSettingsSelector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VBoxSettingsSelector,
      qt_meta_data_VBoxSettingsSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxSettingsSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxSettingsSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxSettingsSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxSettingsSelector))
        return static_cast<void*>(const_cast< VBoxSettingsSelector*>(this));
    return QObject::qt_metacast(_clname);
}

int VBoxSettingsSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void VBoxSettingsSelector::categoryChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_VBoxSettingsTreeViewSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxSettingsTreeViewSelector[] = {
    "VBoxSettingsTreeViewSelector\0\0"
    "aItem,aPrevItem\0"
    "settingsGroupChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
};

void VBoxSettingsTreeViewSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxSettingsTreeViewSelector *_t = static_cast<VBoxSettingsTreeViewSelector *>(_o);
        switch (_id) {
        case 0: _t->settingsGroupChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxSettingsTreeViewSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxSettingsTreeViewSelector::staticMetaObject = {
    { &VBoxSettingsSelector::staticMetaObject, qt_meta_stringdata_VBoxSettingsTreeViewSelector,
      qt_meta_data_VBoxSettingsTreeViewSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxSettingsTreeViewSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxSettingsTreeViewSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxSettingsTreeViewSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxSettingsTreeViewSelector))
        return static_cast<void*>(const_cast< VBoxSettingsTreeViewSelector*>(this));
    return VBoxSettingsSelector::qt_metacast(_clname);
}

int VBoxSettingsTreeViewSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VBoxSettingsSelector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_VBoxSettingsToolBarSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   29,   28,   28, 0x08,
      75,   68,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxSettingsToolBarSelector[] = {
    "VBoxSettingsToolBarSelector\0\0aAction\0"
    "settingsGroupChanged(QAction*)\0aIndex\0"
    "settingsGroupChanged(int)\0"
};

void VBoxSettingsToolBarSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxSettingsToolBarSelector *_t = static_cast<VBoxSettingsToolBarSelector *>(_o);
        switch (_id) {
        case 0: _t->settingsGroupChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->settingsGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxSettingsToolBarSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxSettingsToolBarSelector::staticMetaObject = {
    { &VBoxSettingsSelector::staticMetaObject, qt_meta_stringdata_VBoxSettingsToolBarSelector,
      qt_meta_data_VBoxSettingsToolBarSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxSettingsToolBarSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxSettingsToolBarSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxSettingsToolBarSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxSettingsToolBarSelector))
        return static_cast<void*>(const_cast< VBoxSettingsToolBarSelector*>(this));
    return VBoxSettingsSelector::qt_metacast(_clname);
}

int VBoxSettingsToolBarSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VBoxSettingsSelector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
