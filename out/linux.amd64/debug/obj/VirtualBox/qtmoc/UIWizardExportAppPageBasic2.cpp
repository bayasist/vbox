/****************************************************************************
** Meta object code from reading C++ file 'UIWizardExportAppPageBasic2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/exportappliance/UIWizardExportAppPageBasic2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardExportAppPageBasic2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardExportAppPageBasic2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      40,   28, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardExportAppPageBasic2[] = {
    "UIWizardExportAppPageBasic2\0StorageType\0"
    "storageType\0"
};

void UIWizardExportAppPageBasic2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardExportAppPageBasic2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardExportAppPageBasic2::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardExportAppPageBasic2,
      qt_meta_data_UIWizardExportAppPageBasic2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardExportAppPageBasic2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardExportAppPageBasic2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardExportAppPageBasic2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardExportAppPageBasic2))
        return static_cast<void*>(const_cast< UIWizardExportAppPageBasic2*>(this));
    if (!strcmp(_clname, "UIWizardExportAppPage2"))
        return static_cast< UIWizardExportAppPage2*>(const_cast< UIWizardExportAppPageBasic2*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardExportAppPageBasic2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< StorageType*>(_v) = storageType(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStorageType(*reinterpret_cast< StorageType*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
