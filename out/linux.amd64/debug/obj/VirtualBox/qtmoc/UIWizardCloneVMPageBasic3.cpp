/****************************************************************************
** Meta object code from reading C++ file 'UIWizardCloneVMPageBasic3.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/clonevm/UIWizardCloneVMPageBasic3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardCloneVMPageBasic3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardCloneVMPageBasic3[] = {

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
      37,   26, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardCloneVMPageBasic3[] = {
    "UIWizardCloneVMPageBasic3\0KCloneMode\0"
    "cloneMode\0"
};

void UIWizardCloneVMPageBasic3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardCloneVMPageBasic3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardCloneVMPageBasic3::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardCloneVMPageBasic3,
      qt_meta_data_UIWizardCloneVMPageBasic3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardCloneVMPageBasic3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardCloneVMPageBasic3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardCloneVMPageBasic3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardCloneVMPageBasic3))
        return static_cast<void*>(const_cast< UIWizardCloneVMPageBasic3*>(this));
    if (!strcmp(_clname, "UIWizardCloneVMPage3"))
        return static_cast< UIWizardCloneVMPage3*>(const_cast< UIWizardCloneVMPageBasic3*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardCloneVMPageBasic3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KCloneMode*>(_v) = cloneMode(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCloneMode(*reinterpret_cast< KCloneMode*>(_v)); break;
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
