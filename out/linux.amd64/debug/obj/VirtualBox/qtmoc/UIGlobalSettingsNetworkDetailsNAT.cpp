/****************************************************************************
** Meta object code from reading C++ file 'UIGlobalSettingsNetworkDetailsNAT.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/global/UIGlobalSettingsNetworkDetailsNAT.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGlobalSettingsNetworkDetailsNAT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGlobalSettingsNetworkDetailsNAT[] = {

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
      35,   34,   34,   34, 0x08,
      59,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGlobalSettingsNetworkDetailsNAT[] = {
    "UIGlobalSettingsNetworkDetailsNAT\0\0"
    "sltEditPortForwarding()\0accept()\0"
};

void UIGlobalSettingsNetworkDetailsNAT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGlobalSettingsNetworkDetailsNAT *_t = static_cast<UIGlobalSettingsNetworkDetailsNAT *>(_o);
        switch (_id) {
        case 0: _t->sltEditPortForwarding(); break;
        case 1: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGlobalSettingsNetworkDetailsNAT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGlobalSettingsNetworkDetailsNAT::staticMetaObject = {
    { &QIWithRetranslateUI2<QIDialog>::staticMetaObject, qt_meta_stringdata_UIGlobalSettingsNetworkDetailsNAT,
      qt_meta_data_UIGlobalSettingsNetworkDetailsNAT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGlobalSettingsNetworkDetailsNAT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGlobalSettingsNetworkDetailsNAT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGlobalSettingsNetworkDetailsNAT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGlobalSettingsNetworkDetailsNAT))
        return static_cast<void*>(const_cast< UIGlobalSettingsNetworkDetailsNAT*>(this));
    if (!strcmp(_clname, "Ui::UIGlobalSettingsNetworkDetailsNAT"))
        return static_cast< Ui::UIGlobalSettingsNetworkDetailsNAT*>(const_cast< UIGlobalSettingsNetworkDetailsNAT*>(this));
    return QIWithRetranslateUI2<QIDialog>::qt_metacast(_clname);
}

int UIGlobalSettingsNetworkDetailsNAT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI2<QIDialog>::qt_metacall(_c, _id, _a);
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
