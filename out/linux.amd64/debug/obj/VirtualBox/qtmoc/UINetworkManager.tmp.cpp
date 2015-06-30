/****************************************************************************
** Meta object code from reading C++ file 'UINetworkManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UINetworkManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UINetworkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UINetworkManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   17,   17,   17, 0x0a,
      74,   52,   17,   17, 0x08,
     132,  127,   17,   17, 0x08,
     169,  127,   17,   17, 0x08,
     220,  206,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UINetworkManager[] = {
    "UINetworkManager\0\0sigCancelNetworkRequests()\0"
    "show()\0uuid,iReceived,iTotal\0"
    "sltHandleNetworkRequestProgress(QUuid,qint64,qint64)\0"
    "uuid\0sltHandleNetworkRequestCancel(QUuid)\0"
    "sltHandleNetworkRequestFinish(QUuid)\0"
    "uuid,strError\0"
    "sltHandleNetworkRequestFailure(QUuid,QString)\0"
};

void UINetworkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UINetworkManager *_t = static_cast<UINetworkManager *>(_o);
        switch (_id) {
        case 0: _t->sigCancelNetworkRequests(); break;
        case 1: _t->show(); break;
        case 2: _t->sltHandleNetworkRequestProgress((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 3: _t->sltHandleNetworkRequestCancel((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 4: _t->sltHandleNetworkRequestFinish((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 5: _t->sltHandleNetworkRequestFailure((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UINetworkManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UINetworkManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_UINetworkManager,
      qt_meta_data_UINetworkManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UINetworkManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UINetworkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UINetworkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UINetworkManager))
        return static_cast<void*>(const_cast< UINetworkManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int UINetworkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
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
void UINetworkManager::sigCancelNetworkRequests()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
