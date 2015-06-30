/****************************************************************************
** Meta object code from reading C++ file 'VBoxGlobalSettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/VBoxGlobalSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxGlobalSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxGlobalSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       9,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   20,   19,   19, 0x05,

 // properties: name, type, flags
      85,   77, 0x0a095103,
     100,   95, 0x01095103,
     112,   77, 0x0a095103,
     124,   77, 0x0a095103,
     135,   77, 0x0a095103,
     147,   77, 0x0a095103,
     162,   77, 0x0a095103,
     176,   95, 0x01095103,
     200,   95, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_VBoxGlobalSettings[] = {
    "VBoxGlobalSettings\0\0publicName,name\0"
    "propertyChanged(const char*,const char*)\0"
    "QString\0hostCombo\0bool\0autoCapture\0"
    "guiFeatures\0languageId\0maxGuestRes\0"
    "remapScancodes\0proxySettings\0"
    "presentationModeEnabled\0hostScreenSaverDisabled\0"
};

void VBoxGlobalSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxGlobalSettings *_t = static_cast<VBoxGlobalSettings *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxGlobalSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxGlobalSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VBoxGlobalSettings,
      qt_meta_data_VBoxGlobalSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxGlobalSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxGlobalSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxGlobalSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxGlobalSettings))
        return static_cast<void*>(const_cast< VBoxGlobalSettings*>(this));
    if (!strcmp(_clname, "CIShared<VBoxGlobalSettingsData>"))
        return static_cast< CIShared<VBoxGlobalSettingsData>*>(const_cast< VBoxGlobalSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int VBoxGlobalSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = hostCombo(); break;
        case 1: *reinterpret_cast< bool*>(_v) = autoCapture(); break;
        case 2: *reinterpret_cast< QString*>(_v) = guiFeatures(); break;
        case 3: *reinterpret_cast< QString*>(_v) = languageId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = maxGuestRes(); break;
        case 5: *reinterpret_cast< QString*>(_v) = remapScancodes(); break;
        case 6: *reinterpret_cast< QString*>(_v) = proxySettings(); break;
        case 7: *reinterpret_cast< bool*>(_v) = presentationModeEnabled(); break;
        case 8: *reinterpret_cast< bool*>(_v) = hostScreenSaverDisabled(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHostCombo(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAutoCapture(*reinterpret_cast< bool*>(_v)); break;
        case 2: setGuiFeatures(*reinterpret_cast< QString*>(_v)); break;
        case 3: setLanguageId(*reinterpret_cast< QString*>(_v)); break;
        case 4: setMaxGuestRes(*reinterpret_cast< QString*>(_v)); break;
        case 5: setRemapScancodes(*reinterpret_cast< QString*>(_v)); break;
        case 6: setProxySettings(*reinterpret_cast< QString*>(_v)); break;
        case 7: setPresentationModeEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 8: setHostScreenSaverDisabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VBoxGlobalSettings::propertyChanged(const char * _t1, const char * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
