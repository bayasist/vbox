/****************************************************************************
** Meta object code from reading C++ file 'UINetworkRequest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UINetworkRequest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UINetworkRequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UINetworkRequest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   18,   17,   17, 0x05,
      78,   73,   17,   17, 0x05,
      96,   73,   17,   17, 0x05,
     115,   73,   17,   17, 0x05,
     148,  134,   17,   17, 0x05,
     190,  173,   17,   17, 0x05,
     217,   17,   17,   17, 0x05,
     230,   17,   17,   17, 0x05,
     253,  244,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     272,  173,   17,   17, 0x08,
     317,   17,   17,   17, 0x08,
     347,   17,   17,   17, 0x08,
     358,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UINetworkRequest[] = {
    "UINetworkRequest\0\0uuid,iReceived,iTotal\0"
    "sigProgress(QUuid,qint64,qint64)\0uuid\0"
    "sigStarted(QUuid)\0sigCanceled(QUuid)\0"
    "sigFinished(QUuid)\0uuid,strError\0"
    "sigFailed(QUuid,QString)\0iReceived,iTotal\0"
    "sigProgress(qint64,qint64)\0sigStarted()\0"
    "sigFinished()\0strError\0sigFailed(QString)\0"
    "sltHandleNetworkReplyProgress(qint64,qint64)\0"
    "sltHandleNetworkReplyFinish()\0sltRetry()\0"
    "sltCancel()\0"
};

void UINetworkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UINetworkRequest *_t = static_cast<UINetworkRequest *>(_o);
        switch (_id) {
        case 0: _t->sigProgress((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 1: _t->sigStarted((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 2: _t->sigCanceled((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 3: _t->sigFinished((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 4: _t->sigFailed((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->sigProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->sigStarted(); break;
        case 7: _t->sigFinished(); break;
        case 8: _t->sigFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->sltHandleNetworkReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: _t->sltHandleNetworkReplyFinish(); break;
        case 11: _t->sltRetry(); break;
        case 12: _t->sltCancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UINetworkRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UINetworkRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UINetworkRequest,
      qt_meta_data_UINetworkRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UINetworkRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UINetworkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UINetworkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UINetworkRequest))
        return static_cast<void*>(const_cast< UINetworkRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int UINetworkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UINetworkRequest::sigProgress(const QUuid & _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UINetworkRequest::sigStarted(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UINetworkRequest::sigCanceled(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UINetworkRequest::sigFinished(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UINetworkRequest::sigFailed(const QUuid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UINetworkRequest::sigProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UINetworkRequest::sigStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void UINetworkRequest::sigFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void UINetworkRequest::sigFailed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
