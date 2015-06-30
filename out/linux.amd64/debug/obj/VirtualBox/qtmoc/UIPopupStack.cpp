/****************************************************************************
** Meta object code from reading C++ file 'UIPopupStack.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIPopupStack.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIPopupStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPopupStack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x05,
      82,   55,   13,   13, 0x05,
     118,  112,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     137,   13,   13,   13, 0x08,
     172,  157,   13,   13, 0x08,
     201,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIPopupStack[] = {
    "UIPopupStack\0\0iWidth\0"
    "sigProposeStackViewportWidth(int)\0"
    "strPopupPaneID,iResultCode\0"
    "sigPopupPaneDone(QString,int)\0strID\0"
    "sigRemove(QString)\0sltAdjustGeometry()\0"
    "strPopupPaneID\0sltPopupPaneRemoved(QString)\0"
    "sltPopupPanesRemoved()\0"
};

void UIPopupStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPopupStack *_t = static_cast<UIPopupStack *>(_o);
        switch (_id) {
        case 0: _t->sigProposeStackViewportWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigPopupPaneDone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->sigRemove((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sltAdjustGeometry(); break;
        case 4: _t->sltPopupPaneRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sltPopupPanesRemoved(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIPopupStack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPopupStack::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIPopupStack,
      qt_meta_data_UIPopupStack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPopupStack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPopupStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPopupStack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPopupStack))
        return static_cast<void*>(const_cast< UIPopupStack*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIPopupStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UIPopupStack::sigProposeStackViewportWidth(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIPopupStack::sigPopupPaneDone(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIPopupStack::sigRemove(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
