/****************************************************************************
** Meta object code from reading C++ file 'UIHostComboEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIHostComboEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIHostComboEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIHostComboEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   18,   18,   18, 0x08,

 // properties: name, type, flags
      84,   65, 0x0019510b,

       0        // eod
};

static const char qt_meta_stringdata_UIHostComboEditor[] = {
    "UIHostComboEditor\0\0pThis\0"
    "sigCommitData(QWidget*)\0sltCommitData()\0"
    "UIHostComboWrapper\0combo\0"
};

void UIHostComboEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIHostComboEditor *_t = static_cast<UIHostComboEditor *>(_o);
        switch (_id) {
        case 0: _t->sigCommitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->sltCommitData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIHostComboEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIHostComboEditor::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UIHostComboEditor,
      qt_meta_data_UIHostComboEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIHostComboEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIHostComboEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIHostComboEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIHostComboEditor))
        return static_cast<void*>(const_cast< UIHostComboEditor*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UIHostComboEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UIHostComboWrapper*>(_v) = combo(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCombo(*reinterpret_cast< UIHostComboWrapper*>(_v)); break;
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
void UIHostComboEditor::sigCommitData(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_UIHostComboEditorPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   25,   25,   25, 0x0a,
      57,   25,   25,   25, 0x0a,
      68,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIHostComboEditorPrivate[] = {
    "UIHostComboEditorPrivate\0\0sigDataChanged()\0"
    "sltDeselect()\0sltClear()\0"
    "sltReleasePendingKeys()\0"
};

void UIHostComboEditorPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIHostComboEditorPrivate *_t = static_cast<UIHostComboEditorPrivate *>(_o);
        switch (_id) {
        case 0: _t->sigDataChanged(); break;
        case 1: _t->sltDeselect(); break;
        case 2: _t->sltClear(); break;
        case 3: _t->sltReleasePendingKeys(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIHostComboEditorPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIHostComboEditorPrivate::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_UIHostComboEditorPrivate,
      qt_meta_data_UIHostComboEditorPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIHostComboEditorPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIHostComboEditorPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIHostComboEditorPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIHostComboEditorPrivate))
        return static_cast<void*>(const_cast< UIHostComboEditorPrivate*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int UIHostComboEditorPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UIHostComboEditorPrivate::sigDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
