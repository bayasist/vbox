/****************************************************************************
** Meta object code from reading C++ file 'UIGlobalSettingsExtension.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/global/UIGlobalSettingsExtension.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGlobalSettingsExtension.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGlobalSettingsExtension[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   27,   26,   26, 0x08,
      94,   85,   26,   26, 0x08,
     121,   26,   26,   26, 0x08,
     141,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGlobalSettingsExtension[] = {
    "UIGlobalSettingsExtension\0\0pCurrentItem\0"
    "sltHandleCurrentItemChange(QTreeWidgetItem*)\0"
    "position\0sltShowContextMenu(QPoint)\0"
    "sltInstallPackage()\0sltRemovePackage()\0"
};

void UIGlobalSettingsExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGlobalSettingsExtension *_t = static_cast<UIGlobalSettingsExtension *>(_o);
        switch (_id) {
        case 0: _t->sltHandleCurrentItemChange((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->sltShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->sltInstallPackage(); break;
        case 3: _t->sltRemovePackage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGlobalSettingsExtension::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGlobalSettingsExtension::staticMetaObject = {
    { &UISettingsPageGlobal::staticMetaObject, qt_meta_stringdata_UIGlobalSettingsExtension,
      qt_meta_data_UIGlobalSettingsExtension, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGlobalSettingsExtension::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGlobalSettingsExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGlobalSettingsExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGlobalSettingsExtension))
        return static_cast<void*>(const_cast< UIGlobalSettingsExtension*>(this));
    if (!strcmp(_clname, "Ui::UIGlobalSettingsExtension"))
        return static_cast< Ui::UIGlobalSettingsExtension*>(const_cast< UIGlobalSettingsExtension*>(this));
    return UISettingsPageGlobal::qt_metacast(_clname);
}

int UIGlobalSettingsExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UISettingsPageGlobal::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
