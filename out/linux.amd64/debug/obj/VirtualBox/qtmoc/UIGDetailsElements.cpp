/****************************************************************************
** Meta object code from reading C++ file 'UIGDetailsElements.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/details/UIGDetailsElements.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGDetailsElements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGDetailsUpdateThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   24,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetailsUpdateThread[] = {
    "UIGDetailsUpdateThread\0\0text\0"
    "sigComplete(UITextTable)\0"
};

void UIGDetailsUpdateThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetailsUpdateThread *_t = static_cast<UIGDetailsUpdateThread *>(_o);
        switch (_id) {
        case 0: _t->sigComplete((*reinterpret_cast< const UITextTable(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetailsUpdateThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThread,
      qt_meta_data_UIGDetailsUpdateThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThread))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThread*>(this));
    return QThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UIGDetailsUpdateThread::sigComplete(const UITextTable & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_UIGDetailsElementInterface[] = {

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
      36,   28,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIGDetailsElementInterface[] = {
    "UIGDetailsElementInterface\0\0newText\0"
    "sltUpdateAppearanceFinished(UITextTable)\0"
};

void UIGDetailsElementInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGDetailsElementInterface *_t = static_cast<UIGDetailsElementInterface *>(_o);
        switch (_id) {
        case 0: _t->sltUpdateAppearanceFinished((*reinterpret_cast< const UITextTable(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIGDetailsElementInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementInterface::staticMetaObject = {
    { &UIGDetailsElement::staticMetaObject, qt_meta_stringdata_UIGDetailsElementInterface,
      qt_meta_data_UIGDetailsElementInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementInterface))
        return static_cast<void*>(const_cast< UIGDetailsElementInterface*>(this));
    return UIGDetailsElement::qt_metacast(_clname);
}

int UIGDetailsElementInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadGeneral[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadGeneral[] = {
    "UIGDetailsUpdateThreadGeneral\0"
};

void UIGDetailsUpdateThreadGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadGeneral::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadGeneral::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadGeneral,
      qt_meta_data_UIGDetailsUpdateThreadGeneral, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadGeneral::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadGeneral))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadGeneral*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementGeneral[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementGeneral[] = {
    "UIGDetailsElementGeneral\0"
};

void UIGDetailsElementGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementGeneral::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementGeneral::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementGeneral,
      qt_meta_data_UIGDetailsElementGeneral, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementGeneral::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementGeneral))
        return static_cast<void*>(const_cast< UIGDetailsElementGeneral*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementPreview[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementPreview[] = {
    "UIGDetailsElementPreview\0"
};

void UIGDetailsElementPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementPreview::staticMetaObject = {
    { &UIGDetailsElement::staticMetaObject, qt_meta_stringdata_UIGDetailsElementPreview,
      qt_meta_data_UIGDetailsElementPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementPreview))
        return static_cast<void*>(const_cast< UIGDetailsElementPreview*>(this));
    return UIGDetailsElement::qt_metacast(_clname);
}

int UIGDetailsElementPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadSystem[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadSystem[] = {
    "UIGDetailsUpdateThreadSystem\0"
};

void UIGDetailsUpdateThreadSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadSystem::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadSystem,
      qt_meta_data_UIGDetailsUpdateThreadSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadSystem))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadSystem*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementSystem[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementSystem[] = {
    "UIGDetailsElementSystem\0"
};

void UIGDetailsElementSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementSystem::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementSystem,
      qt_meta_data_UIGDetailsElementSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementSystem))
        return static_cast<void*>(const_cast< UIGDetailsElementSystem*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadDisplay[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadDisplay[] = {
    "UIGDetailsUpdateThreadDisplay\0"
};

void UIGDetailsUpdateThreadDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadDisplay::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadDisplay,
      qt_meta_data_UIGDetailsUpdateThreadDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadDisplay))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadDisplay*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementDisplay[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementDisplay[] = {
    "UIGDetailsElementDisplay\0"
};

void UIGDetailsElementDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementDisplay::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementDisplay,
      qt_meta_data_UIGDetailsElementDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementDisplay))
        return static_cast<void*>(const_cast< UIGDetailsElementDisplay*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadStorage[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadStorage[] = {
    "UIGDetailsUpdateThreadStorage\0"
};

void UIGDetailsUpdateThreadStorage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadStorage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadStorage::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadStorage,
      qt_meta_data_UIGDetailsUpdateThreadStorage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadStorage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadStorage))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadStorage*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementStorage[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementStorage[] = {
    "UIGDetailsElementStorage\0"
};

void UIGDetailsElementStorage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementStorage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementStorage::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementStorage,
      qt_meta_data_UIGDetailsElementStorage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementStorage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementStorage))
        return static_cast<void*>(const_cast< UIGDetailsElementStorage*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadAudio[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadAudio[] = {
    "UIGDetailsUpdateThreadAudio\0"
};

void UIGDetailsUpdateThreadAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadAudio::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadAudio::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadAudio,
      qt_meta_data_UIGDetailsUpdateThreadAudio, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadAudio::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadAudio))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadAudio*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementAudio[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementAudio[] = {
    "UIGDetailsElementAudio\0"
};

void UIGDetailsElementAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementAudio::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementAudio::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementAudio,
      qt_meta_data_UIGDetailsElementAudio, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementAudio::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementAudio))
        return static_cast<void*>(const_cast< UIGDetailsElementAudio*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadNetwork[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadNetwork[] = {
    "UIGDetailsUpdateThreadNetwork\0"
};

void UIGDetailsUpdateThreadNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadNetwork::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadNetwork,
      qt_meta_data_UIGDetailsUpdateThreadNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadNetwork))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadNetwork*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementNetwork[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementNetwork[] = {
    "UIGDetailsElementNetwork\0"
};

void UIGDetailsElementNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementNetwork::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementNetwork,
      qt_meta_data_UIGDetailsElementNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementNetwork))
        return static_cast<void*>(const_cast< UIGDetailsElementNetwork*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadSerial[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadSerial[] = {
    "UIGDetailsUpdateThreadSerial\0"
};

void UIGDetailsUpdateThreadSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadSerial::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadSerial::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadSerial,
      qt_meta_data_UIGDetailsUpdateThreadSerial, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadSerial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadSerial))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadSerial*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementSerial[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementSerial[] = {
    "UIGDetailsElementSerial\0"
};

void UIGDetailsElementSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementSerial::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementSerial::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementSerial,
      qt_meta_data_UIGDetailsElementSerial, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementSerial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementSerial))
        return static_cast<void*>(const_cast< UIGDetailsElementSerial*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadUSB[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadUSB[] = {
    "UIGDetailsUpdateThreadUSB\0"
};

void UIGDetailsUpdateThreadUSB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadUSB::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadUSB::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadUSB,
      qt_meta_data_UIGDetailsUpdateThreadUSB, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadUSB::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadUSB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadUSB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadUSB))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadUSB*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadUSB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementUSB[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementUSB[] = {
    "UIGDetailsElementUSB\0"
};

void UIGDetailsElementUSB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementUSB::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementUSB::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementUSB,
      qt_meta_data_UIGDetailsElementUSB, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementUSB::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementUSB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementUSB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementUSB))
        return static_cast<void*>(const_cast< UIGDetailsElementUSB*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementUSB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadSF[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadSF[] = {
    "UIGDetailsUpdateThreadSF\0"
};

void UIGDetailsUpdateThreadSF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadSF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadSF::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadSF,
      qt_meta_data_UIGDetailsUpdateThreadSF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadSF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadSF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadSF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadSF))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadSF*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadSF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementSF[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementSF[] = {
    "UIGDetailsElementSF\0"
};

void UIGDetailsElementSF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementSF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementSF::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementSF,
      qt_meta_data_UIGDetailsElementSF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementSF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementSF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementSF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementSF))
        return static_cast<void*>(const_cast< UIGDetailsElementSF*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementSF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsUpdateThreadDescription[] = {

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

static const char qt_meta_stringdata_UIGDetailsUpdateThreadDescription[] = {
    "UIGDetailsUpdateThreadDescription\0"
};

void UIGDetailsUpdateThreadDescription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsUpdateThreadDescription::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsUpdateThreadDescription::staticMetaObject = {
    { &UIGDetailsUpdateThread::staticMetaObject, qt_meta_stringdata_UIGDetailsUpdateThreadDescription,
      qt_meta_data_UIGDetailsUpdateThreadDescription, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsUpdateThreadDescription::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsUpdateThreadDescription::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsUpdateThreadDescription::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsUpdateThreadDescription))
        return static_cast<void*>(const_cast< UIGDetailsUpdateThreadDescription*>(this));
    return UIGDetailsUpdateThread::qt_metacast(_clname);
}

int UIGDetailsUpdateThreadDescription::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsUpdateThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UIGDetailsElementDescription[] = {

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

static const char qt_meta_stringdata_UIGDetailsElementDescription[] = {
    "UIGDetailsElementDescription\0"
};

void UIGDetailsElementDescription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGDetailsElementDescription::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGDetailsElementDescription::staticMetaObject = {
    { &UIGDetailsElementInterface::staticMetaObject, qt_meta_stringdata_UIGDetailsElementDescription,
      qt_meta_data_UIGDetailsElementDescription, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGDetailsElementDescription::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGDetailsElementDescription::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGDetailsElementDescription::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGDetailsElementDescription))
        return static_cast<void*>(const_cast< UIGDetailsElementDescription*>(this));
    return UIGDetailsElementInterface::qt_metacast(_clname);
}

int UIGDetailsElementDescription::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIGDetailsElementInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
