/****************************************************************************
** Meta object code from reading C++ file 'ReaderCard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ReaderCard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReaderCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReaderCard_t {
    QByteArrayData data[8];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReaderCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReaderCard_t qt_meta_stringdata_ReaderCard = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ReaderCard"
QT_MOC_LITERAL(1, 11, 7), // "hasRead"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "getInstance"
QT_MOC_LITERAL(4, 32, 11), // "ReaderCard*"
QT_MOC_LITERAL(5, 44, 9), // "database*"
QT_MOC_LITERAL(6, 54, 2), // "db"
QT_MOC_LITERAL(7, 57, 4) // "read"

    },
    "ReaderCard\0hasRead\0\0getInstance\0"
    "ReaderCard*\0database*\0db\0read"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReaderCard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

 // slots: parameters
    0x80000000 | 4, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void ReaderCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReaderCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hasRead((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 1: { ReaderCard* _r = _t->getInstance((*reinterpret_cast< database*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ReaderCard**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->read(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReaderCard::*)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReaderCard::hasRead)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReaderCard::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ReaderCard.data,
    qt_meta_data_ReaderCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReaderCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReaderCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReaderCard.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ReaderCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ReaderCard::hasRead(QMap<QString,QVariant> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
