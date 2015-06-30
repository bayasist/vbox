/****************************************************************************
** Meta object code from reading C++ file 'UISettingsPage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/UISettingsPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UISettingsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UISettingsPage[] = {

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
      16,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISettingsPage[] = {
    "UISettingsPage\0\0revalidate()\0"
};

void UISettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISettingsPage *_t = static_cast<UISettingsPage *>(_o);
        switch (_id) {
        case 0: _t->revalidate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UISettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISettingsPage::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UISettingsPage,
      qt_meta_data_UISettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISettingsPage))
        return static_cast<void*>(const_cast< UISettingsPage*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UISettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISettingsPageGlobal[] = {

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

static const char qt_meta_stringdata_UISettingsPageGlobal[] = {
    "UISettingsPageGlobal\0"
};

void UISettingsPageGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UISettingsPageGlobal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISettingsPageGlobal::staticMetaObject = {
    { &UISettingsPage::staticMetaObject, qt_meta_stringdata_UISettingsPageGlobal,
      qt_meta_data_UISettingsPageGlobal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISettingsPageGlobal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISettingsPageGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISettingsPageGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISettingsPageGlobal))
        return static_cast<void*>(const_cast< UISettingsPageGlobal*>(this));
    return UISettingsPage::qt_metacast(_clname);
}

int UISettingsPageGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UISettingsPageMachine[] = {

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

static const char qt_meta_stringdata_UISettingsPageMachine[] = {
    "UISettingsPageMachine\0"
};

void UISettingsPageMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UISettingsPageMachine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISettingsPageMachine::staticMetaObject = {
    { &UISettingsPage::staticMetaObject, qt_meta_stringdata_UISettingsPageMachine,
      qt_meta_data_UISettingsPageMachine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISettingsPageMachine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISettingsPageMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISettingsPageMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISettingsPageMachine))
        return static_cast<void*>(const_cast< UISettingsPageMachine*>(this));
    return UISettingsPage::qt_metacast(_clname);
}

int UISettingsPageMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
