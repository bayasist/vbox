/****************************************************************************
** Meta object code from reading C++ file 'UIWizardExportApp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/wizards/exportappliance/UIWizardExportApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIWizardExportApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIWizardExportApp[] = {

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
      23,   19,   18,   18, 0x08,
      48,   19,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIWizardExportApp[] = {
    "UIWizardExportApp\0\0iId\0sltCurrentIdChanged(int)\0"
    "sltCustomButtonClicked(int)\0"
};

void UIWizardExportApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIWizardExportApp *_t = static_cast<UIWizardExportApp *>(_o);
        switch (_id) {
        case 0: _t->sltCurrentIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sltCustomButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIWizardExportApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIWizardExportApp::staticMetaObject = {
    { &UIWizard::staticMetaObject, qt_meta_stringdata_UIWizardExportApp,
      qt_meta_data_UIWizardExportApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIWizardExportApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIWizardExportApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIWizardExportApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIWizardExportApp))
        return static_cast<void*>(const_cast< UIWizardExportApp*>(this));
    return UIWizard::qt_metacast(_clname);
}

int UIWizardExportApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWizard::qt_metacall(_c, _id, _a);
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
