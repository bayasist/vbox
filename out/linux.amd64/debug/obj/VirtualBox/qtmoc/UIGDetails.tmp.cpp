/****************************************************************************
** Meta object code from reading C++ file 'UIGDetails.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/details/UIGDetails.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGDetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGDetails[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   12,   11,   11, 0x05,
      81,   11,   11,   11, 0x05,
     101,   11,   11,   11, 0x05,
     120,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetails[] = {
    "UIGDetails\0\0strCategory,strControl,strId\0"
    "sigLinkClicked(QString,QString,QString)\0"
    "sigSlidingStarted()\0sigToggleStarted()\0"
    "sigToggleFinished()\0"
};

void UIGDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetails *_t = static_cast<UIGDetails *>(_o);
        switch (_id) {
        case 0: _t->sigLinkClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->sigSlidingStarted(); break;
        case 2: _t->sigToggleStarted(); break;
        case 3: _t->sigToggleFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetails::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetails::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIGDetails,
      qt_meta_data_UIGDetails, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetails::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetails))
        return static_cast<void*>(const_cast< UIGDetails*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIGDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UIGDetails::sigLinkClicked(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIGDetails::sigSlidingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIGDetails::sigToggleStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIGDetails::sigToggleFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
