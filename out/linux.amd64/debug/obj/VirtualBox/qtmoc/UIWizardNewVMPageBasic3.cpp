/****************************************************************************
** Meta object code from reading C++ file 'UIWizardNewVMPageBasic3.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/newvm/UIWizardNewVMPageBasic3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardNewVMPageBasic3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardNewVMPageBasic3[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      55,   24,   24,   24, 0x08,

 // properties: name, type, flags
      90,   82, 0x0009510b,
     110,  102, 0x0a095103,
     124,  102, 0x0a095103,
     140,  102, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardNewVMPageBasic3[] = {
    "UIWizardNewVMPageBasic3\0\0"
    "sltVirtualDiskSourceChanged()\0"
    "sltGetWithFileOpenDialog()\0CMedium\0"
    "virtualDisk\0QString\0virtualDiskId\0"
    "virtualDiskName\0virtualDiskLocation\0"
};

void UIWizardNewVMPageBasic3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardNewVMPageBasic3 *_t = static_cast<UIWizardNewVMPageBasic3 *>(_o);
        switch (_id) {
        case 0: _t->sltVirtualDiskSourceChanged(); break;
        case 1: _t->sltGetWithFileOpenDialog(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardNewVMPageBasic3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardNewVMPageBasic3::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardNewVMPageBasic3,
      qt_meta_data_UIWizardNewVMPageBasic3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardNewVMPageBasic3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardNewVMPageBasic3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardNewVMPageBasic3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardNewVMPageBasic3))
        return static_cast<void*>(const_cast< UIWizardNewVMPageBasic3*>(this));
    if (!strcmp(_clname, "UIWizardNewVMPage3"))
        return static_cast< UIWizardNewVMPage3*>(const_cast< UIWizardNewVMPageBasic3*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardNewVMPageBasic3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< CMedium*>(_v) = virtualDisk(); break;
        case 1: *reinterpret_cast< QString*>(_v) = virtualDiskId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = virtualDiskName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = virtualDiskLocation(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setVirtualDisk(*reinterpret_cast< CMedium*>(_v)); break;
        case 1: setVirtualDiskId(*reinterpret_cast< QString*>(_v)); break;
        case 2: setVirtualDiskName(*reinterpret_cast< QString*>(_v)); break;
        case 3: setVirtualDiskLocation(*reinterpret_cast< QString*>(_v)); break;
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
