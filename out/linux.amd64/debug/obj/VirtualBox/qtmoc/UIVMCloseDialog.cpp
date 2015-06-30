/****************************************************************************
** Meta object code from reading C++ file 'UIVMCloseDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UIVMCloseDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIVMCloseDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIVMCloseDialog[] = {

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
      17,   16,   16,   16, 0x08,
      47,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIVMCloseDialog[] = {
    "UIVMCloseDialog\0\0sltUpdateWidgetAvailability()\0"
    "accept()\0"
};

void UIVMCloseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIVMCloseDialog *_t = static_cast<UIVMCloseDialog *>(_o);
        switch (_id) {
        case 0: _t->sltUpdateWidgetAvailability(); break;
        case 1: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIVMCloseDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIVMCloseDialog::staticMetaObject = {
    { &QIWithRetranslateUI<QIDialog>::staticMetaObject, qt_meta_stringdata_UIVMCloseDialog,
      qt_meta_data_UIVMCloseDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIVMCloseDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIVMCloseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIVMCloseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIVMCloseDialog))
        return static_cast<void*>(const_cast< UIVMCloseDialog*>(this));
    return QIWithRetranslateUI<QIDialog>::qt_metacast(_clname);
}

int UIVMCloseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QIDialog>::qt_metacall(_c, _id, _a);
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
