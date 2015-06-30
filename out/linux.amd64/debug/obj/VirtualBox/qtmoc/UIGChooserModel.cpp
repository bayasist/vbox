/****************************************************************************
** Meta object code from reading C++ file 'UIGChooserModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/chooser/UIGChooserModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGChooserModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGChooserModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   17,   16,   16, 0x05,
      64,   16,   16,   16, 0x05,
      88,   16,   16,   16, 0x05,
     121,  110,   16,   16, 0x05,
     180,  154,   16,   16, 0x05,
     247,  220,   16,   16, 0x05,
     288,   16,   16,   16, 0x05,
     308,   16,   16,   16, 0x05,
     327,   16,   16,   16, 0x05,
     347,   16,   16,   16, 0x05,
     369,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     410,  398,   16,   16, 0x08,
     462,  456,   16,   16, 0x08,
     511,  493,   16,   16, 0x08,
     546,  398,   16,   16, 0x08,
     612,  592,   16,   16, 0x08,
     648,   16,   16,   16, 0x08,
     671,   16,   16,   16, 0x08,
     695,   16,   16,   16, 0x08,
     724,   16,   16,   16, 0x08,
     754,   16,   16,   16, 0x08,
     775,   16,   16,   16, 0x08,
     794,   16,   16,   16, 0x08,
     809,   16,   16,   16, 0x08,
     835,   16,   16,   16, 0x08,
     857,   16,   16,   16, 0x08,
     884,  456,   16,   16, 0x08,
     910,   16,   16,   16, 0x08,
     931,   16,   16,   16, 0x08,
     957,   16,   16,   16, 0x08,
     984,   16,   16,   16, 0x08,
    1004,   16,   16,   16, 0x08,
    1044, 1036,   16,   16, 0x08,
    1071,   16,   16,   16, 0x08,
    1093,   16,   16,   16, 0x08,
    1115,   16,   16,   16, 0x08,
    1149,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGChooserModel[] = {
    "UIGChooserModel\0\0strStatusMessage\0"
    "sigShowStatusMessage(QString)\0"
    "sigClearStatusMessage()\0sigSelectionChanged()\0"
    "pFocusItem\0sigFocusChanged(UIGChooserItem*)\0"
    "iRootItemMinimumWidthHint\0"
    "sigRootItemMinimumWidthHintChanged(int)\0"
    "iRootItemMinimumHeightHint\0"
    "sigRootItemMinimumHeightHintChanged(int)\0"
    "sigSlidingStarted()\0sigToggleStarted()\0"
    "sigToggleFinished()\0sigStartGroupSaving()\0"
    "sigGroupSavingStateChanged()\0strId,state\0"
    "sltMachineStateChanged(QString,KMachineState)\0"
    "strId\0sltMachineDataChanged(QString)\0"
    "strId,fRegistered\0sltMachineRegistered(QString,bool)\0"
    "sltSessionStateChanged(QString,KSessionState)\0"
    "strId,strSnapshotId\0"
    "sltSnapshotChanged(QString,QString)\0"
    "sltHandleViewResized()\0sltFocusItemDestroyed()\0"
    "sltLeftRootSlidingProgress()\0"
    "sltRightRootSlidingProgress()\0"
    "sltSlidingComplete()\0sltEditGroupName()\0"
    "sltSortGroup()\0sltUngroupSelectedGroup()\0"
    "sltCreateNewMachine()\0sltGroupSelectedMachines()\0"
    "sltReloadMachine(QString)\0"
    "sltSortParentGroup()\0sltPerformRefreshAction()\0"
    "sltRemoveSelectedMachine()\0"
    "sltStartScrolling()\0sltCurrentDragObjectDestroyed()\0"
    "pAction\0sltActionHovered(QAction*)\0"
    "sltEraseLookupTimer()\0sltGroupSavingStart()\0"
    "sltGroupDefinitionsSaveComplete()\0"
    "sltGroupOrdersSaveComplete()\0"
};

void UIGChooserModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGChooserModel *_t = static_cast<UIGChooserModel *>(_o);
        switch (_id) {
        case 0: _t->sigShowStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sigClearStatusMessage(); break;
        case 2: _t->sigSelectionChanged(); break;
        case 3: _t->sigFocusChanged((*reinterpret_cast< UIGChooserItem*(*)>(_a[1]))); break;
        case 4: _t->sigRootItemMinimumWidthHintChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sigRootItemMinimumHeightHintChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sigSlidingStarted(); break;
        case 7: _t->sigToggleStarted(); break;
        case 8: _t->sigToggleFinished(); break;
        case 9: _t->sigStartGroupSaving(); break;
        case 10: _t->sigGroupSavingStateChanged(); break;
        case 11: _t->sltMachineStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KMachineState(*)>(_a[2]))); break;
        case 12: _t->sltMachineDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->sltMachineRegistered((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->sltSessionStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< KSessionState(*)>(_a[2]))); break;
        case 15: _t->sltSnapshotChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->sltHandleViewResized(); break;
        case 17: _t->sltFocusItemDestroyed(); break;
        case 18: _t->sltLeftRootSlidingProgress(); break;
        case 19: _t->sltRightRootSlidingProgress(); break;
        case 20: _t->sltSlidingComplete(); break;
        case 21: _t->sltEditGroupName(); break;
        case 22: _t->sltSortGroup(); break;
        case 23: _t->sltUngroupSelectedGroup(); break;
        case 24: _t->sltCreateNewMachine(); break;
        case 25: _t->sltGroupSelectedMachines(); break;
        case 26: _t->sltReloadMachine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->sltSortParentGroup(); break;
        case 28: _t->sltPerformRefreshAction(); break;
        case 29: _t->sltRemoveSelectedMachine(); break;
        case 30: _t->sltStartScrolling(); break;
        case 31: _t->sltCurrentDragObjectDestroyed(); break;
        case 32: _t->sltActionHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 33: _t->sltEraseLookupTimer(); break;
        case 34: _t->sltGroupSavingStart(); break;
        case 35: _t->sltGroupDefinitionsSaveComplete(); break;
        case 36: _t->sltGroupOrdersSaveComplete(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGChooserModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGChooserModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIGChooserModel,
      qt_meta_data_UIGChooserModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGChooserModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGChooserModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGChooserModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGChooserModel))
        return static_cast<void*>(const_cast< UIGChooserModel*>(this));
    return QObject::qt_metacast(_clname);
}

int UIGChooserModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void UIGChooserModel::sigShowStatusMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIGChooserModel::sigClearStatusMessage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIGChooserModel::sigSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIGChooserModel::sigFocusChanged(UIGChooserItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UIGChooserModel::sigRootItemMinimumWidthHintChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UIGChooserModel::sigRootItemMinimumHeightHintChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UIGChooserModel::sigSlidingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void UIGChooserModel::sigToggleStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void UIGChooserModel::sigToggleFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void UIGChooserModel::sigStartGroupSaving()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void UIGChooserModel::sigGroupSavingStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}
static const uint qt_meta_data_UIGroupDefinitionSaveThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   29,   28,   28, 0x05,
      54,   28,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIGroupDefinitionSaveThread[] = {
    "UIGroupDefinitionSaveThread\0\0strId\0"
    "sigReload(QString)\0sigComplete()\0"
};

void UIGroupDefinitionSaveThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGroupDefinitionSaveThread *_t = static_cast<UIGroupDefinitionSaveThread *>(_o);
        switch (_id) {
        case 0: _t->sigReload((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sigComplete(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGroupDefinitionSaveThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGroupDefinitionSaveThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UIGroupDefinitionSaveThread,
      qt_meta_data_UIGroupDefinitionSaveThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGroupDefinitionSaveThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGroupDefinitionSaveThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGroupDefinitionSaveThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGroupDefinitionSaveThread))
        return static_cast<void*>(const_cast< UIGroupDefinitionSaveThread*>(this));
    return QThread::qt_metacast(_clname);
}

int UIGroupDefinitionSaveThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UIGroupDefinitionSaveThread::sigReload(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIGroupDefinitionSaveThread::sigComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_UIGroupOrderSaveThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIGroupOrderSaveThread[] = {
    "UIGroupOrderSaveThread\0\0sigComplete()\0"
};

void UIGroupOrderSaveThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGroupOrderSaveThread *_t = static_cast<UIGroupOrderSaveThread *>(_o);
        switch (_id) {
        case 0: _t->sigComplete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGroupOrderSaveThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGroupOrderSaveThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UIGroupOrderSaveThread,
      qt_meta_data_UIGroupOrderSaveThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGroupOrderSaveThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGroupOrderSaveThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGroupOrderSaveThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGroupOrderSaveThread))
        return static_cast<void*>(const_cast< UIGroupOrderSaveThread*>(this));
    return QThread::qt_metacast(_clname);
}

int UIGroupOrderSaveThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UIGroupOrderSaveThread::sigComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
