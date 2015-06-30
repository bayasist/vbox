/****************************************************************************
** Meta object code from reading C++ file 'UIWizardNewVDPageBasic1.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/newvd/UIWizardNewVDPageBasic1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardNewVDPageBasic1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardNewVDPageBasic1[] = {

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
      38,   24, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardNewVDPageBasic1[] = {
    "UIWizardNewVDPageBasic1\0CMediumFormat\0"
    "mediumFormat\0"
};

void UIWizardNewVDPageBasic1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardNewVDPageBasic1::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardNewVDPageBasic1::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardNewVDPageBasic1,
      qt_meta_data_UIWizardNewVDPageBasic1, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardNewVDPageBasic1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardNewVDPageBasic1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardNewVDPageBasic1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardNewVDPageBasic1))
        return static_cast<void*>(const_cast< UIWizardNewVDPageBasic1*>(this));
    if (!strcmp(_clname, "UIWizardNewVDPage1"))
        return static_cast< UIWizardNewVDPage1*>(const_cast< UIWizardNewVDPageBasic1*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardNewVDPageBasic1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CMediumFormat*>(_v) = mediumFormat(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMediumFormat(*reinterpret_cast< CMediumFormat*>(_v)); break;
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
