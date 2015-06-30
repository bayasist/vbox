/****************************************************************************
** Meta object code from reading C++ file 'QIStateIndicator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QIStateIndicator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QIStateIndicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QIStateIndicator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   18,   17,   17, 0x05,
      84,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,  143,   17,   17, 0x0a,
     164,  143,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QIStateIndicator[] = {
    "QIStateIndicator\0\0aIndicator,aEv\0"
    "mouseDoubleClicked(QIStateIndicator*,QMouseEvent*)\0"
    "contextMenuRequested(QIStateIndicator*,QContextMenuEvent*)\0"
    "aState\0setState(int)\0setState(bool)\0"
};

void QIStateIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QIStateIndicator *_t = static_cast<QIStateIndicator *>(_o);
        switch (_id) {
        case 0: _t->mouseDoubleClicked((*reinterpret_cast< QIStateIndicator*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 1: _t->contextMenuRequested((*reinterpret_cast< QIStateIndicator*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 2: _t->setState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QIStateIndicator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QIStateIndicator::staticMetaObject = {
    { &QIWithRetranslateUI<QFrame>::staticMetaObject, qt_meta_stringdata_QIStateIndicator,
      qt_meta_data_QIStateIndicator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QIStateIndicator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QIStateIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QIStateIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QIStateIndicator))
        return static_cast<void*>(const_cast< QIStateIndicator*>(this));
    return QIWithRetranslateUI<QFrame>::qt_metacast(_clname);
}

int QIStateIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QFrame>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QIStateIndicator::mouseDoubleClicked(QIStateIndicator * _t1, QMouseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QIStateIndicator::contextMenuRequested(QIStateIndicator * _t1, QContextMenuEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
