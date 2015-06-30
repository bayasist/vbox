/****************************************************************************
** Meta object code from reading C++ file 'QITreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QITreeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QITreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QITreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   14,   13,   13, 0x05,
      80,   65,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QITreeWidget[] = {
    "QITreeWidget\0\0aItem,aPainter\0"
    "painted(QTreeWidgetItem*,QPainter*)\0"
    "aSize,aOldSize\0resized(QSize,QSize)\0"
};

void QITreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QITreeWidget *_t = static_cast<QITreeWidget *>(_o);
        switch (_id) {
        case 0: _t->painted((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 1: _t->resized((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QITreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QITreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_QITreeWidget,
      qt_meta_data_QITreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QITreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QITreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QITreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QITreeWidget))
        return static_cast<void*>(const_cast< QITreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int QITreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QITreeWidget::painted(QTreeWidgetItem * _t1, QPainter * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QITreeWidget::resized(const QSize & _t1, const QSize & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
