/****************************************************************************
** Meta object code from reading C++ file 'UISettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/settings/UISettingsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UISettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UISettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x09,
      46,   17,   17,   17, 0x09,
      62,   17,   17,   17, 0x09,
      77,   17,   17,   17, 0x09,
     103,   17,   17,   17, 0x09,
     139,  128,   17,   17, 0x08,
     181,  128,   17,   17, 0x08,
     227,  128,   17,   17, 0x08,
     285,  275,   17,   17, 0x08,
     310,   17,   17,   17, 0x28,
     331,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UISettingsDialog[] = {
    "UISettingsDialog\0\0cId\0sltCategoryChanged(int)\0"
    "sltMarkLoaded()\0sltMarkSaved()\0"
    "sltHandleProcessStarted()\0"
    "sltHandlePageProcessed()\0pValidator\0"
    "sltHandleValidityChange(UIPageValidator*)\0"
    "sltHandleWarningPaneHovered(UIPageValidator*)\0"
    "sltHandleWarningPaneUnhovered(UIPageValidator*)\0"
    "fGotFocus\0sltUpdateWhatsThis(bool)\0"
    "sltUpdateWhatsThis()\0reject()\0"
};

void UISettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISettingsDialog *_t = static_cast<UISettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->sltCategoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sltMarkLoaded(); break;
        case 2: _t->sltMarkSaved(); break;
        case 3: _t->sltHandleProcessStarted(); break;
        case 4: _t->sltHandlePageProcessed(); break;
        case 5: _t->sltHandleValidityChange((*reinterpret_cast< UIPageValidator*(*)>(_a[1]))); break;
        case 6: _t->sltHandleWarningPaneHovered((*reinterpret_cast< UIPageValidator*(*)>(_a[1]))); break;
        case 7: _t->sltHandleWarningPaneUnhovered((*reinterpret_cast< UIPageValidator*(*)>(_a[1]))); break;
        case 8: _t->sltUpdateWhatsThis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->sltUpdateWhatsThis(); break;
        case 10: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISettingsDialog::staticMetaObject = {
    { &QIWithRetranslateUI<QIMainDialog>::staticMetaObject, qt_meta_stringdata_UISettingsDialog,
      qt_meta_data_UISettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISettingsDialog))
        return static_cast<void*>(const_cast< UISettingsDialog*>(this));
    if (!strcmp(_clname, "Ui::UISettingsDialog"))
        return static_cast< Ui::UISettingsDialog*>(const_cast< UISettingsDialog*>(this));
    return QIWithRetranslateUI<QIMainDialog>::qt_metacast(_clname);
}

int UISettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QIMainDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
