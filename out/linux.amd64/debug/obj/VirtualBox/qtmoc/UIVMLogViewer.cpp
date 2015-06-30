/****************************************************************************
** Meta object code from reading C++ file 'UIVMLogViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/UIVMLogViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIVMLogViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIVMLogViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      24,   14,   14,   14, 0x08,
      39,   14,   34,   14, 0x08,
      47,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIVMLogViewer[] = {
    "UIVMLogViewer\0\0search()\0refresh()\0"
    "bool\0close()\0save()\0"
};

void UIVMLogViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIVMLogViewer *_t = static_cast<UIVMLogViewer *>(_o);
        switch (_id) {
        case 0: _t->search(); break;
        case 1: _t->refresh(); break;
        case 2: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->save(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIVMLogViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIVMLogViewer::staticMetaObject = {
    { &QIWithRetranslateUI2<QMainWindow>::staticMetaObject, qt_meta_stringdata_UIVMLogViewer,
      qt_meta_data_UIVMLogViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIVMLogViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIVMLogViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIVMLogViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIVMLogViewer))
        return static_cast<void*>(const_cast< UIVMLogViewer*>(this));
    if (!strcmp(_clname, "Ui::UIVMLogViewer"))
        return static_cast< Ui::UIVMLogViewer*>(const_cast< UIVMLogViewer*>(this));
    return QIWithRetranslateUI2<QMainWindow>::qt_metacast(_clname);
}

int UIVMLogViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI2<QMainWindow>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
