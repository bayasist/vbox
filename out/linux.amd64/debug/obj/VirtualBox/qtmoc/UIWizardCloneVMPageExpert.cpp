/****************************************************************************
** Meta object code from reading C++ file 'UIWizardCloneVMPageExpert.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/clonevm/UIWizardCloneVMPageExpert.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardCloneVMPageExpert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardCloneVMPageExpert[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   27,   26,   26, 0x08,

 // properties: name, type, flags
      78,   70, 0x0a095103,
      93,   88, 0x01095001,
     104,   88, 0x01095001,
     127,  116, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardCloneVMPageExpert[] = {
    "UIWizardCloneVMPageExpert\0\0pButton\0"
    "sltButtonClicked(QAbstractButton*)\0"
    "QString\0cloneName\0bool\0reinitMACs\0"
    "linkedClone\0KCloneMode\0cloneMode\0"
};

void UIWizardCloneVMPageExpert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardCloneVMPageExpert *_t = static_cast<UIWizardCloneVMPageExpert *>(_o);
        switch (_id) {
        case 0: _t->sltButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIWizardCloneVMPageExpert::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardCloneVMPageExpert::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardCloneVMPageExpert,
      qt_meta_data_UIWizardCloneVMPageExpert, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardCloneVMPageExpert::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardCloneVMPageExpert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardCloneVMPageExpert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardCloneVMPageExpert))
        return static_cast<void*>(const_cast< UIWizardCloneVMPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardCloneVMPage1"))
        return static_cast< UIWizardCloneVMPage1*>(const_cast< UIWizardCloneVMPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardCloneVMPage2"))
        return static_cast< UIWizardCloneVMPage2*>(const_cast< UIWizardCloneVMPageExpert*>(this));
    if (!strcmp(_clname, "UIWizardCloneVMPage3"))
        return static_cast< UIWizardCloneVMPage3*>(const_cast< UIWizardCloneVMPageExpert*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardCloneVMPageExpert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = cloneName(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isReinitMACsChecked(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isLinkedClone(); break;
        case 3: *reinterpret_cast< KCloneMode*>(_v) = cloneMode(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCloneName(*reinterpret_cast< QString*>(_v)); break;
        case 3: setCloneMode(*reinterpret_cast< KCloneMode*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
