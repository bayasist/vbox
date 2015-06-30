/****************************************************************************
** Meta object code from reading C++ file 'UIPopupPane.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIPopupPane.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIPopupPane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPopupPane[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       6,   89, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      25,   12,   12,   12, 0x05,
      37,   12,   12,   12, 0x05,
      47,   12,   12,   12, 0x05,
      57,   12,   12,   12, 0x05,
      73,   12,   12,   12, 0x05,
      89,   12,   12,   12, 0x05,
     105,   12,   12,   12, 0x05,
     128,  121,   12,   12, 0x05,
     157,   12,   12,   12, 0x05,
     190,  178,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     203,   12,   12,   12, 0x08,
     220,  121,   12,   12, 0x08,
     251,   12,   12,   12, 0x08,
     281,  271,   12,   12, 0x08,

 // properties: name, type, flags
     309,  303, 0x15095001,
     324,  303, 0x15095001,
     338,  303, 0x15095103,
     358,  354, 0x02095001,
     373,  354, 0x02095001,
     388,  354, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_UIPopupPane[] = {
    "UIPopupPane\0\0sigToShow()\0sigToHide()\0"
    "sigShow()\0sigHide()\0sigHoverEnter()\0"
    "sigHoverLeave()\0sigFocusEnter()\0"
    "sigFocusLeave()\0iWidth\0"
    "sigProposeTextPaneWidth(int)\0"
    "sigSizeHintChanged()\0iResultCode\0"
    "sigDone(int)\0sltMarkAsShown()\0"
    "sltHandleProposalForWidth(int)\0"
    "sltUpdateSizeHint()\0iButtonID\0"
    "sltButtonClicked(int)\0QSize\0hiddenSizeHint\0"
    "shownSizeHint\0minimumSizeHint\0int\0"
    "defaultOpacity\0hoveredOpacity\0opacity\0"
};

void UIPopupPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPopupPane *_t = static_cast<UIPopupPane *>(_o);
        switch (_id) {
        case 0: _t->sigToShow(); break;
        case 1: _t->sigToHide(); break;
        case 2: _t->sigShow(); break;
        case 3: _t->sigHide(); break;
        case 4: _t->sigHoverEnter(); break;
        case 5: _t->sigHoverLeave(); break;
        case 6: _t->sigFocusEnter(); break;
        case 7: _t->sigFocusLeave(); break;
        case 8: _t->sigProposeTextPaneWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->sigSizeHintChanged(); break;
        case 10: _t->sigDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->sltMarkAsShown(); break;
        case 12: _t->sltHandleProposalForWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->sltUpdateSizeHint(); break;
        case 14: _t->sltButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIPopupPane::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPopupPane::staticMetaObject = {
    { &QIWithRetranslateUI<QWidget>::staticMetaObject, qt_meta_stringdata_UIPopupPane,
      qt_meta_data_UIPopupPane, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPopupPane::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPopupPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPopupPane::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPopupPane))
        return static_cast<void*>(const_cast< UIPopupPane*>(this));
    return QIWithRetranslateUI<QWidget>::qt_metacast(_clname);
}

int UIPopupPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<QWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = hiddenSizeHint(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = shownSizeHint(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = minimumSizeHint(); break;
        case 3: *reinterpret_cast< int*>(_v) = defaultOpacity(); break;
        case 4: *reinterpret_cast< int*>(_v) = hoveredOpacity(); break;
        case 5: *reinterpret_cast< int*>(_v) = opacity(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setMinimumSizeHint(*reinterpret_cast< QSize*>(_v)); break;
        case 5: setOpacity(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UIPopupPane::sigToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UIPopupPane::sigToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIPopupPane::sigShow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIPopupPane::sigHide()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UIPopupPane::sigHoverEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void UIPopupPane::sigHoverLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void UIPopupPane::sigFocusEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void UIPopupPane::sigFocusLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void UIPopupPane::sigProposeTextPaneWidth(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UIPopupPane::sigSizeHintChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void UIPopupPane::sigDone(int _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< UIPopupPane *>(this), &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
