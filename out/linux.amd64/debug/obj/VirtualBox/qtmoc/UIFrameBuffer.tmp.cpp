/****************************************************************************
** Meta object code from reading C++ file 'UIFrameBuffer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UIFrameBuffer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIFrameBuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIFrameBuffer[] = {

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
      77,   15,   14,   14, 0x05,
     143,  122,   14,   14, 0x05,
     183,  176,   14,   14, 0x05,
     221,  212,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIFrameBuffer[] = {
    "UIFrameBuffer\0\0"
    "iPixelFormat,pVRAM,iBitsPerPixel,iBytesPerLine,iWidth,iHeight\0"
    "sigRequestResize(int,uchar*,int,int,int,int)\0"
    "iX,iY,iWidth,iHeight\0"
    "sigNotifyUpdate(int,int,int,int)\0"
    "region\0sigSetVisibleRegion(QRegion)\0"
    "fVisible\0sigNotifyAbout3DOverlayVisibilityChange(bool)\0"
};

void UIFrameBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIFrameBuffer *_t = static_cast<UIFrameBuffer *>(_o);
        switch (_id) {
        case 0: _t->sigRequestResize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uchar*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->sigNotifyUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->sigSetVisibleRegion((*reinterpret_cast< QRegion(*)>(_a[1]))); break;
        case 3: _t->sigNotifyAbout3DOverlayVisibilityChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIFrameBuffer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIFrameBuffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIFrameBuffer,
      qt_meta_data_UIFrameBuffer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIFrameBuffer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIFrameBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIFrameBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIFrameBuffer))
        return static_cast<void*>(const_cast< UIFrameBuffer*>(this));
    return QObject::qt_metacast(_clname);
}

int UIFrameBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void UIFrameBuffer::sigRequestResize(int _t1, uchar * _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIFrameBuffer::sigNotifyUpdate(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIFrameBuffer::sigSetVisibleRegion(QRegion _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UIFrameBuffer::sigNotifyAbout3DOverlayVisibilityChange(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
