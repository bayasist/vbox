/****************************************************************************
** Meta object code from reading C++ file 'UIHotKeyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIHotKeyEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIHotKeyEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIHotKeyEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   15,   15,   15, 0x08,
      57,   15,   15,   15, 0x08,

 // properties: name, type, flags
      77,   68, 0x0019510b,

       0        // eod
};

static const char qt_meta_stringdata_UIHotKeyEditor[] = {
    "UIHotKeyEditor\0\0pThis\0sigCommitData(QWidget*)\0"
    "sltReset()\0sltClear()\0UIHotKey\0hotKey\0"
};

void UIHotKeyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIHotKeyEditor *_t = static_cast<UIHotKeyEditor *>(_o);
        switch (_id) {
        case 0: _t->sigCommitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->sltReset(); break;
        case 2: _t->sltClear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIHotKeyEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIHotKeyEditor::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UIHotKeyEditor,
      qt_meta_data_UIHotKeyEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIHotKeyEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIHotKeyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIHotKeyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIHotKeyEditor))
        return static_cast<void*>(const_cast< UIHotKeyEditor*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UIHotKeyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UIHotKey*>(_v) = hotKey(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHotKey(*reinterpret_cast< UIHotKey*>(_v)); break;
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
void UIHotKeyEditor::sigCommitData(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
