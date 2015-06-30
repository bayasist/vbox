/****************************************************************************
** Meta object code from reading C++ file 'UIGlobalSettingsNetwork.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/global/UIGlobalSettingsNetwork.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGlobalSettingsNetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGlobalSettingsNetwork[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      44,   24,   24,   24, 0x08,
      63,   24,   24,   24, 0x08,
      96,   83,   24,   24, 0x08,
     144,   24,   24,   24, 0x08,
     187,  183,   24,   24, 0x08,
     224,   24,   24,   24, 0x08,
     244,   24,   24,   24, 0x08,
     264,   24,   24,   24, 0x08,
     285,   24,   24,   24, 0x08,
     325,  183,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGlobalSettingsNetwork[] = {
    "UIGlobalSettingsNetwork\0\0sltAddNetworkNAT()\0"
    "sltDelNetworkNAT()\0sltEditNetworkNAT()\0"
    "pChangedItem\0"
    "sltHandleItemChangeNetworkNAT(QTreeWidgetItem*)\0"
    "sltHandleCurrentItemChangeNetworkNAT()\0"
    "pos\0sltShowContextMenuNetworkNAT(QPoint)\0"
    "sltAddNetworkHost()\0sltDelNetworkHost()\0"
    "sltEditNetworkHost()\0"
    "sltHandleCurrentItemChangeNetworkHost()\0"
    "sltShowContextMenuNetworkHost(QPoint)\0"
};

void UIGlobalSettingsNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGlobalSettingsNetwork *_t = static_cast<UIGlobalSettingsNetwork *>(_o);
        switch (_id) {
        case 0: _t->sltAddNetworkNAT(); break;
        case 1: _t->sltDelNetworkNAT(); break;
        case 2: _t->sltEditNetworkNAT(); break;
        case 3: _t->sltHandleItemChangeNetworkNAT((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->sltHandleCurrentItemChangeNetworkNAT(); break;
        case 5: _t->sltShowContextMenuNetworkNAT((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->sltAddNetworkHost(); break;
        case 7: _t->sltDelNetworkHost(); break;
        case 8: _t->sltEditNetworkHost(); break;
        case 9: _t->sltHandleCurrentItemChangeNetworkHost(); break;
        case 10: _t->sltShowContextMenuNetworkHost((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGlobalSettingsNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGlobalSettingsNetwork::staticMetaObject = {
    { &UISettingsPageGlobal::staticMetaObject, qt_meta_stringdata_UIGlobalSettingsNetwork,
      qt_meta_data_UIGlobalSettingsNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGlobalSettingsNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGlobalSettingsNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGlobalSettingsNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGlobalSettingsNetwork))
        return static_cast<void*>(const_cast< UIGlobalSettingsNetwork*>(this));
    if (!strcmp(_clname, "Ui::UIGlobalSettingsNetwork"))
        return static_cast< Ui::UIGlobalSettingsNetwork*>(const_cast< UIGlobalSettingsNetwork*>(this));
    return UISettingsPageGlobal::qt_metacast(_clname);
}

int UIGlobalSettingsNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageGlobal::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
