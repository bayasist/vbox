/****************************************************************************
** Meta object code from reading C++ file 'UIWizardFirstRunPageBasic.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/firstrun/UIWizardFirstRunPageBasic.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardFirstRunPageBasic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardFirstRunPageBasic[] = {

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
      69,   61, 0x0a095001,
      76,   61, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardFirstRunPageBasic[] = {
    "UIWizardFirstRunPageBasic\0\0"
    "sltOpenMediumWithFileOpenDialog()\0"
    "QString\0source\0id\0"
};

void UIWizardFirstRunPageBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardFirstRunPageBasic *_t = static_cast<UIWizardFirstRunPageBasic *>(_o);
        switch (_id) {
        case 0: _t->sltOpenMediumWithFileOpenDialog(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardFirstRunPageBasic::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardFirstRunPageBasic::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardFirstRunPageBasic,
      qt_meta_data_UIWizardFirstRunPageBasic, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardFirstRunPageBasic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardFirstRunPageBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardFirstRunPageBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardFirstRunPageBasic))
        return static_cast<void*>(const_cast< UIWizardFirstRunPageBasic*>(this));
    if (!strcmp(_clname, "UIWizardFirstRunPage"))
        return static_cast< UIWizardFirstRunPage*>(const_cast< UIWizardFirstRunPageBasic*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardFirstRunPageBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = source(); break;
        case 1: *reinterpret_cast< QString*>(_v) = id(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setId(*reinterpret_cast< QString*>(_v)); break;
        }
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
