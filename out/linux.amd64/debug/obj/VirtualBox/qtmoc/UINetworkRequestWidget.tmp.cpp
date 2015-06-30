/****************************************************************************
** Meta object code from reading C++ file 'UINetworkRequestWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/VBox/Frontends/VirtualBox/src/net/UINetworkRequestWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UINetworkRequestWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UINetworkRequestWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      35,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   47,   23,   23, 0x08,
      94,   23,   23,   23, 0x08,
     120,   23,   23,   23, 0x08,
     156,  147,   23,   23, 0x08,
     188,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UINetworkRequestWidget[] = {
    "UINetworkRequestWidget\0\0sigRetry()\0"
    "sigCancel()\0iReceived,iTotal\0"
    "sltSetProgress(qint64,qint64)\0"
    "sltSetProgressToStarted()\0"
    "sltSetProgressToFinished()\0strError\0"
    "sltSetProgressToFailed(QString)\0"
    "sltTimeIsOut()\0"
};

void UINetworkRequestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UINetworkRequestWidget *_t = static_cast<UINetworkRequestWidget *>(_o);
        switch (_id) {
        case 0: _t->sigRetry(); break;
        case 1: _t->sigCancel(); break;
        case 2: _t->sltSetProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->sltSetProgressToStarted(); break;
        case 4: _t->sltSetProgressToFinished(); break;
        case 5: _t->sltSetProgressToFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->sltTimeIsOut(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UINetworkRequestWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UINetworkRequestWidget::staticMetaObject = {
    { &QIWithRetranslateUI<UIPopupBox>::staticMetaObject, qt_meta_stringdata_UINetworkRequestWidget,
      qt_meta_data_UINetworkRequestWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UINetworkRequestWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UINetworkRequestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UINetworkRequestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UINetworkRequestWidget))
        return static_cast<void*>(const_cast< UINetworkRequestWidget*>(this));
    return QIWithRetranslateUI<UIPopupBox>::qt_metacast(_clname);
}

int UINetworkRequestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIWithRetranslateUI<UIPopupBox>::qt_metacall(_c, _id, _a);
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
void UINetworkRequestWidget::sigRetry()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UINetworkRequestWidget::sigCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
