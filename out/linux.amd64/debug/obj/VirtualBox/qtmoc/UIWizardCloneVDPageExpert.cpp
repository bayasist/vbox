/****************************************************************************
** Meta object code from reading C++ file 'UIWizardCloneVDPageExpert.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/clonevd/UIWizardCloneVDPageExpert.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardCloneVDPageExpert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardCloneVDPageExpert[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      55,   26,   26,   26, 0x08,
      86,   26,   26,   26, 0x08,
     111,   26,   26,   26, 0x08,

 // properties: name, type, flags
     152,  144, 0x0009510b,
     184,  170, 0x0009510b,
     208,  197, 0x05095103,
     230,  222, 0x0a095001,
     241,  197, 0x05095001,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardCloneVDPageExpert[] = {
    "UIWizardCloneVDPageExpert\0\0"
    "sltHandleSourceDiskChange()\0"
    "sltHandleOpenSourceDiskClick()\0"
    "sltMediumFormatChanged()\0"
    "sltSelectLocationButtonClicked()\0"
    "CMedium\0sourceVirtualDisk\0CMediumFormat\0"
    "mediumFormat\0qulonglong\0mediumVariant\0"
    "QString\0mediumPath\0mediumSize\0"
};

void UIWizardCloneVDPageExpert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardCloneVDPageExpert *_t = static_cast<UIWizardCloneVDPageExpert *>(_o);
        switch (_id) {
        case 0: _t->sltHandleSourceDiskChange(); break;
        case 1: _t->sltHandleOpenSourceDiskClick(); break;
        case 2: _t->sltMediumFormatChanged(); break;
        case 3: _t->sltSelectLocationButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardCloneVDPageExpert::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardCloneVDPageExpert::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardCloneVDPageExpert,
      qt_meta_data_UIWizardCloneVDPageExpert, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardCloneVDPageExpert::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardCloneVDPageExpert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardCloneVDPageExpert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardCloneVDPageExpert))
        return static_cast<void*>(const_cast< UIWizardCloneVDPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardCloneVDPage1"))
        return static_cast< UIWizardCloneVDPage1*>(const_cast< UIWizardCloneVDPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardCloneVDPage2"))
        return static_cast< UIWizardCloneVDPage2*>(const_cast< UIWizardCloneVDPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardCloneVDPage3"))
        return static_cast< UIWizardCloneVDPage3*>(const_cast< UIWizardCloneVDPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardCloneVDPage4"))
        return static_cast< UIWizardCloneVDPage4*>(const_cast< UIWizardCloneVDPageExpert*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardCloneVDPageExpert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CMedium*>(_v) = sourceVirtualDisk(); break;
        case 1: *reinterpret_cast< CMediumFormat*>(_v) = mediumFormat(); break;
        case 2: *reinterpret_cast< qulonglong*>(_v) = mediumVariant(); break;
        case 3: *reinterpret_cast< QString*>(_v) = mediumPath(); break;
        case 4: *reinterpret_cast< qulonglong*>(_v) = mediumSize(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSourceVirtualDisk(*reinterpret_cast< CMedium*>(_v)); break;
        case 1: setMediumFormat(*reinterpret_cast< CMediumFormat*>(_v)); break;
        case 2: setMediumVariant(*reinterpret_cast< qulonglong*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
