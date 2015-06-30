/****************************************************************************
** Meta object code from reading C++ file 'VBoxDbgStatsQt4.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Debugger/VBoxDbgStatsQt4.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxDbgStatsQt4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxDbgStatsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   18,   17,   17, 0x09,
      60,   17,   17,   17, 0x09,
      72,   17,   17,   17, 0x09,
      86,   17,   17,   17, 0x09,
      99,   17,   17,   17, 0x09,
     110,   17,   17,   17, 0x09,
     120,   17,   17,   17, 0x09,
     131,   17,   17,   17, 0x09,
     145,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VBoxDbgStatsView[] = {
    "VBoxDbgStatsView\0\0a_rPos\0"
    "headerContextMenuRequested(QPoint)\0"
    "actExpand()\0actCollapse()\0actRefresh()\0"
    "actReset()\0actCopy()\0actToLog()\0"
    "actToRelLog()\0actAdjColumns()\0"
};

void VBoxDbgStatsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxDbgStatsView *_t = static_cast<VBoxDbgStatsView *>(_o);
        switch (_id) {
        case 0: _t->headerContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->actExpand(); break;
        case 2: _t->actCollapse(); break;
        case 3: _t->actRefresh(); break;
        case 4: _t->actReset(); break;
        case 5: _t->actCopy(); break;
        case 6: _t->actToLog(); break;
        case 7: _t->actToRelLog(); break;
        case 8: _t->actAdjColumns(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxDbgStatsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxDbgStatsView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_VBoxDbgStatsView,
      qt_meta_data_VBoxDbgStatsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxDbgStatsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxDbgStatsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxDbgStatsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxDbgStatsView))
        return static_cast<void*>(const_cast< VBoxDbgStatsView*>(this));
    if (!strcmp(_clname, "VBoxDbgBase"))
        return static_cast< VBoxDbgBase*>(const_cast< VBoxDbgStatsView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int VBoxDbgStatsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_VBoxDbgStats[] = {

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
      18,   14,   13,   13, 0x09,
      33,   13,   13,   13, 0x09,
      44,   13,   13,   13, 0x09,
      63,   54,   13,   13, 0x09,
      79,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VBoxDbgStats[] = {
    "VBoxDbgStats\0\0Str\0apply(QString)\0"
    "applyAll()\0refresh()\0iRefresh\0"
    "setRefresh(int)\0actFocusToPat()\0"
};

void VBoxDbgStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxDbgStats *_t = static_cast<VBoxDbgStats *>(_o);
        switch (_id) {
        case 0: _t->apply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->applyAll(); break;
        case 2: _t->refresh(); break;
        case 3: _t->setRefresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->actFocusToPat(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxDbgStats::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxDbgStats::staticMetaObject = {
    { &VBoxDbgBaseWindow::staticMetaObject, qt_meta_stringdata_VBoxDbgStats,
      qt_meta_data_VBoxDbgStats, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxDbgStats::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxDbgStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxDbgStats::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxDbgStats))
        return static_cast<void*>(const_cast< VBoxDbgStats*>(this));
    return VBoxDbgBaseWindow::qt_metacast(_clname);
}

int VBoxDbgStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VBoxDbgBaseWindow::qt_metacall(_c, _id, _a);
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
