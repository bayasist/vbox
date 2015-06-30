/****************************************************************************
** Meta object code from reading C++ file 'UIMachineSettingsDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/machine/UIMachineSettingsDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineSettingsDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineSettingsDisplay[] = {

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
      26,   25,   25,   25, 0x08,
      65,   25,   25,   25, 0x08,
     104,   25,   25,   25, 0x08,
     144,   25,   25,   25, 0x08,
     184,   25,   25,   25, 0x08,
     222,   25,   25,   25, 0x08,
     269,   25,   25,   25, 0x08,
     315,   25,   25,   25, 0x08,
     362,   25,   25,   25, 0x08,
     407,   25,   25,   25, 0x08,
     452,   25,   25,   25, 0x08,
     495,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineSettingsDisplay[] = {
    "UIMachineSettingsDisplay\0\0"
    "sltHandleVideoMemorySizeSliderChange()\0"
    "sltHandleVideoMemorySizeEditorChange()\0"
    "sltHandleVideoScreenCountSliderChange()\0"
    "sltHandleVideoScreenCountEditorChange()\0"
    "sltHandleVideoCaptureCheckboxToggle()\0"
    "sltHandleVideoCaptureFrameSizeComboboxChange()\0"
    "sltHandleVideoCaptureFrameWidthEditorChange()\0"
    "sltHandleVideoCaptureFrameHeightEditorChange()\0"
    "sltHandleVideoCaptureFrameRateSliderChange()\0"
    "sltHandleVideoCaptureFrameRateEditorChange()\0"
    "sltHandleVideoCaptureQualitySliderChange()\0"
    "sltHandleVideoCaptureBitRateEditorChange()\0"
};

void UIMachineSettingsDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineSettingsDisplay *_t = static_cast<UIMachineSettingsDisplay *>(_o);
        switch (_id) {
        case 0: _t->sltHandleVideoMemorySizeSliderChange(); break;
        case 1: _t->sltHandleVideoMemorySizeEditorChange(); break;
        case 2: _t->sltHandleVideoScreenCountSliderChange(); break;
        case 3: _t->sltHandleVideoScreenCountEditorChange(); break;
        case 4: _t->sltHandleVideoCaptureCheckboxToggle(); break;
        case 5: _t->sltHandleVideoCaptureFrameSizeComboboxChange(); break;
        case 6: _t->sltHandleVideoCaptureFrameWidthEditorChange(); break;
        case 7: _t->sltHandleVideoCaptureFrameHeightEditorChange(); break;
        case 8: _t->sltHandleVideoCaptureFrameRateSliderChange(); break;
        case 9: _t->sltHandleVideoCaptureFrameRateEditorChange(); break;
        case 10: _t->sltHandleVideoCaptureQualitySliderChange(); break;
        case 11: _t->sltHandleVideoCaptureBitRateEditorChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIMachineSettingsDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsDisplay::staticMetaObject = {
    { &UISettingsPageMachine::staticMetaObject, qt_meta_stringdata_UIMachineSettingsDisplay,
      qt_meta_data_UIMachineSettingsDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsDisplay))
        return static_cast<void*>(const_cast< UIMachineSettingsDisplay*>(this));
    if (!strcmp(_clname, "Ui::UIMachineSettingsDisplay"))
        return static_cast< Ui::UIMachineSettingsDisplay*>(const_cast< UIMachineSettingsDisplay*>(this));
    return UISettingsPageMachine::qt_metacast(_clname);
}

int UIMachineSettingsDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
