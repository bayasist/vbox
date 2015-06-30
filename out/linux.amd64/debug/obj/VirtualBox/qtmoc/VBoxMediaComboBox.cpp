/****************************************************************************
** Meta object code from reading C++ file 'VBoxMediaComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/VBoxMediaComboBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxMediaComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxMediaComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   19,   18,   18, 0x09,
      63,   19,   18,   18, 0x09,
      98,   19,   18,   18, 0x09,
     130,   18,   18,   18, 0x09,
     171,  164,   18,   18, 0x09,
     193,  164,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VBoxMediaComboBox[] = {
    "VBoxMediaComboBox\0\0strMediumID\0"
    "sltHandleMediumCreated(QString)\0"
    "sltHandleMediumEnumerated(QString)\0"
    "sltHandleMediumDeleted(QString)\0"
    "sltHandleMediumEnumerationStart()\0"
    "aIndex\0processActivated(int)\0"
    "processOnItem(QModelIndex)\0"
};

void VBoxMediaComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxMediaComboBox *_t = static_cast<VBoxMediaComboBox *>(_o);
        switch (_id) {
        case 0: _t->sltHandleMediumCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sltHandleMediumEnumerated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->sltHandleMediumDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->sltHandleMediumEnumerationStart(); break;
        case 4: _t->processActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->processOnItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxMediaComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxMediaComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_VBoxMediaComboBox,
      qt_meta_data_VBoxMediaComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxMediaComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxMediaComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxMediaComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxMediaComboBox))
        return static_cast<void*>(const_cast< VBoxMediaComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int VBoxMediaComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
