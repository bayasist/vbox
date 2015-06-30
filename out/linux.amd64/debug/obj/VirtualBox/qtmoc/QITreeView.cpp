/****************************************************************************
** Meta object code from reading C++ file 'QITreeView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QITreeView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QITreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QITreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   12,   11,   11, 0x05,
      97,   75,   11,   11, 0x05,
     150,  143,   11,   11, 0x05,
     175,  143,   11,   11, 0x05,
     202,  143,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     235,   12,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QITreeView[] = {
    "QITreeView\0\0aCurrent,aPrevious\0"
    "currentItemChanged(QModelIndex,QModelIndex)\0"
    "aPainter,aRect,aIndex\0"
    "drawItemBranches(QPainter*,QRect,QModelIndex)\0"
    "aEvent\0mouseMoved(QMouseEvent*)\0"
    "mousePressed(QMouseEvent*)\0"
    "mouseDoubleClicked(QMouseEvent*)\0"
    "currentChanged(QModelIndex,QModelIndex)\0"
};

void QITreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QITreeView *_t = static_cast<QITreeView *>(_o);
        switch (_id) {
        case 0: _t->currentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->drawItemBranches((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 2: _t->mouseMoved((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mousePressed((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseDoubleClicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QITreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QITreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QITreeView,
      qt_meta_data_QITreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QITreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QITreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QITreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QITreeView))
        return static_cast<void*>(const_cast< QITreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int QITreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QITreeView::currentItemChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QITreeView::drawItemBranches(QPainter * _t1, const QRect & _t2, const QModelIndex & _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< QITreeView *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QITreeView::mouseMoved(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QITreeView::mousePressed(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QITreeView::mouseDoubleClicked(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
