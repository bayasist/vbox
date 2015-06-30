/****************************************************************************
** Meta object code from reading C++ file 'UIMachineView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/runtime/UIMachineView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   32,   14,   14, 0x09,
      67,   14,   14,   14, 0x29,
     153,   91,   14,   14, 0x09,
     225,  204,   14,   14, 0x09,
     271,  264,   14,   14, 0x09,
     315,  306,   14,   14, 0x09,
     356,   14,   14,   14, 0x09,
     376,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineView[] = {
    "UIMachineView\0\0resizeHintDone()\0aSize\0"
    "sltPerformGuestResize(QSize)\0"
    "sltPerformGuestResize()\0"
    "iPixelFormat,pVRAM,iBitsPerPixel,iBytesPerLine,iWidth,iHeight\0"
    "sltHandleRequestResize(int,uchar*,int,int,int,int)\0"
    "iX,iY,iWidth,iHeight\0"
    "sltHandleNotifyUpdate(int,int,int,int)\0"
    "region\0sltHandleSetVisibleRegion(QRegion)\0"
    "fVisible\0sltHandle3DOverlayVisibilityChange(bool)\0"
    "sltDesktopResized()\0sltMachineStateChanged()\0"
};

void UIMachineView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineView *_t = static_cast<UIMachineView *>(_o);
        switch (_id) {
        case 0: _t->resizeHintDone(); break;
        case 1: _t->sltPerformGuestResize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->sltPerformGuestResize(); break;
        case 3: _t->sltHandleRequestResize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uchar*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 4: _t->sltHandleNotifyUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->sltHandleSetVisibleRegion((*reinterpret_cast< QRegion(*)>(_a[1]))); break;
        case 6: _t->sltHandle3DOverlayVisibilityChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sltDesktopResized(); break;
        case 8: _t->sltMachineStateChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_UIMachineView,
      qt_meta_data_UIMachineView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineView))
        return static_cast<void*>(const_cast< UIMachineView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int UIMachineView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void UIMachineView::resizeHintDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UIMachineViewBlocker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_UIMachineViewBlocker[] = {
    "UIMachineViewBlocker\0"
};

void UIMachineViewBlocker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIMachineViewBlocker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineViewBlocker::staticMetaObject = {
    { &QEventLoop::staticMetaObject, qt_meta_stringdata_UIMachineViewBlocker,
      qt_meta_data_UIMachineViewBlocker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineViewBlocker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineViewBlocker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineViewBlocker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineViewBlocker))
        return static_cast<void*>(const_cast< UIMachineViewBlocker*>(this));
    return QEventLoop::qt_metacast(_clname);
}

int UIMachineViewBlocker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventLoop::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
