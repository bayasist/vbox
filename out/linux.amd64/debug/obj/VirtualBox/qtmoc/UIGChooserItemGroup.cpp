/****************************************************************************
** Meta object code from reading C++ file 'UIGChooserItemGroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/chooser/UIGChooserItemGroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGChooserItemGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGChooserItemGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      40,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   20,   20,   20, 0x08,
      85,   20,   20,   20, 0x08,
     116,  107,   20,   20, 0x08,
     143,   20,   20,   20, 0x08,
     159,   20,   20,   20, 0x08,

 // properties: name, type, flags
     181,  177, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_UIGChooserItemGroup[] = {
    "UIGChooserItemGroup\0\0sigToggleStarted()\0"
    "sigToggleFinished()\0sltNameEditingFinished()\0"
    "sltGroupToggleStart()\0fToggled\0"
    "sltGroupToggleFinish(bool)\0sltIndentRoot()\0"
    "sltUnindentRoot()\0int\0additionalHeight\0"
};

void UIGChooserItemGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGChooserItemGroup *_t = static_cast<UIGChooserItemGroup *>(_o);
        switch (_id) {
        case 0: _t->sigToggleStarted(); break;
        case 1: _t->sigToggleFinished(); break;
        case 2: _t->sltNameEditingFinished(); break;
        case 3: _t->sltGroupToggleStart(); break;
        case 4: _t->sltGroupToggleFinish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sltIndentRoot(); break;
        case 6: _t->sltUnindentRoot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGChooserItemGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGChooserItemGroup::staticMetaObject = {
    { &UIGChooserItem::staticMetaObject, qt_meta_stringdata_UIGChooserItemGroup,
      qt_meta_data_UIGChooserItemGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGChooserItemGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGChooserItemGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGChooserItemGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGChooserItemGroup))
        return static_cast<void*>(const_cast< UIGChooserItemGroup*>(this));
    return UIGChooserItem::qt_metacast(_clname);
}

int UIGChooserItemGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGChooserItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = additionalHeight(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAdditionalHeight(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UIGChooserItemGroup::sigToggleStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIGChooserItemGroup::sigToggleFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_UIGroupRenameEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UIGroupRenameEditor[] = {
    "UIGroupRenameEditor\0\0sigEditingFinished()\0"
    "setFocus()\0"
};

void UIGroupRenameEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGroupRenameEditor *_t = static_cast<UIGroupRenameEditor *>(_o);
        switch (_id) {
        case 0: _t->sigEditingFinished(); break;
        case 1: _t->setFocus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGroupRenameEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGroupRenameEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIGroupRenameEditor,
      qt_meta_data_UIGroupRenameEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGroupRenameEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGroupRenameEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGroupRenameEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGroupRenameEditor))
        return static_cast<void*>(const_cast< UIGroupRenameEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIGroupRenameEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UIGroupRenameEditor::sigEditingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
