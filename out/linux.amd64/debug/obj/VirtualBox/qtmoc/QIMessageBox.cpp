/****************************************************************************
** Meta object code from reading C++ file 'QIMessageBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QIMessageBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QIMessageBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QIMessageBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      23,   13,   13,   13, 0x08,
      31,   13,   13,   13, 0x08,
      39,   13,   13,   13, 0x08,
      47,   13,   13,   13, 0x08,
      54,   13,   13,   13, 0x08,
      68,   13,   13,   13, 0x08,
      82,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QIMessageBox[] = {
    "QIMessageBox\0\0reject()\0done1()\0done2()\0"
    "done3()\0copy()\0detailsBack()\0detailsNext()\0"
    "sltUpdateSize()\0"
};

void QIMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QIMessageBox *_t = static_cast<QIMessageBox *>(_o);
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->done1(); break;
        case 2: _t->done2(); break;
        case 3: _t->done3(); break;
        case 4: _t->copy(); break;
        case 5: _t->detailsBack(); break;
        case 6: _t->detailsNext(); break;
        case 7: _t->sltUpdateSize(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QIMessageBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QIMessageBox::staticMetaObject = {
    { &QIDialog::staticMetaObject, qt_meta_stringdata_QIMessageBox,
      qt_meta_data_QIMessageBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QIMessageBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QIMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QIMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QIMessageBox))
        return static_cast<void*>(const_cast< QIMessageBox*>(this));
    return QIDialog::qt_metacast(_clname);
}

int QIMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
