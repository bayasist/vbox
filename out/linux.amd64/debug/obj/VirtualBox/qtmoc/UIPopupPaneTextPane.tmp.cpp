/****************************************************************************
** Meta object code from reading C++ file 'UIPopupPaneTextPane.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIPopupPaneTextPane.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIPopupPaneTextPane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPopupPaneTextPane[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      37,   20,   20,   20, 0x05,
      53,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   74,   20,   20, 0x08,
     112,   20,   20,   20, 0x08,
     128,   20,   20,   20, 0x08,

 // properties: name, type, flags
     150,  144, 0x15095001,
     168,  144, 0x15095001,
     185,  144, 0x15095103,

       0        // eod
};

static const char qt_meta_stringdata_UIPopupPaneTextPane[] = {
    "UIPopupPaneTextPane\0\0sigFocusEnter()\0"
    "sigFocusLeave()\0sigSizeHintChanged()\0"
    "iWidth\0sltHandleProposalForWidth(int)\0"
    "sltFocusEnter()\0sltFocusLeave()\0QSize\0"
    "collapsedSizeHint\0expandedSizeHint\0"
    "minimumSizeHint\0"
};

void UIPopupPaneTextPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPopupPaneTextPane *_t = static_cast<UIPopupPaneTextPane *>(_o);
        switch (_id) {
        case 0: _t->sigFocusEnter(); break;
        case 1: _t->sigFocusLeave(); break;
        case 2: _t->sigSizeHintChanged(); break;
        case 3: _t->sltHandleProposalForWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sltFocusEnter(); break;
        case 5: _t->sltFocusLeave(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIPopupPaneTextPane::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPopupPaneTextPane::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIPopupPaneTextPane,
      qt_meta_data_UIPopupPaneTextPane, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPopupPaneTextPane::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPopupPaneTextPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPopupPaneTextPane::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPopupPaneTextPane))
        return static_cast<void*>(const_cast< UIPopupPaneTextPane*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIPopupPaneTextPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = collapsedSizeHint(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = expandedSizeHint(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = minimumSizeHint(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setMinimumSizeHint(*reinterpret_cast< QSize*>(_v)); break;
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
void UIPopupPaneTextPane::sigFocusEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIPopupPaneTextPane::sigFocusLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIPopupPaneTextPane::sigSizeHintChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
