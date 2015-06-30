/****************************************************************************
** Meta object code from reading C++ file 'UIMediumManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/medium/UIMediumManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMediumManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMediumManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      42,   30,   16,   16, 0x08,
      74,   30,   16,   16, 0x08,
     106,   16,   16,   16, 0x08,
     140,   30,   16,   16, 0x08,
     175,   16,   16,   16, 0x08,
     210,   16,   16,   16, 0x08,
     226,   16,   16,   16, 0x08,
     244,   16,   16,   16, 0x08,
     262,   16,   16,   16, 0x08,
     281,   16,   16,   16, 0x08,
     326,  310,   16,   16, 0x08,
     395,  389,   16,   16, 0x28,
     441,   16,   16,   16, 0x08,
     473,  464,   16,   16, 0x08,
     506,   16,   16,   16, 0x08,
     541,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMediumManager[] = {
    "UIMediumManager\0\0refreshAll()\0strMediumID\0"
    "sltHandleMediumCreated(QString)\0"
    "sltHandleMediumDeleted(QString)\0"
    "sltHandleMediumEnumerationStart()\0"
    "sltHandleMediumEnumerated(QString)\0"
    "sltHandleMediumEnumerationFinish()\0"
    "sltCopyMedium()\0sltModifyMedium()\0"
    "sltRemoveMedium()\0sltReleaseMedium()\0"
    "sltHandleCurrentTabChanged()\0"
    "pItem,pPrevItem\0"
    "sltHandleCurrentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "pItem\0sltHandleCurrentItemChanged(QTreeWidgetItem*)\0"
    "sltHandleDoubleClick()\0position\0"
    "sltHandleContextMenuCall(QPoint)\0"
    "sltMakeRequestForTableAdjustment()\0"
    "sltPerformTablesAdjustment()\0"
};

void UIMediumManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMediumManager *_t = static_cast<UIMediumManager *>(_o);
        switch (_id) {
        case 0: _t->refreshAll(); break;
        case 1: _t->sltHandleMediumCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->sltHandleMediumDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->sltHandleMediumEnumerationStart(); break;
        case 4: _t->sltHandleMediumEnumerated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sltHandleMediumEnumerationFinish(); break;
        case 6: _t->sltCopyMedium(); break;
        case 7: _t->sltModifyMedium(); break;
        case 8: _t->sltRemoveMedium(); break;
        case 9: _t->sltReleaseMedium(); break;
        case 10: _t->sltHandleCurrentTabChanged(); break;
        case 11: _t->sltHandleCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 12: _t->sltHandleCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->sltHandleDoubleClick(); break;
        case 14: _t->sltHandleContextMenuCall((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 15: _t->sltMakeRequestForTableAdjustment(); break;
        case 16: _t->sltPerformTablesAdjustment(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMediumManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMediumManager::staticMetaObject = {
    { &QIWithRetranslateUI2<QIMainDialog>::staticMetaObject, qt_meta_stringdata_UIMediumManager,
      qt_meta_data_UIMediumManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMediumManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMediumManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMediumManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMediumManager))
        return static_cast<void*>(const_cast< UIMediumManager*>(this));
    if (!strcmp(_clname, "Ui::UIMediumManager"))
        return static_cast< Ui::UIMediumManager*>(const_cast< UIMediumManager*>(this));
    return QIWithRetranslateUI2<QIMainDialog>::qt_metacast(_clname);
}

int UIMediumManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI2<QIMainDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
