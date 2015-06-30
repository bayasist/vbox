/****************************************************************************
** Meta object code from reading C++ file 'UIMachineSettingsSF.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/machine/UIMachineSettingsSF.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineSettingsSF.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineSettingsSF[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      36,   20,   20,   20, 0x08,
      51,   20,   20,   20, 0x08,
      79,   66,   20,   20, 0x08,
     125,  119,   20,   20, 0x08,
     167,  162,   20,   20, 0x08,
     191,   20,   20,   20, 0x08,
     204,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineSettingsSF[] = {
    "UIMachineSettingsSF\0\0addTriggered()\0"
    "edtTriggered()\0delTriggered()\0"
    "aCurrentItem\0processCurrentChanged(QTreeWidgetItem*)\0"
    "aItem\0processDoubleClick(QTreeWidgetItem*)\0"
    "aPos\0showContextMenu(QPoint)\0adjustList()\0"
    "adjustFields()\0"
};

void UIMachineSettingsSF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineSettingsSF *_t = static_cast<UIMachineSettingsSF *>(_o);
        switch (_id) {
        case 0: _t->addTriggered(); break;
        case 1: _t->edtTriggered(); break;
        case 2: _t->delTriggered(); break;
        case 3: _t->processCurrentChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->processDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->adjustList(); break;
        case 7: _t->adjustFields(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineSettingsSF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsSF::staticMetaObject = {
    { &UISettingsPageMachine::staticMetaObject, qt_meta_stringdata_UIMachineSettingsSF,
      qt_meta_data_UIMachineSettingsSF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsSF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsSF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsSF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsSF))
        return static_cast<void*>(const_cast< UIMachineSettingsSF*>(this));
    if (!strcmp(_clname, "Ui::UIMachineSettingsSF"))
        return static_cast< Ui::UIMachineSettingsSF*>(const_cast< UIMachineSettingsSF*>(this));
    return UISettingsPageMachine::qt_metacast(_clname);
}

int UIMachineSettingsSF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
