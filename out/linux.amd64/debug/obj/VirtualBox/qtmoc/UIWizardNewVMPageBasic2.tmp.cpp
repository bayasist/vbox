/****************************************************************************
** Meta object code from reading C++ file 'UIWizardNewVMPageBasic2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/newvm/UIWizardNewVMPageBasic2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardNewVMPageBasic2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardNewVMPageBasic2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      52,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardNewVMPageBasic2[] = {
    "UIWizardNewVMPageBasic2\0\0"
    "sltRamSliderValueChanged()\0"
    "sltRamEditorValueChanged()\0"
};

void UIWizardNewVMPageBasic2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardNewVMPageBasic2 *_t = static_cast<UIWizardNewVMPageBasic2 *>(_o);
        switch (_id) {
        case 0: _t->sltRamSliderValueChanged(); break;
        case 1: _t->sltRamEditorValueChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIWizardNewVMPageBasic2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardNewVMPageBasic2::staticMetaObject = {
    { &UIWizardPage::staticMetaObject, qt_meta_stringdata_UIWizardNewVMPageBasic2,
      qt_meta_data_UIWizardNewVMPageBasic2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardNewVMPageBasic2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardNewVMPageBasic2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardNewVMPageBasic2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardNewVMPageBasic2))
        return static_cast<void*>(const_cast< UIWizardNewVMPageBasic2*>(this));
    if (!strcmp(_clname, "UIWizardNewVMPage2"))
        return static_cast< UIWizardNewVMPage2*>(const_cast< UIWizardNewVMPageBasic2*>(this));
    return UIWizardPage::qt_metacast(_clname);
}

int UIWizardNewVMPageBasic2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
