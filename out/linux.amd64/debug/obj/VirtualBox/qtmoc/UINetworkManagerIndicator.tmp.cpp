/****************************************************************************
** Meta object code from reading C++ file 'UINetworkManagerIndicator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UINetworkManagerIndicator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UINetworkManagerIndicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UINetworkManagerIndicator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   27,   26,   26, 0x08,
      63,   27,   26,   26, 0x08,
     109,   95,   26,   26, 0x08,
     147,   27,   26,   26, 0x08,
     201,  179,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UINetworkManagerIndicator[] = {
    "UINetworkManagerIndicator\0\0uuid\0"
    "sltSetProgressToStarted(QUuid)\0"
    "sltSetProgressToCanceled(QUuid)\0"
    "uuid,strError\0sltSetProgressToFailed(QUuid,QString)\0"
    "sltSetProgressToFinished(QUuid)\0"
    "uuid,iReceived,iTotal\0"
    "sltSetProgress(QUuid,qint64,qint64)\0"
};

void UINetworkManagerIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UINetworkManagerIndicator *_t = static_cast<UINetworkManagerIndicator *>(_o);
        switch (_id) {
        case 0: _t->sltSetProgressToStarted((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 1: _t->sltSetProgressToCanceled((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 2: _t->sltSetProgressToFailed((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->sltSetProgressToFinished((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 4: _t->sltSetProgress((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UINetworkManagerIndicator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UINetworkManagerIndicator::staticMetaObject = {
    { &QIStateIndicator::staticMetaObject, qt_meta_stringdata_UINetworkManagerIndicator,
      qt_meta_data_UINetworkManagerIndicator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UINetworkManagerIndicator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UINetworkManagerIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UINetworkManagerIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UINetworkManagerIndicator))
        return static_cast<void*>(const_cast< UINetworkManagerIndicator*>(this));
    return QIStateIndicator::qt_metacast(_clname);
}

int UINetworkManagerIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIStateIndicator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
