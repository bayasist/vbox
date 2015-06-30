/****************************************************************************
** Meta object code from reading C++ file 'UIGChooser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/selector/graphics/chooser/UIGChooser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIGChooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIGChooser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      34,   11,   11,   11, 0x05,
      54,   11,   11,   11, 0x05,
      73,   11,   11,   11, 0x05,
      93,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIGChooser[] = {
    "UIGChooser\0\0sigSelectionChanged()\0"
    "sigSlidingStarted()\0sigToggleStarted()\0"
    "sigToggleFinished()\0sigGroupSavingStateChanged()\0"
};

void UIGChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIGChooser *_t = static_cast<UIGChooser *>(_o);
        switch (_id) {
        case 0: _t->sigSelectionChanged(); break;
        case 1: _t->sigSlidingStarted(); break;
        case 2: _t->sigToggleStarted(); break;
        case 3: _t->sigToggleFinished(); break;
        case 4: _t->sigGroupSavingStateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIGChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIGChooser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIGChooser,
      qt_meta_data_UIGChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIGChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIGChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIGChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIGChooser))
        return static_cast<void*>(const_cast< UIGChooser*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIGChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UIGChooser::sigSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIGChooser::sigSlidingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIGChooser::sigToggleStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIGChooser::sigToggleFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UIGChooser::sigGroupSavingStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
