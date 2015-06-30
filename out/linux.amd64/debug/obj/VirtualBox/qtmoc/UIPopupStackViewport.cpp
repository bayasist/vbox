/****************************************************************************
** Meta object code from reading C++ file 'UIPopupStackViewport.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIPopupStackViewport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIPopupStackViewport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPopupStackViewport[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x05,
      59,   21,   21,   21, 0x05,
     107,   80,   21,   21, 0x05,
     152,  137,   21,   21, 0x05,
     181,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     204,   22,   21,   21, 0x08,
     235,   21,   21,   21, 0x08,
     267,  255,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIPopupStackViewport[] = {
    "UIPopupStackViewport\0\0iWidth\0"
    "sigProposePopupPaneWidth(int)\0"
    "sigSizeHintChanged()\0strPopupPaneID,iResultCode\0"
    "sigPopupPaneDone(QString,int)\0"
    "strPopupPaneID\0sigPopupPaneRemoved(QString)\0"
    "sigPopupPanesRemoved()\0"
    "sltHandleProposalForWidth(int)\0"
    "sltAdjustGeometry()\0iButtonCode\0"
    "sltPopupPaneDone(int)\0"
};

void UIPopupStackViewport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPopupStackViewport *_t = static_cast<UIPopupStackViewport *>(_o);
        switch (_id) {
        case 0: _t->sigProposePopupPaneWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigSizeHintChanged(); break;
        case 2: _t->sigPopupPaneDone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sigPopupPaneRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sigPopupPanesRemoved(); break;
        case 5: _t->sltHandleProposalForWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sltAdjustGeometry(); break;
        case 7: _t->sltPopupPaneDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIPopupStackViewport::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPopupStackViewport::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIPopupStackViewport,
      qt_meta_data_UIPopupStackViewport, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPopupStackViewport::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPopupStackViewport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPopupStackViewport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPopupStackViewport))
        return static_cast<void*>(const_cast< UIPopupStackViewport*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIPopupStackViewport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UIPopupStackViewport::sigProposePopupPaneWidth(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIPopupStackViewport::sigSizeHintChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIPopupStackViewport::sigPopupPaneDone(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UIPopupStackViewport::sigPopupPaneRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UIPopupStackViewport::sigPopupPanesRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
