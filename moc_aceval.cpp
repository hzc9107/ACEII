/****************************************************************************
** Meta object code from reading C++ file 'aceval.h'
**
** Created: Mon Dec 16 23:30:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "aceval.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aceval.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AceVal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,    8,    7,    7, 0x05,
      66,   60,    7,    7, 0x05,
     101,   88,    7,    7, 0x05,
     145,  130,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     172,    7,    7,    7, 0x08,
     198,    7,    7,    7, 0x08,
     224,    7,    7,    7, 0x08,
     255,  250,    7,    7, 0x08,
     286,    7,    7,    7, 0x08,
     295,    7,    7,    7, 0x08,
     304,    7,    7,    7, 0x08,
     316,    7,    7,    7, 0x08,
     324,    7,    7,    7, 0x08,
     333,    7,    7,    7, 0x08,
     346,    7,    7,    7, 0x08,
     361,  354,    7,    7, 0x08,
     384,  354,    7,    7, 0x08,
     416,  403,    7,    7, 0x08,
     442,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AceVal[] = {
    "AceVal\0\0Host,User,Password\0"
    "Connect(QString,QString,QString)\0query\0"
    "openThreadDB(QString)\0query,DBname\0"
    "newDBCreate(QString,QString)\0"
    "framesToInsert\0storeInfo(QVector<Frame>*)\0"
    "on_toolButton_3_clicked()\0"
    "on_toolButton_4_clicked()\0"
    "on_toolButton_5_clicked()\0arg1\0"
    "on_spinBox_2_valueChanged(int)\0OnExit()\0"
    "OnOpen()\0connectDB()\0newDB()\0openDB()\0"
    "firstTimer()\0Timer()\0result\0"
    "ResultConnection(bool)\0openFailedDB(bool)\0"
    "result,Error\0queryResult(bool,QString)\0"
    "selectPlayer()\0"
};

void AceVal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AceVal *_t = static_cast<AceVal *>(_o);
        switch (_id) {
        case 0: _t->Connect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->openThreadDB((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newDBCreate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->storeInfo((*reinterpret_cast< QVector<Frame>*(*)>(_a[1]))); break;
        case 4: _t->on_toolButton_3_clicked(); break;
        case 5: _t->on_toolButton_4_clicked(); break;
        case 6: _t->on_toolButton_5_clicked(); break;
        case 7: _t->on_spinBox_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnExit(); break;
        case 9: _t->OnOpen(); break;
        case 10: _t->connectDB(); break;
        case 11: _t->newDB(); break;
        case 12: _t->openDB(); break;
        case 13: _t->firstTimer(); break;
        case 14: _t->Timer(); break;
        case 15: _t->ResultConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->openFailedDB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->queryResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->selectPlayer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AceVal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AceVal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AceVal,
      qt_meta_data_AceVal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AceVal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AceVal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AceVal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AceVal))
        return static_cast<void*>(const_cast< AceVal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AceVal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void AceVal::Connect(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AceVal::openThreadDB(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AceVal::newDBCreate(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AceVal::storeInfo(QVector<Frame> * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
