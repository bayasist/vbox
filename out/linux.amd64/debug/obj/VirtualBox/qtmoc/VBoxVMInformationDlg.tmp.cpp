/****************************************************************************
** Meta object code from reading C++ file 'VBoxVMInformationDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/VBoxVMInformationDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxVMInformationDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxVMInformationDlg[] = {

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
      22,   21,   21,   21, 0x08,
      38,   21,   21,   21, 0x08,
      65,   58,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxVMInformationDlg[] = {
    "VBoxVMInformationDlg\0\0updateDetails()\0"
    "processStatistics()\0aIndex\0"
    "onPageChanged(int)\0"
};

void VBoxVMInformationDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxVMInformationDlg *_t = static_cast<VBoxVMInformationDlg *>(_o);
        switch (_id) {
        case 0: _t->updateDetails(); break;
        case 1: _t->processStatistics(); break;
        case 2: _t->onPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxVMInformationDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxVMInformationDlg::staticMetaObject = {
    { &QIWithRetranslateUI2<QIMainDialog>::staticMetaObject, qt_meta_stringdata_VBoxVMInformationDlg,
      qt_meta_data_VBoxVMInformationDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxVMInformationDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxVMInformationDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxVMInformationDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxVMInformationDlg))
        return static_cast<void*>(const_cast< VBoxVMInformationDlg*>(this));
    if (!strcmp(_clname, "Ui::VBoxVMInformationDlg"))
        return static_cast< Ui::VBoxVMInformationDlg*>(const_cast< VBoxVMInformationDlg*>(this));
    return QIWithRetranslateUI2<QIMainDialog>::qt_metacast(_clname);
}

int VBoxVMInformationDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI2<QIMainDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
