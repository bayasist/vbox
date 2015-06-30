/****************************************************************************
** Meta object code from reading C++ file 'UIPortForwardingTable.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIPortForwardingTable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIPortForwardingTable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPortForwardingTable[] = {

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
      23,   22,   22,   22, 0x08,
      36,   22,   22,   22, 0x08,
      50,   22,   22,   22, 0x08,
      63,   22,   22,   22, 0x08,
      85,   22,   22,   22, 0x08,
     114,  105,   22,   22, 0x08,
     145,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIPortForwardingTable[] = {
    "UIPortForwardingTable\0\0sltAddRule()\0"
    "sltCopyRule()\0sltDelRule()\0"
    "sltTableDataChanged()\0sltCurrentChanged()\0"
    "position\0sltShowTableContexMenu(QPoint)\0"
    "sltAdjustTable()\0"
};

void UIPortForwardingTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPortForwardingTable *_t = static_cast<UIPortForwardingTable *>(_o);
        switch (_id) {
        case 0: _t->sltAddRule(); break;
        case 1: _t->sltCopyRule(); break;
        case 2: _t->sltDelRule(); break;
        case 3: _t->sltTableDataChanged(); break;
        case 4: _t->sltCurrentChanged(); break;
        case 5: _t->sltShowTableContexMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->sltAdjustTable(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIPortForwardingTable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPortForwardingTable::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UIPortForwardingTable,
      qt_meta_data_UIPortForwardingTable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPortForwardingTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPortForwardingTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPortForwardingTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPortForwardingTable))
        return static_cast<void*>(const_cast< UIPortForwardingTable*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UIPortForwardingTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
