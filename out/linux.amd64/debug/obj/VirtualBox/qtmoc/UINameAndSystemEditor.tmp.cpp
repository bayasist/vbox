/****************************************************************************
** Meta object code from reading C++ file 'UINameAndSystemEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UINameAndSystemEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UINameAndSystemEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UINameAndSystemEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   23,   22,   22, 0x05,
      58,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   77,   22,   22, 0x08,
     106,   77,   22,   22, 0x08,

 // properties: name, type, flags
     134,  126, 0x0a095103,
     152,  139, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_UINameAndSystemEditor[] = {
    "UINameAndSystemEditor\0\0strNewName\0"
    "sigNameChanged(QString)\0sigOsTypeChanged()\0"
    "iIndex\0sltFamilyChanged(int)\0"
    "sltTypeChanged(int)\0QString\0name\0"
    "CGuestOSType\0type\0"
};

void UINameAndSystemEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UINameAndSystemEditor *_t = static_cast<UINameAndSystemEditor *>(_o);
        switch (_id) {
        case 0: _t->sigNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sigOsTypeChanged(); break;
        case 2: _t->sltFamilyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sltTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UINameAndSystemEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UINameAndSystemEditor::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UINameAndSystemEditor,
      qt_meta_data_UINameAndSystemEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UINameAndSystemEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UINameAndSystemEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UINameAndSystemEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UINameAndSystemEditor))
        return static_cast<void*>(const_cast< UINameAndSystemEditor*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UINameAndSystemEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< CGuestOSType*>(_v) = type(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setType(*reinterpret_cast< CGuestOSType*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UINameAndSystemEditor::sigNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UINameAndSystemEditor::sigOsTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
