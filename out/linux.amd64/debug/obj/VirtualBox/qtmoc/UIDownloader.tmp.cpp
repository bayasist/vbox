/****************************************************************************
** Meta object code from reading C++ file 'UIDownloader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UIDownloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIDownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIDownloader[] = {

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
      14,   13,   13,   13, 0x05,
      40,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   13,   13,   13, 0x09,
      88,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UIDownloader[] = {
    "UIDownloader\0\0sigToStartAcknowledging()\0"
    "sigToStartDownloading()\0sltStartAcknowledging()\0"
    "sltStartDownloading()\0"
};

void UIDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIDownloader *_t = static_cast<UIDownloader *>(_o);
        switch (_id) {
        case 0: _t->sigToStartAcknowledging(); break;
        case 1: _t->sigToStartDownloading(); break;
        case 2: _t->sltStartAcknowledging(); break;
        case 3: _t->sltStartDownloading(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIDownloader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIDownloader::staticMetaObject = {
    { &UINetworkCustomer::staticMetaObject, qt_meta_stringdata_UIDownloader,
      qt_meta_data_UIDownloader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIDownloader))
        return static_cast<void*>(const_cast< UIDownloader*>(this));
    return UINetworkCustomer::qt_metacast(_clname);
}

int UIDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UINetworkCustomer::qt_metacall(_c, _id, _a);
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
void UIDownloader::sigToStartAcknowledging()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIDownloader::sigToStartDownloading()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
