/****************************************************************************
** Meta object code from reading C++ file 'UIMachineSettingsSystem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/machine/UIMachineSettingsSystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineSettingsSystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineSettingsSystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      59,   24,   24,   24, 0x08,
     107,   93,   24,   24, 0x08,
     138,   24,   24,   24, 0x08,
     170,   24,   24,   24, 0x08,
     202,   24,   24,   24, 0x08,
     236,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineSettingsSystem[] = {
    "UIMachineSettingsSystem\0\0"
    "sltHandleMemorySizeSliderChange()\0"
    "sltHandleMemorySizeEditorChange()\0"
    "iCurrentIndex\0sltCurrentBootItemChanged(int)\0"
    "sltHandleCPUCountSliderChange()\0"
    "sltHandleCPUCountEditorChange()\0"
    "sltHandleCPUExecCapSliderChange()\0"
    "sltHandleCPUExecCapEditorChange()\0"
};

void UIMachineSettingsSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineSettingsSystem *_t = static_cast<UIMachineSettingsSystem *>(_o);
        switch (_id) {
        case 0: _t->sltHandleMemorySizeSliderChange(); break;
        case 1: _t->sltHandleMemorySizeEditorChange(); break;
        case 2: _t->sltCurrentBootItemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sltHandleCPUCountSliderChange(); break;
        case 4: _t->sltHandleCPUCountEditorChange(); break;
        case 5: _t->sltHandleCPUExecCapSliderChange(); break;
        case 6: _t->sltHandleCPUExecCapEditorChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMachineSettingsSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsSystem::staticMetaObject = {
    { &UISettingsPageMachine::staticMetaObject, qt_meta_stringdata_UIMachineSettingsSystem,
      qt_meta_data_UIMachineSettingsSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsSystem))
        return static_cast<void*>(const_cast< UIMachineSettingsSystem*>(this));
    if (!strcmp(_clname, "Ui::UIMachineSettingsSystem"))
        return static_cast< Ui::UIMachineSettingsSystem*>(const_cast< UIMachineSettingsSystem*>(this));
    return UISettingsPageMachine::qt_metacast(_clname);
}

int UIMachineSettingsSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
