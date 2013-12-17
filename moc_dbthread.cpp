/****************************************************************************
** Meta object code from reading C++ file 'dbthread.h'
**
** Created: Mon Dec 16 22:43:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DBthread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   10,    9,    9, 0x05,
      45,   38,    9,    9, 0x05,
      75,   62,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     119,  100,    9,    9, 0x0a,
     160,  154,    9,    9, 0x0a,
     189,  176,    9,    9, 0x0a,
     227,  212,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DBthread[] = {
    "DBthread\0\0isConnected\0connected(bool)\0"
    "result\0openDBFail(bool)\0result,Error\0"
    "querResult(bool,QString)\0Host,User,Password\0"
    "connectDB(QString,QString,QString)\0"
    "query\0openDB(QString)\0query,DBname\0"
    "newDB(QString,QString)\0framesToInsert\0"
    "storeInfor(QVector<Frame>*)\0"
};

void DBthread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DBthread *_t = static_cast<DBthread *>(_o);
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->openDBFail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->querResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->connectDB((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->openDB((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->newDB((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->storeInfor((*reinterpret_cast< QVector<Frame>*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DBthread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DBthread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DBthread,
      qt_meta_data_DBthread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DBthread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DBthread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DBthread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DBthread))
        return static_cast<void*>(const_cast< DBthread*>(this));
    return QObject::qt_metacast(_clname);
}

int DBthread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DBthread::connected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBthread::openDBFail(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBthread::querResult(bool _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
