/****************************************************************************
** Meta object code from reading C++ file 'UIMachineSettingsSerial.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/machine/UIMachineSettingsSerial.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineSettingsSerial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineSettingsSerial[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   25,   24,   24, 0x08,
      58,   52,   24,   24, 0x08,
      86,   52,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineSettingsSerial[] = {
    "UIMachineSettingsSerial\0\0aOn\0"
    "mGbSerialToggled(bool)\0aText\0"
    "mCbNumberActivated(QString)\0"
    "mCbModeActivated(QString)\0"
};

void UIMachineSettingsSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineSettingsSerial *_t = static_cast<UIMachineSettingsSerial *>(_o);
        switch (_id) {
        case 0: _t->mGbSerialToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->mCbNumberActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mCbModeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineSettingsSerial::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsSerial::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UIMachineSettingsSerial,
      qt_meta_data_UIMachineSettingsSerial, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsSerial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsSerial))
        return static_cast<void*>(const_cast< UIMachineSettingsSerial*>(this));
    if (!strcmp(_clname, "Ui::UIMachineSettingsSerial"))
        return static_cast< Ui::UIMachineSettingsSerial*>(const_cast< UIMachineSettingsSerial*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UIMachineSettingsSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_UIMachineSettingsSerialPage[] = {

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

static const char qt_meta_stringdata_UIMachineSettingsSerialPage[] = {
    "UIMachineSettingsSerialPage\0"
};

void UIMachineSettingsSerialPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIMachineSettingsSerialPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsSerialPage::staticMetaObject = {
    { &UISettingsPageMachine::staticMetaObject, qt_meta_stringdata_UIMachineSettingsSerialPage,
      qt_meta_data_UIMachineSettingsSerialPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsSerialPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsSerialPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsSerialPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsSerialPage))
        return static_cast<void*>(const_cast< UIMachineSettingsSerialPage*>(this));
    return UISettingsPageMachine::qt_metacast(_clname);
}

int UIMachineSettingsSerialPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
