/****************************************************************************
** Meta object code from reading C++ file 'VBoxFilePathSelectorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/VBoxFilePathSelectorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VBoxFilePathSelectorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VBoxFilePathSelectorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   49,   27,   27, 0x0a,
      96,   90,   27,   27, 0x2a,
     122,  113,   27,   27, 0x0a,
     149,  142,   27,   27, 0x08,
     166,   90,   27,   27, 0x08,
     188,   27,   27,   27, 0x08,
     206,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxFilePathSelectorWidget[] = {
    "VBoxFilePathSelectorWidget\0\0"
    "pathChanged(QString)\0aPath,aRefreshText\0"
    "setPath(QString,bool)\0aPath\0"
    "setPath(QString)\0aHomeDir\0setHomeDir(QString)\0"
    "aIndex\0onActivated(int)\0onTextEdited(QString)\0"
    "copyToClipboard()\0refreshText()\0"
};

void VBoxFilePathSelectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxFilePathSelectorWidget *_t = static_cast<VBoxFilePathSelectorWidget *>(_o);
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setHomeDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->copyToClipboard(); break;
        case 7: _t->refreshText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxFilePathSelectorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxFilePathSelectorWidget::staticMetaObject = {
    { &QIWithRetranslateUI<QComboBox>::staticMetaObject, qt_meta_stringdata_VBoxFilePathSelectorWidget,
      qt_meta_data_VBoxFilePathSelectorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxFilePathSelectorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxFilePathSelectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxFilePathSelectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxFilePathSelectorWidget))
        return static_cast<void*>(const_cast< VBoxFilePathSelectorWidget*>(this));
    return QIWithRetranslateUI<QComboBox>::qt_metacast(_clname);
}

int VBoxFilePathSelectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QComboBox>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void VBoxFilePathSelectorWidget::pathChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_VBoxEmptyFileSelector[] = {

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
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   44,   22,   22, 0x0a,
      67,   22,   22,   22, 0x08,
      76,   44,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VBoxEmptyFileSelector[] = {
    "VBoxEmptyFileSelector\0\0pathChanged(QString)\0"
    "aPath\0setPath(QString)\0choose()\0"
    "textChanged(QString)\0"
};

void VBoxEmptyFileSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VBoxEmptyFileSelector *_t = static_cast<VBoxEmptyFileSelector *>(_o);
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->choose(); break;
        case 3: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VBoxEmptyFileSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VBoxEmptyFileSelector::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_VBoxEmptyFileSelector,
      qt_meta_data_VBoxEmptyFileSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VBoxEmptyFileSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VBoxEmptyFileSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VBoxEmptyFileSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VBoxEmptyFileSelector))
        return static_cast<void*>(const_cast< VBoxEmptyFileSelector*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int VBoxEmptyFileSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
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
void VBoxEmptyFileSelector::pathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
