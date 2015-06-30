/****************************************************************************
** Meta object code from reading C++ file 'UIWizardExportAppPageExpert.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/exportappliance/UIWizardExportAppPageExpert.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardExportAppPageExpert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardExportAppPageExpert[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      11,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      59,   28,   28,   28, 0x08,
      89,   28,   28,   28, 0x08,

 // properties: name, type, flags
     131,  119, 0x0b095001,
     144,  119, 0x0b095001,
     167,  155, 0x0009510b,
     187,  179, 0x0a095103,
     199,  194, 0x01095103,
     216,  179, 0x0a095003,
     225,  179, 0x0a095103,
     234,  179, 0x0a095103,
     243,  179, 0x0a095103,
     250,  179, 0x0a095103,
     278,  255, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardExportAppPageExpert[] = {
    "UIWizardExportAppPageExpert\0\0"
    "sltVMSelectionChangeHandler()\0"
    "sltStorageTypeChangeHandler()\0"
    "sltUpdateFormatComboToolTip()\0QStringList\0"
    "machineNames\0machineIDs\0StorageType\0"
    "storageType\0QString\0format\0bool\0"
    "manifestSelected\0username\0password\0"
    "hostname\0bucket\0path\0ExportAppliancePointer\0"
    "applianceWidget\0"
};

void UIWizardExportAppPageExpert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardExportAppPageExpert *_t = static_cast<UIWizardExportAppPageExpert *>(_o);
        switch (_id) {
        case 0: _t->sltVMSelectionChangeHandler(); break;
        case 1: _t->sltStorageTypeChangeHandler(); break;
        case 2: _t->sltUpdateFormatComboToolTip(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardExportAppPageExpert::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardExportAppPageExpert::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardExportAppPageExpert,
      qt_meta_data_UIWizardExportAppPageExpert, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardExportAppPageExpert::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardExportAppPageExpert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardExportAppPageExpert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardExportAppPageExpert))
        return static_cast<void*>(const_cast< UIWizardExportAppPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardExportAppPage1"))
        return static_cast< UIWizardExportAppPage1*>(const_cast< UIWizardExportAppPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardExportAppPage2"))
        return static_cast< UIWizardExportAppPage2*>(const_cast< UIWizardExportAppPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardExportAppPage3"))
        return static_cast< UIWizardExportAppPage3*>(const_cast< UIWizardExportAppPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardExportAppPage4"))
        return static_cast< UIWizardExportAppPage4*>(const_cast< UIWizardExportAppPageExpert*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardExportAppPageExpert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = machineNames(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = machineIDs(); break;
        case 2: *reinterpret_cast< StorageType*>(_v) = storageType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = format(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isManifestSelected(); break;
        case 5: *reinterpret_cast< QString*>(_v) = username(); break;
        case 6: *reinterpret_cast< QString*>(_v) = password(); break;
        case 7: *reinterpret_cast< QString*>(_v) = hostname(); break;
        case 8: *reinterpret_cast< QString*>(_v) = bucket(); break;
        case 9: *reinterpret_cast< QString*>(_v) = path(); break;
        case 10: *reinterpret_cast< ExportAppliancePointer*>(_v) = applianceWidget(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setStorageType(*reinterpret_cast< StorageType*>(_v)); break;
        case 3: setFormat(*reinterpret_cast< QString*>(_v)); break;
        case 4: setManifestSelected(*reinterpret_cast< bool*>(_v)); break;
        case 5: setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 6: setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 7: setHostname(*reinterpret_cast< QString*>(_v)); break;
        case 8: setBucket(*reinterpret_cast< QString*>(_v)); break;
        case 9: setPath(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
