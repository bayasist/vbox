/****************************************************************************
** Meta object code from reading C++ file 'UIWizardNewVMPageBasic1.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/newvm/UIWizardNewVMPageBasic1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardNewVMPageBasic1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardNewVMPageBasic1[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   25,   24,   24, 0x08,
      60,   24,   24,   24, 0x08,

 // properties: name, type, flags
      87,   79, 0x0a095103,
     101,   79, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardNewVMPageBasic1[] = {
    "UIWizardNewVMPageBasic1\0\0strNewText\0"
    "sltNameChanged(QString)\0sltOsTypeChanged()\0"
    "QString\0machineFolder\0machineBaseName\0"
};

void UIWizardNewVMPageBasic1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardNewVMPageBasic1 *_t = static_cast<UIWizardNewVMPageBasic1 *>(_o);
        switch (_id) {
        case 0: _t->sltNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sltOsTypeChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIWizardNewVMPageBasic1::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardNewVMPageBasic1::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardNewVMPageBasic1,
      qt_meta_data_UIWizardNewVMPageBasic1, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardNewVMPageBasic1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardNewVMPageBasic1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardNewVMPageBasic1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardNewVMPageBasic1))
        return static_cast<void*>(const_cast< UIWizardNewVMPageBasic1*>(this));
    if (!strcmp(_clname, "UIWizardNewVMPage1"))
        return static_cast< UIWizardNewVMPage1*>(const_cast< UIWizardNewVMPageBasic1*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardNewVMPageBasic1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = machineFolder(); break;
        case 1: *reinterpret_cast< QString*>(_v) = machineBaseName(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMachineFolder(*reinterpret_cast< QString*>(_v)); break;
        case 1: setMachineBaseName(*reinterpret_cast< QString*>(_v)); break;
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
