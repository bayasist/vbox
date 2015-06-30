/****************************************************************************
** Meta object code from reading C++ file 'UIWizardImportAppPageBasic2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/importappliance/UIWizardImportAppPageBasic2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardImportAppPageBasic2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardImportAppPageBasic2[] = {

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
      51,   28, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardImportAppPageBasic2[] = {
    "UIWizardImportAppPageBasic2\0"
    "ImportAppliancePointer\0applianceWidget\0"
};

void UIWizardImportAppPageBasic2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardImportAppPageBasic2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardImportAppPageBasic2::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardImportAppPageBasic2,
      qt_meta_data_UIWizardImportAppPageBasic2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardImportAppPageBasic2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardImportAppPageBasic2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardImportAppPageBasic2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardImportAppPageBasic2))
        return static_cast<void*>(const_cast< UIWizardImportAppPageBasic2*>(this));
    if (!strcmp(_clname, "UIWizardImportAppPage2"))
        return static_cast< UIWizardImportAppPage2*>(const_cast< UIWizardImportAppPageBasic2*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardImportAppPageBasic2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ImportAppliancePointer*>(_v) = applianceWidget(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
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
