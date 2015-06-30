/****************************************************************************
** Meta object code from reading C++ file 'UIMiniToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIMiniToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMiniToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIRuntimeMiniToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      42,   21,   21,   21, 0x05,
      58,   21,   21,   21, 0x05,
      75,   21,   21,   21, 0x05,
      91,   21,   21,   21, 0x05,
     107,   21,   21,   21, 0x05,
     139,  135,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     175,   21,   21,   21, 0x08,
     200,   21,   21,   21, 0x08,
     221,   21,   21,   21, 0x08,
     237,   21,   21,   21, 0x08,

 // properties: name, type, flags
     260,  253, 0x19095103,
     276,  253, 0x19095001,
     298,  253, 0x19095001,

       0        // eod
};

static const char qt_meta_stringdata_UIRuntimeMiniToolBar[] = {
    "UIRuntimeMiniToolBar\0\0sigMinimizeAction()\0"
    "sigExitAction()\0sigCloseAction()\0"
    "sigHoverEnter()\0sigHoverLeave()\0"
    "sigNotifyAboutFocusStolen()\0geo\0"
    "sigNotifyAboutGeometryChange(QRect)\0"
    "sltHandleToolbarResize()\0sltAutoHideToggled()\0"
    "sltHoverEnter()\0sltHoverLeave()\0QPoint\0"
    "toolbarPosition\0hiddenToolbarPosition\0"
    "shownToolbarPosition\0"
};

void UIRuntimeMiniToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIRuntimeMiniToolBar *_t = static_cast<UIRuntimeMiniToolBar *>(_o);
        switch (_id) {
        case 0: _t->sigMinimizeAction(); break;
        case 1: _t->sigExitAction(); break;
        case 2: _t->sigCloseAction(); break;
        case 3: _t->sigHoverEnter(); break;
        case 4: _t->sigHoverLeave(); break;
        case 5: _t->sigNotifyAboutFocusStolen(); break;
        case 6: _t->sigNotifyAboutGeometryChange((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 7: _t->sltHandleToolbarResize(); break;
        case 8: _t->sltAutoHideToggled(); break;
        case 9: _t->sltHoverEnter(); break;
        case 10: _t->sltHoverLeave(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIRuntimeMiniToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIRuntimeMiniToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIRuntimeMiniToolBar,
      qt_meta_data_UIRuntimeMiniToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIRuntimeMiniToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIRuntimeMiniToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIRuntimeMiniToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIRuntimeMiniToolBar))
        return static_cast<void*>(const_cast< UIRuntimeMiniToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIRuntimeMiniToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPoint*>(_v) = toolbarPosition(); break;
        case 1: *reinterpret_cast< QPoint*>(_v) = hiddenToolbarPosition(); break;
        case 2: *reinterpret_cast< QPoint*>(_v) = shownToolbarPosition(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setToolbarPosition(*reinterpret_cast< QPoint*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UIRuntimeMiniToolBar::sigMinimizeAction()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIRuntimeMiniToolBar::sigExitAction()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIRuntimeMiniToolBar::sigCloseAction()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIRuntimeMiniToolBar::sigHoverEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UIRuntimeMiniToolBar::sigHoverLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void UIRuntimeMiniToolBar::sigNotifyAboutFocusStolen()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void UIRuntimeMiniToolBar::sigNotifyAboutGeometryChange(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_UIMiniToolBar[] = {

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
      15,   14,   14,   14, 0x05,
      28,   14,   14,   14, 0x05,
      49,   14,   14,   14, 0x05,
      69,   14,   14,   14, 0x05,
      85,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIMiniToolBar[] = {
    "UIMiniToolBar\0\0sigResized()\0"
    "sigAutoHideToggled()\0sigMinimizeAction()\0"
    "sigExitAction()\0sigCloseAction()\0"
};

void UIMiniToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMiniToolBar *_t = static_cast<UIMiniToolBar *>(_o);
        switch (_id) {
        case 0: _t->sigResized(); break;
        case 1: _t->sigAutoHideToggled(); break;
        case 2: _t->sigMinimizeAction(); break;
        case 3: _t->sigExitAction(); break;
        case 4: _t->sigCloseAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIMiniToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMiniToolBar::staticMetaObject = {
    { &UIToolBar::staticMetaObject, qt_meta_stringdata_UIMiniToolBar,
      qt_meta_data_UIMiniToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMiniToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMiniToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMiniToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMiniToolBar))
        return static_cast<void*>(const_cast< UIMiniToolBar*>(this));
    return UIToolBar::qt_metacast(_clname);
}

int UIMiniToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIToolBar::qt_metacall(_c, _id, _a);
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
void UIMiniToolBar::sigResized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIMiniToolBar::sigAutoHideToggled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIMiniToolBar::sigMinimizeAction()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIMiniToolBar::sigExitAction()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UIMiniToolBar::sigCloseAction()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
