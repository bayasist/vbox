/****************************************************************************
** Meta object code from reading C++ file 'UILineTextEdit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UILineTextEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UILineTextEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UITextEditor[] = {

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
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UITextEditor[] = {
    "UITextEditor\0\0open()\0"
};

void UITextEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UITextEditor *_t = static_cast<UITextEditor *>(_o);
        switch (_id) {
        case 0: _t->open(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UITextEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UITextEditor::staticMetaObject = {
    { &QIWithRetranslateUI<QIDialog>::staticMetaObject, qt_meta_stringdata_UITextEditor,
      qt_meta_data_UITextEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UITextEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UITextEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UITextEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UITextEditor))
        return static_cast<void*>(const_cast< UITextEditor*>(this));
    return QIWithRetranslateUI<QIDialog>::qt_metacast(_clname);
}

int UITextEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QIDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UILineTextEdit[] = {

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
      22,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UILineTextEdit[] = {
    "UILineTextEdit\0\0pThis\0sigFinished(QWidget*)\0"
    "edit()\0"
};

void UILineTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UILineTextEdit *_t = static_cast<UILineTextEdit *>(_o);
        switch (_id) {
        case 0: _t->sigFinished((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->edit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UILineTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UILineTextEdit::staticMetaObject = {
    { &QIWithRetranslateUI<QPushButton>::staticMetaObject, qt_meta_stringdata_UILineTextEdit,
      qt_meta_data_UILineTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UILineTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UILineTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UILineTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UILineTextEdit))
        return static_cast<void*>(const_cast< UILineTextEdit*>(this));
    return QIWithRetranslateUI<QPushButton>::qt_metacast(_clname);
}

int UILineTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QPushButton>::qt_metacall(_c, _id, _a);
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
void UILineTextEdit::sigFinished(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE