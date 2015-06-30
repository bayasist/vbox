/****************************************************************************
** Meta object code from reading C++ file 'VBoxGlobal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/globals/VBoxGlobal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxGlobal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxGlobal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   12,   11,   11, 0x05,
      50,   12,   11,   11, 0x05,
      76,   11,   11,   11, 0x05,
     106,   12,   11,   11, 0x05,
     135,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     176,  171,  166,   11, 0x0a,
     201,  193,   11,   11, 0x0a,
     231,   11,   11,   11, 0x0a,
     263,   11,   11,   11, 0x09,
     273,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VBoxGlobal[] = {
    "VBoxGlobal\0\0strMediumID\0"
    "sigMediumCreated(QString)\0"
    "sigMediumDeleted(QString)\0"
    "sigMediumEnumerationStarted()\0"
    "sigMediumEnumerated(QString)\0"
    "sigMediumEnumerationFinished()\0bool\0"
    "aURL\0openURL(QString)\0strLang\0"
    "sltGUILanguageChange(QString)\0"
    "sltProcessGlobalSettingChange()\0"
    "prepare()\0cleanup()\0"
};

void VBoxGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxGlobal *_t = static_cast<VBoxGlobal *>(_o);
        switch (_id) {
        case 0: _t->sigMediumCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sigMediumDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->sigMediumEnumerationStarted(); break;
        case 3: _t->sigMediumEnumerated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->sigMediumEnumerationFinished(); break;
        case 5: { bool _r = _t->openURL((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->sltGUILanguageChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sltProcessGlobalSettingChange(); break;
        case 8: _t->prepare(); break;
        case 9: _t->cleanup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxGlobal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxGlobal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VBoxGlobal,
      qt_meta_data_VBoxGlobal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxGlobal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxGlobal))
        return static_cast<void*>(const_cast< VBoxGlobal*>(this));
    return QObject::qt_metacast(_clname);
}

int VBoxGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void VBoxGlobal::sigMediumCreated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VBoxGlobal::sigMediumDeleted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VBoxGlobal::sigMediumEnumerationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void VBoxGlobal::sigMediumEnumerated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VBoxGlobal::sigMediumEnumerationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
