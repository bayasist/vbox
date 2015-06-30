/****************************************************************************
** Meta object code from reading C++ file 'UIWizardCloneVDPageBasic4.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/clonevd/UIWizardCloneVDPageBasic4.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardCloneVDPageBasic4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardCloneVDPageBasic4[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,

 // properties: name, type, flags
      68,   60, 0x0a095001,
      90,   79, 0x05095001,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardCloneVDPageBasic4[] = {
    "UIWizardCloneVDPageBasic4\0\0"
    "sltSelectLocationButtonClicked()\0"
    "QString\0mediumPath\0qulonglong\0mediumSize\0"
};

void UIWizardCloneVDPageBasic4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardCloneVDPageBasic4 *_t = static_cast<UIWizardCloneVDPageBasic4 *>(_o);
        switch (_id) {
        case 0: _t->sltSelectLocationButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardCloneVDPageBasic4::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardCloneVDPageBasic4::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardCloneVDPageBasic4,
      qt_meta_data_UIWizardCloneVDPageBasic4, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardCloneVDPageBasic4::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardCloneVDPageBasic4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardCloneVDPageBasic4::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardCloneVDPageBasic4))
        return static_cast<void*>(const_cast< UIWizardCloneVDPageBasic4*>(this));
    if (!strcmp(_clname, "UIWizardCloneVDPage4"))
        return static_cast< UIWizardCloneVDPage4*>(const_cast< UIWizardCloneVDPageBasic4*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardCloneVDPageBasic4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = mediumPath(); break;
        case 1: *reinterpret_cast< qulonglong*>(_v) = mediumSize(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
