/****************************************************************************
** Meta object code from reading C++ file 'QIAdvancedSlider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QIAdvancedSlider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QIAdvancedSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QIAdvancedSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      36,   17,   17,   17, 0x05,
      53,   17,   17,   17, 0x05,
      69,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   86,   17,   17, 0x0a,
     135,  131,   17,   17, 0x0a,
     149,  131,   17,   17, 0x08,

 // properties: name, type, flags
     173,  169, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QIAdvancedSlider[] = {
    "QIAdvancedSlider\0\0valueChanged(int)\0"
    "sliderMoved(int)\0sliderPressed()\0"
    "sliderReleased()\0fOrientation\0"
    "setOrientation(Qt::Orientation)\0val\0"
    "setValue(int)\0sltSliderMoved(int)\0int\0"
    "value\0"
};

void QIAdvancedSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QIAdvancedSlider *_t = static_cast<QIAdvancedSlider *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliderPressed(); break;
        case 3: _t->sliderReleased(); break;
        case 4: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sltSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QIAdvancedSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QIAdvancedSlider::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QIAdvancedSlider,
      qt_meta_data_QIAdvancedSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QIAdvancedSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QIAdvancedSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QIAdvancedSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QIAdvancedSlider))
        return static_cast<void*>(const_cast< QIAdvancedSlider*>(this));
    return QWidget::qt_metacast(_clname);
}

int QIAdvancedSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = value(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QIAdvancedSlider::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QIAdvancedSlider::sliderMoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QIAdvancedSlider::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QIAdvancedSlider::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
