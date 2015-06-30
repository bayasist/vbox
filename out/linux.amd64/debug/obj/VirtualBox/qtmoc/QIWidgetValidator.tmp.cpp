/****************************************************************************
** Meta object code from reading C++ file 'QIWidgetValidator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/extensions/QIWidgetValidator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QIWidgetValidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPageValidator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x05,
      65,   16,   16,   16, 0x05,
      86,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UIPageValidator[] = {
    "UIPageValidator\0\0pValidator\0"
    "sigValidityChanged(UIPageValidator*)\0"
    "sigShowWarningIcon()\0sigHideWarningIcon()\0"
    "revalidate()\0"
};

void UIPageValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPageValidator *_t = static_cast<UIPageValidator *>(_o);
        switch (_id) {
        case 0: _t->sigValidityChanged((*reinterpret_cast< UIPageValidator*(*)>(_a[1]))); break;
        case 1: _t->sigShowWarningIcon(); break;
        case 2: _t->sigHideWarningIcon(); break;
        case 3: _t->revalidate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIPageValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPageValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIPageValidator,
      qt_meta_data_UIPageValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPageValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPageValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPageValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPageValidator))
        return static_cast<void*>(const_cast< UIPageValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int UIPageValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void UIPageValidator::sigValidityChanged(UIPageValidator * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIPageValidator::sigShowWarningIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIPageValidator::sigHideWarningIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
