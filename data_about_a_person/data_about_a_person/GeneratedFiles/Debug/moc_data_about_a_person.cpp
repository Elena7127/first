/****************************************************************************
** Meta object code from reading C++ file 'data_about_a_person.h'
**
** Created: Sat 16. Mar 16:51:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data_about_a_person.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_about_a_person.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_data_about_a_person[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_data_about_a_person[] = {
    "data_about_a_person\0"
};

void data_about_a_person::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData data_about_a_person::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject data_about_a_person::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_data_about_a_person,
      qt_meta_data_data_about_a_person, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &data_about_a_person::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *data_about_a_person::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *data_about_a_person::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_data_about_a_person))
        return static_cast<void*>(const_cast< data_about_a_person*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int data_about_a_person::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
