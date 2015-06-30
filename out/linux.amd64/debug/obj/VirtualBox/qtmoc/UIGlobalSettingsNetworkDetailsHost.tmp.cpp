/****************************************************************************
** Meta object code from reading C++ file 'UIGlobalSettingsNetworkDetailsHost.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/global/UIGlobalSettingsNetworkDetailsHost.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGlobalSettingsNetworkDetailsHost.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGlobalSettingsNetworkDetailsHost[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x08,
      65,   35,   35,   35, 0x08,
      94,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGlobalSettingsNetworkDetailsHost[] = {
    "UIGlobalSettingsNetworkDetailsHost\0\0"
    "sltDhcpClientStatusChanged()\0"
    "sltDhcpServerStatusChanged()\0accept()\0"
};

void UIGlobalSettingsNetworkDetailsHost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGlobalSettingsNetworkDetailsHost *_t = static_cast<UIGlobalSettingsNetworkDetailsHost *>(_o);
        switch (_id) {
        case 0: _t->sltDhcpClientStatusChanged(); break;
        case 1: _t->sltDhcpServerStatusChanged(); break;
        case 2: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGlobalSettingsNetworkDetailsHost::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGlobalSettingsNetworkDetailsHost::staticMetaObject = {
    { &QIWithRetranslateUI2<QIDialog>::staticMetaObject, qt_meta_stringdata_UIGlobalSettingsNetworkDetailsHost,
      qt_meta_data_UIGlobalSettingsNetworkDetailsHost, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGlobalSettingsNetworkDetailsHost::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGlobalSettingsNetworkDetailsHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGlobalSettingsNetworkDetailsHost::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGlobalSettingsNetworkDetailsHost))
        return static_cast<void*>(const_cast< UIGlobalSettingsNetworkDetailsHost*>(this));
    if (!strcmp(_clname, "Ui::UIGlobalSettingsNetworkDetailsHost"))
        return static_cast< Ui::UIGlobalSettingsNetworkDetailsHost*>(const_cast< UIGlobalSettingsNetworkDetailsHost*>(this));
    return QIWithRetranslateUI2<QIDialog>::qt_metacast(_clname);
}

int UIGlobalSettingsNetworkDetailsHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI2<QIDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
