/****************************************************************************
** Meta object code from reading C++ file 'UINetworkReply.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UINetworkReply.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UINetworkReply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UINetworkReply[] = {

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
      43,   16,   15,   15, 0x05,
      75,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UINetworkReply[] = {
    "UINetworkReply\0\0iBytesReceived,iBytesTotal\0"
    "downloadProgress(qint64,qint64)\0"
    "finished()\0"
};

void UINetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UINetworkReply *_t = static_cast<UINetworkReply *>(_o);
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->finished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UINetworkReply::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UINetworkReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UINetworkReply,
      qt_meta_data_UINetworkReply, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UINetworkReply::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UINetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UINetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UINetworkReply))
        return static_cast<void*>(const_cast< UINetworkReply*>(this));
    return QObject::qt_metacast(_clname);
}

int UINetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void UINetworkReply::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UINetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
