/****************************************************************************
** Meta object code from reading C++ file 'UIMachineSettingsUSB.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/machine/UIMachineSettingsUSB.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineSettingsUSB.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineSettingsUSB[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   22,   21,   21, 0x08,
      61,   55,   21,   21, 0x08,
      94,   21,   21,   21, 0x28,
     111,   21,   21,   21, 0x08,
     124,   21,   21,   21, 0x08,
     137,   21,   21,   21, 0x08,
     158,  150,   21,   21, 0x08,
     181,   21,   21,   21, 0x08,
     194,   21,   21,   21, 0x08,
     207,   21,   21,   21, 0x08,
     224,  220,   21,   21, 0x08,
     261,  248,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineSettingsUSB[] = {
    "UIMachineSettingsUSB\0\0fEnabled\0"
    "usbAdapterToggled(bool)\0aItem\0"
    "currentChanged(QTreeWidgetItem*)\0"
    "currentChanged()\0newClicked()\0"
    "addClicked()\0edtClicked()\0aAction\0"
    "addConfirmed(QAction*)\0delClicked()\0"
    "mupClicked()\0mdnClicked()\0pos\0"
    "showContextMenu(QPoint)\0pChangedItem\0"
    "sltUpdateActivityState(QTreeWidgetItem*)\0"
};

void UIMachineSettingsUSB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineSettingsUSB *_t = static_cast<UIMachineSettingsUSB *>(_o);
        switch (_id) {
        case 0: _t->usbAdapterToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->currentChanged(); break;
        case 3: _t->newClicked(); break;
        case 4: _t->addClicked(); break;
        case 5: _t->edtClicked(); break;
        case 6: _t->addConfirmed((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->delClicked(); break;
        case 8: _t->mupClicked(); break;
        case 9: _t->mdnClicked(); break;
        case 10: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->sltUpdateActivityState((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineSettingsUSB::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsUSB::staticMetaObject = {
    { &UISettingsPageMachine::staticMetaObject, qt_meta_stringdata_UIMachineSettingsUSB,
      qt_meta_data_UIMachineSettingsUSB, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsUSB::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsUSB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsUSB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsUSB))
        return static_cast<void*>(const_cast< UIMachineSettingsUSB*>(this));
    if (!strcmp(_clname, "Ui::UIMachineSettingsUSB"))
        return static_cast< Ui::UIMachineSettingsUSB*>(const_cast< UIMachineSettingsUSB*>(this));
    return UISettingsPageMachine::qt_metacast(_clname);
}

int UIMachineSettingsUSB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
