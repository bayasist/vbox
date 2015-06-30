/****************************************************************************
** Meta object code from reading C++ file 'UIWizardCloneVDPageBasic1.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/clonevd/UIWizardCloneVDPageBasic1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardCloneVDPageBasic1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardCloneVDPageBasic1[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,

 // properties: name, type, flags
      66,   58, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardCloneVDPageBasic1[] = {
    "UIWizardCloneVDPageBasic1\0\0"
    "sltHandleOpenSourceDiskClick()\0CMedium\0"
    "sourceVirtualDisk\0"
};

void UIWizardCloneVDPageBasic1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardCloneVDPageBasic1 *_t = static_cast<UIWizardCloneVDPageBasic1 *>(_o);
        switch (_id) {
        case 0: _t->sltHandleOpenSourceDiskClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardCloneVDPageBasic1::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardCloneVDPageBasic1::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardCloneVDPageBasic1,
      qt_meta_data_UIWizardCloneVDPageBasic1, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardCloneVDPageBasic1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardCloneVDPageBasic1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardCloneVDPageBasic1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardCloneVDPageBasic1))
        return static_cast<void*>(const_cast< UIWizardCloneVDPageBasic1*>(this));
    if (!strcmp(_clname, "UIWizardCloneVDPage1"))
        return static_cast< UIWizardCloneVDPage1*>(const_cast< UIWizardCloneVDPageBasic1*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardCloneVDPageBasic1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< CMedium*>(_v) = sourceVirtualDisk(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSourceVirtualDisk(*reinterpret_cast< CMedium*>(_v)); break;
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
