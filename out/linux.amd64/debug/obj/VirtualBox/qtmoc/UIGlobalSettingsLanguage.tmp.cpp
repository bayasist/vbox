/****************************************************************************
** Meta object code from reading C++ file 'UIGlobalSettingsLanguage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/global/UIGlobalSettingsLanguage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGlobalSettingsLanguage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGlobalSettingsLanguage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   26,   25,   25, 0x08,
      98,   92,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGlobalSettingsLanguage[] = {
    "UIGlobalSettingsLanguage\0\0pItem,pPainter\0"
    "sltLanguageItemPainted(QTreeWidgetItem*,QPainter*)\0"
    "pItem\0sltCurrentLanguageChanged(QTreeWidgetItem*)\0"
};

void UIGlobalSettingsLanguage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGlobalSettingsLanguage *_t = static_cast<UIGlobalSettingsLanguage *>(_o);
        switch (_id) {
        case 0: _t->sltLanguageItemPainted((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 1: _t->sltCurrentLanguageChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGlobalSettingsLanguage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGlobalSettingsLanguage::staticMetaObject = {
    { &UISettingsPageGlobal::staticMetaObject, qt_meta_stringdata_UIGlobalSettingsLanguage,
      qt_meta_data_UIGlobalSettingsLanguage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGlobalSettingsLanguage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGlobalSettingsLanguage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGlobalSettingsLanguage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGlobalSettingsLanguage))
        return static_cast<void*>(const_cast< UIGlobalSettingsLanguage*>(this));
    if (!strcmp(_clname, "Ui::UIGlobalSettingsLanguage"))
        return static_cast< Ui::UIGlobalSettingsLanguage*>(const_cast< UIGlobalSettingsLanguage*>(this));
    return UISettingsPageGlobal::qt_metacast(_clname);
}

int UIGlobalSettingsLanguage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageGlobal::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
