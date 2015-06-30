/****************************************************************************
** Meta object code from reading C++ file 'VBoxSnapshotDetailsDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/VBoxSnapshotDetailsDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxSnapshotDetailsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxSnapshotDetailsDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxSnapshotDetailsDlg[] = {
    "VBoxSnapshotDetailsDlg\0\0aText\0"
    "onNameChanged(QString)\0"
};

void VBoxSnapshotDetailsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxSnapshotDetailsDlg *_t = static_cast<VBoxSnapshotDetailsDlg *>(_o);
        switch (_id) {
        case 0: _t->onNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxSnapshotDetailsDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxSnapshotDetailsDlg::staticMetaObject = {
    { &QIWithRetranslateUI<QDialog>::staticMetaObject, qt_meta_stringdata_VBoxSnapshotDetailsDlg,
      qt_meta_data_VBoxSnapshotDetailsDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxSnapshotDetailsDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxSnapshotDetailsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxSnapshotDetailsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxSnapshotDetailsDlg))
        return static_cast<void*>(const_cast< VBoxSnapshotDetailsDlg*>(this));
    if (!strcmp(_clname, "Ui::VBoxSnapshotDetailsDlg"))
        return static_cast< Ui::VBoxSnapshotDetailsDlg*>(const_cast< VBoxSnapshotDetailsDlg*>(this));
    return QIWithRetranslateUI<QDialog>::qt_metacast(_clname);
}

int VBoxSnapshotDetailsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_VBoxScreenshotViewer[] = {

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

static const char qt_meta_stringdata_VBoxScreenshotViewer[] = {
    "VBoxScreenshotViewer\0"
};

void VBoxScreenshotViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VBoxScreenshotViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxScreenshotViewer::staticMetaObject = {
    { &QIWithRetranslateUI2<QWidget>::staticMetaObject, qt_meta_stringdata_VBoxScreenshotViewer,
      qt_meta_data_VBoxScreenshotViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxScreenshotViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxScreenshotViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxScreenshotViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxScreenshotViewer))
        return static_cast<void*>(const_cast< VBoxScreenshotViewer*>(this));
    return QIWithRetranslateUI2<QWidget>::qt_metacast(_clname);
}

int VBoxScreenshotViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI2<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
