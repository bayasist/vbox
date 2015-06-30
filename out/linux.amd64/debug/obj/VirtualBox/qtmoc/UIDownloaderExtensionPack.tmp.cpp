/****************************************************************************
** Meta object code from reading C++ file 'UIDownloaderExtensionPack.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UIDownloaderExtensionPack.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIDownloaderExtensionPack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIDownloaderExtensionPack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   27,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIDownloaderExtensionPack[] = {
    "UIDownloaderExtensionPack\0\0"
    "strSource,strTarget,strHash\0"
    "sigDownloadFinished(QString,QString,QString)\0"
};

void UIDownloaderExtensionPack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIDownloaderExtensionPack *_t = static_cast<UIDownloaderExtensionPack *>(_o);
        switch (_id) {
        case 0: _t->sigDownloadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIDownloaderExtensionPack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIDownloaderExtensionPack::staticMetaObject = {
    { &UIDownloader::staticMetaObject, qt_meta_stringdata_UIDownloaderExtensionPack,
      qt_meta_data_UIDownloaderExtensionPack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIDownloaderExtensionPack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIDownloaderExtensionPack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIDownloaderExtensionPack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIDownloaderExtensionPack))
        return static_cast<void*>(const_cast< UIDownloaderExtensionPack*>(this));
    return UIDownloader::qt_metacast(_clname);
}

int UIDownloaderExtensionPack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIDownloader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UIDownloaderExtensionPack::sigDownloadFinished(const QString & _t1, const QString & _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
