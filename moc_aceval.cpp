/****************************************************************************
** Meta object code from reading C++ file 'aceval.h'
**
** Created: Mon Aug 5 19:01:22 2013
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
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      34,    7,    7,    7, 0x08,
      60,    7,    7,    7, 0x08,
      91,   86,    7,    7, 0x08,
     122,    7,    7,    7, 0x08,
     131,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AceVal[] = {
    "AceVal\0\0on_toolButton_3_clicked()\0"
    "on_toolButton_4_clicked()\0"
    "on_toolButton_5_clicked()\0arg1\0"
    "on_spinBox_2_valueChanged(int)\0OnExit()\0"
    "OnOpen()\0"
};

void AceVal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AceVal *_t = static_cast<AceVal *>(_o);
        switch (_id) {
        case 0: _t->on_toolButton_3_clicked(); break;
        case 1: _t->on_toolButton_4_clicked(); break;
        case 2: _t->on_toolButton_5_clicked(); break;
        case 3: _t->on_spinBox_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnExit(); break;
        case 5: _t->OnOpen(); break;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
