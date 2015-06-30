/****************************************************************************
** Meta object code from reading C++ file 'UIMediumEnumerator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/medium/UIMediumEnumerator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMediumEnumerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMediumEnumerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   20,   19,   19, 0x05,
      58,   20,   19,   19, 0x05,
      84,   19,   19,   19, 0x05,
     114,   20,   19,   19, 0x05,
     143,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     187,  174,   19,   19, 0x08,
     244,  219,   19,   19, 0x08,
     314,  287,   19,   19, 0x08,
     362,  356,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMediumEnumerator[] = {
    "UIMediumEnumerator\0\0strMediumID\0"
    "sigMediumCreated(QString)\0"
    "sigMediumDeleted(QString)\0"
    "sigMediumEnumerationStarted()\0"
    "sigMediumEnumerated(QString)\0"
    "sigMediumEnumerationFinished()\0"
    "strMachineID\0sltHandleMachineUpdate(QString)\0"
    "strMachineID,fRegistered\0"
    "sltHandleMachineRegistration(QString,bool)\0"
    "strMachineID,strSnapshotID\0"
    "sltHandleSnapshotDeleted(QString,QString)\0"
    "pTask\0sltHandleMediumEnumerationTaskComplete(UITask*)\0"
};

void UIMediumEnumerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMediumEnumerator *_t = static_cast<UIMediumEnumerator *>(_o);
        switch (_id) {
        case 0: _t->sigMediumCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sigMediumDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->sigMediumEnumerationStarted(); break;
        case 3: _t->sigMediumEnumerated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->sigMediumEnumerationFinished(); break;
        case 5: _t->sltHandleMachineUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sltHandleMachineRegistration((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->sltHandleSnapshotDeleted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->sltHandleMediumEnumerationTaskComplete((*reinterpret_cast< UITask*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMediumEnumerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMediumEnumerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIMediumEnumerator,
      qt_meta_data_UIMediumEnumerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMediumEnumerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMediumEnumerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMediumEnumerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMediumEnumerator))
        return static_cast<void*>(const_cast< UIMediumEnumerator*>(this));
    return QObject::qt_metacast(_clname);
}

int UIMediumEnumerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void UIMediumEnumerator::sigMediumCreated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIMediumEnumerator::sigMediumDeleted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIMediumEnumerator::sigMediumEnumerationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIMediumEnumerator::sigMediumEnumerated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UIMediumEnumerator::sigMediumEnumerationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
