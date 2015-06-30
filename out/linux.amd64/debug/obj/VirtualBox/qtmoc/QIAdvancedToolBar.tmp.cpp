/****************************************************************************
** Meta object code from reading C++ file 'QIAdvancedToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QIAdvancedToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QIAdvancedToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QIAdvancedToolBar[] = {

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
      32,   19,   18,   18, 0x05,
      78,   56,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     122,  105,   18,   18, 0x08,
     160,  151,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QIAdvancedToolBar[] = {
    "QIAdvancedToolBar\0\0iActionIndex\0"
    "sigActionTriggered(int)\0iActionIndex,fChecked\0"
    "sigActionToggled(int,bool)\0pTriggeredAction\0"
    "sltActionTriggered(QAction*)\0fChecked\0"
    "sltActionToggled(bool)\0"
};

void QIAdvancedToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QIAdvancedToolBar *_t = static_cast<QIAdvancedToolBar *>(_o);
        switch (_id) {
        case 0: _t->sigActionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigActionToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->sltActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->sltActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QIAdvancedToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QIAdvancedToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QIAdvancedToolBar,
      qt_meta_data_QIAdvancedToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QIAdvancedToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QIAdvancedToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QIAdvancedToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QIAdvancedToolBar))
        return static_cast<void*>(const_cast< QIAdvancedToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QIAdvancedToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QIAdvancedToolBar::sigActionTriggered(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QIAdvancedToolBar::sigActionToggled(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
