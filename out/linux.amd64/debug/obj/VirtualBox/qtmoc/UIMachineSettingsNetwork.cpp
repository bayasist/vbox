/****************************************************************************
** Meta object code from reading C++ file 'UIMachineSettingsNetwork.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/machine/UIMachineSettingsNetwork.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMachineSettingsNetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMachineSettingsNetwork[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   25,   25,   25, 0x08,
      75,   25,   25,   25, 0x08,
     107,   25,   25,   25, 0x08,
     140,   25,   25,   25, 0x08,
     177,   25,   25,   25, 0x08,
     194,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineSettingsNetwork[] = {
    "UIMachineSettingsNetwork\0\0sigTabUpdated()\0"
    "sltHandleAdapterActivityChange()\0"
    "sltHandleAttachmentTypeChange()\0"
    "sltHandleAlternativeNameChange()\0"
    "sltHandleAdvancedButtonStateChange()\0"
    "sltGenerateMac()\0sltOpenPortForwardingDlg()\0"
};

void UIMachineSettingsNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineSettingsNetwork *_t = static_cast<UIMachineSettingsNetwork *>(_o);
        switch (_id) {
        case 0: _t->sigTabUpdated(); break;
        case 1: _t->sltHandleAdapterActivityChange(); break;
        case 2: _t->sltHandleAttachmentTypeChange(); break;
        case 3: _t->sltHandleAlternativeNameChange(); break;
        case 4: _t->sltHandleAdvancedButtonStateChange(); break;
        case 5: _t->sltGenerateMac(); break;
        case 6: _t->sltOpenPortForwardingDlg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIMachineSettingsNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsNetwork::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UIMachineSettingsNetwork,
      qt_meta_data_UIMachineSettingsNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsNetwork))
        return static_cast<void*>(const_cast< UIMachineSettingsNetwork*>(this));
    if (!strcmp(_clname, "Ui::UIMachineSettingsNetwork"))
        return static_cast< Ui::UIMachineSettingsNetwork*>(const_cast< UIMachineSettingsNetwork*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UIMachineSettingsNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UIMachineSettingsNetwork::sigTabUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UIMachineSettingsNetworkPage[] = {

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
      30,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMachineSettingsNetworkPage[] = {
    "UIMachineSettingsNetworkPage\0\0"
    "sltHandleUpdatedTab()\0"
};

void UIMachineSettingsNetworkPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMachineSettingsNetworkPage *_t = static_cast<UIMachineSettingsNetworkPage *>(_o);
        switch (_id) {
        case 0: _t->sltHandleUpdatedTab(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIMachineSettingsNetworkPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMachineSettingsNetworkPage::staticMetaObject = {
    { &UISettingsPageMachine::staticMetaObject, qt_meta_stringdata_UIMachineSettingsNetworkPage,
      qt_meta_data_UIMachineSettingsNetworkPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMachineSettingsNetworkPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMachineSettingsNetworkPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMachineSettingsNetworkPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMachineSettingsNetworkPage))
        return static_cast<void*>(const_cast< UIMachineSettingsNetworkPage*>(this));
    return UISettingsPageMachine::qt_metacast(_clname);
}

int UIMachineSettingsNetworkPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
