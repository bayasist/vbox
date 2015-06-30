/****************************************************************************
** Meta object code from reading C++ file 'VBoxDbgConsole.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Debugger/VBoxDbgConsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxDbgConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxDbgConsoleOutput[] = {

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
      22,   21,   21,   21, 0x08,
      45,   21,   21,   21, 0x08,
      68,   21,   21,   21, 0x08,
      85,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxDbgConsoleOutput[] = {
    "VBoxDbgConsoleOutput\0\0setColorGreenOnBlack()\0"
    "setColorBlackOnWhite()\0setFontCourier()\0"
    "setFontMonospace()\0"
};

void VBoxDbgConsoleOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxDbgConsoleOutput *_t = static_cast<VBoxDbgConsoleOutput *>(_o);
        switch (_id) {
        case 0: _t->setColorGreenOnBlack(); break;
        case 1: _t->setColorBlackOnWhite(); break;
        case 2: _t->setFontCourier(); break;
        case 3: _t->setFontMonospace(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VBoxDbgConsoleOutput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxDbgConsoleOutput::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_VBoxDbgConsoleOutput,
      qt_meta_data_VBoxDbgConsoleOutput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxDbgConsoleOutput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxDbgConsoleOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxDbgConsoleOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxDbgConsoleOutput))
        return static_cast<void*>(const_cast< VBoxDbgConsoleOutput*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int VBoxDbgConsoleOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_VBoxDbgConsoleInput[] = {

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
      30,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxDbgConsoleInput[] = {
    "VBoxDbgConsoleInput\0\0rCommand\0"
    "commandSubmitted(QString)\0returnPressed()\0"
};

void VBoxDbgConsoleInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxDbgConsoleInput *_t = static_cast<VBoxDbgConsoleInput *>(_o);
        switch (_id) {
        case 0: _t->commandSubmitted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxDbgConsoleInput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxDbgConsoleInput::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_VBoxDbgConsoleInput,
      qt_meta_data_VBoxDbgConsoleInput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxDbgConsoleInput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxDbgConsoleInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxDbgConsoleInput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxDbgConsoleInput))
        return static_cast<void*>(const_cast< VBoxDbgConsoleInput*>(this));
    return QComboBox::qt_metacast(_clname);
}

int VBoxDbgConsoleInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void VBoxDbgConsoleInput::commandSubmitted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_VBoxDbgConsole[] = {

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
      25,   16,   15,   15, 0x09,
      51,   15,   15,   15, 0x09,
      66,   15,   15,   15, 0x09,
      84,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VBoxDbgConsole[] = {
    "VBoxDbgConsole\0\0rCommand\0"
    "commandSubmitted(QString)\0updateOutput()\0"
    "actFocusToInput()\0actFocusToOutput()\0"
};

void VBoxDbgConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxDbgConsole *_t = static_cast<VBoxDbgConsole *>(_o);
        switch (_id) {
        case 0: _t->commandSubmitted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateOutput(); break;
        case 2: _t->actFocusToInput(); break;
        case 3: _t->actFocusToOutput(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxDbgConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxDbgConsole::staticMetaObject = {
    { &VBoxDbgBaseWindow::staticMetaObject, qt_meta_stringdata_VBoxDbgConsole,
      qt_meta_data_VBoxDbgConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxDbgConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxDbgConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxDbgConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxDbgConsole))
        return static_cast<void*>(const_cast< VBoxDbgConsole*>(this));
    return VBoxDbgBaseWindow::qt_metacast(_clname);
}

int VBoxDbgConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VBoxDbgBaseWindow::qt_metacall(_c, _id, _a);
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
