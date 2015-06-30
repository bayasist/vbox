/****************************************************************************
** Meta object code from reading C++ file 'UIMessageCenter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/globals/UIMessageCenter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIMessageCenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIMessageCenter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
     141,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     243,   16,   16,   16, 0x0a,
     266,   16,   16,   16, 0x0a,
     291,   16,   16,   16, 0x0a,
     315,   16,   16,   16, 0x0a,
     356,  344,   16,   16, 0x0a,
     383,   17,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UIMessageCenter[] = {
    "UIMessageCenter\0\0"
    "pParent,type,strMessage,strDetails,iButton1,iButton2,iButton3,strButto"
    "nText1,strButtonText2,strButtonText3,strAutoConfirmId\0"
    "sigToShowMessageBox(QWidget*,MessageType,QString,QString,int,int,int,Q"
    "String,QString,QString,QString)\0"
    "sltShowHelpWebDialog()\0sltShowHelpAboutDialog()\0"
    "sltShowHelpHelpDialog()\0"
    "sltResetSuppressedMessages()\0strLocation\0"
    "sltShowUserManual(QString)\0"
    "sltShowMessageBox(QWidget*,MessageType,QString,QString,int,int,int,QSt"
    "ring,QString,QString,QString)\0"
};

void UIMessageCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIMessageCenter *_t = static_cast<UIMessageCenter *>(_o);
        switch (_id) {
        case 0: _t->sigToShowMessageBox((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< MessageType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QString(*)>(_a[11]))); break;
        case 1: _t->sltShowHelpWebDialog(); break;
        case 2: _t->sltShowHelpAboutDialog(); break;
        case 3: _t->sltShowHelpHelpDialog(); break;
        case 4: _t->sltResetSuppressedMessages(); break;
        case 5: _t->sltShowUserManual((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->sltShowMessageBox((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< MessageType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QString(*)>(_a[11]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIMessageCenter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIMessageCenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIMessageCenter,
      qt_meta_data_UIMessageCenter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIMessageCenter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIMessageCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIMessageCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIMessageCenter))
        return static_cast<void*>(const_cast< UIMessageCenter*>(this));
    return QObject::qt_metacast(_clname);
}

int UIMessageCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UIMessageCenter::sigToShowMessageBox(QWidget * _t1, MessageType _t2, const QString & _t3, const QString & _t4, int _t5, int _t6, int _t7, const QString & _t8, const QString & _t9, const QString & _t10, const QString & _t11)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(const_cast< UIMessageCenter *>(this), &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
