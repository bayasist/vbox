/****************************************************************************
** Meta object code from reading C++ file 'UIWizardNewVDPageBasic3.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/newvd/UIWizardNewVDPageBasic3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardNewVDPageBasic3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardNewVDPageBasic3[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      65,   58,   24,   24, 0x08,
     105,   96,   24,   24, 0x08,

 // properties: name, type, flags
     147,  139, 0x0a095001,
     169,  158, 0x05095103,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardNewVDPageBasic3[] = {
    "UIWizardNewVDPageBasic3\0\0"
    "sltSelectLocationButtonClicked()\0"
    "iValue\0sltSizeSliderValueChanged(int)\0"
    "strValue\0sltSizeEditorTextChanged(QString)\0"
    "QString\0mediumPath\0qulonglong\0mediumSize\0"
};

void UIWizardNewVDPageBasic3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardNewVDPageBasic3 *_t = static_cast<UIWizardNewVDPageBasic3 *>(_o);
        switch (_id) {
        case 0: _t->sltSelectLocationButtonClicked(); break;
        case 1: _t->sltSizeSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sltSizeEditorTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIWizardNewVDPageBasic3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardNewVDPageBasic3::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardNewVDPageBasic3,
      qt_meta_data_UIWizardNewVDPageBasic3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardNewVDPageBasic3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardNewVDPageBasic3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardNewVDPageBasic3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardNewVDPageBasic3))
        return static_cast<void*>(const_cast< UIWizardNewVDPageBasic3*>(this));
    if (!strcmp(_clname, "UIWizardNewVDPage3"))
        return static_cast< UIWizardNewVDPage3*>(const_cast< UIWizardNewVDPageBasic3*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardNewVDPageBasic3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = mediumPath(); break;
        case 1: *reinterpret_cast< qulonglong*>(_v) = mediumSize(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setMediumSize(*reinterpret_cast< qulonglong*>(_v)); break;
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
