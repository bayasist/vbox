/****************************************************************************
** Meta object code from reading C++ file 'UIPopupBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/widgets/UIPopupBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIPopupBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPopupBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,
      53,   45,   11,   11, 0x05,
      70,   11,   11,   11, 0x05,
      95,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UIPopupBox[] = {
    "UIPopupBox\0\0strLink\0sigTitleClicked(QString)\0"
    "fOpened\0sigToggled(bool)\0"
    "sigUpdateContentWidget()\0sigGotHover()\0"
};

void UIPopupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPopupBox *_t = static_cast<UIPopupBox *>(_o);
        switch (_id) {
        case 0: _t->sigTitleClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sigToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sigUpdateContentWidget(); break;
        case 3: _t->sigGotHover(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIPopupBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPopupBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIPopupBox,
      qt_meta_data_UIPopupBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPopupBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPopupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPopupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPopupBox))
        return static_cast<void*>(const_cast< UIPopupBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIPopupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UIPopupBox::sigTitleClicked(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIPopupBox::sigToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UIPopupBox::sigUpdateContentWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UIPopupBox::sigGotHover()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_UIPopupBoxGroup[] = {

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
      17,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIPopupBoxGroup[] = {
    "UIPopupBoxGroup\0\0sltHoverChanged()\0"
};

void UIPopupBoxGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIPopupBoxGroup *_t = static_cast<UIPopupBoxGroup *>(_o);
        switch (_id) {
        case 0: _t->sltHoverChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UIPopupBoxGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIPopupBoxGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIPopupBoxGroup,
      qt_meta_data_UIPopupBoxGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPopupBoxGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPopupBoxGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPopupBoxGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPopupBoxGroup))
        return static_cast<void*>(const_cast< UIPopupBoxGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int UIPopupBoxGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
