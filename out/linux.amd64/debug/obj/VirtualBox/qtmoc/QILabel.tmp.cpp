/****************************************************************************
** Meta object code from reading C++ file 'QILabel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QILabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QILabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QILabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      23,   17,    8,    8, 0x0a,
      40,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QILabel[] = {
    "QILabel\0\0clear()\0aText\0setText(QString)\0"
    "copy()\0"
};

void QILabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QILabel *_t = static_cast<QILabel *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->copy(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QILabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QILabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QILabel,
      qt_meta_data_QILabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QILabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QILabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QILabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QILabel))
        return static_cast<void*>(const_cast< QILabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int QILabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
