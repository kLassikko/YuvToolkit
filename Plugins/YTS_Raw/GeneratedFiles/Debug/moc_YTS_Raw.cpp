/****************************************************************************
** Meta object code from reading C++ file 'YTS_Raw.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../YTS_Raw.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'YTS_Raw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RawPlugin[] = {

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

static const char qt_meta_stringdata_RawPlugin[] = {
    "RawPlugin\0"
};

void RawPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RawPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RawPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RawPlugin,
      qt_meta_data_RawPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RawPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RawPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RawPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RawPlugin))
        return static_cast<void*>(const_cast< RawPlugin*>(this));
    if (!strcmp(_clname, "YTPlugIn"))
        return static_cast< YTPlugIn*>(const_cast< RawPlugin*>(this));
    if (!strcmp(_clname, "net.yocto.YUVToolkit.PlugIn/1.2"))
        return static_cast< YTPlugIn*>(const_cast< RawPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int RawPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_YTS_Raw[] = {

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

static const char qt_meta_stringdata_YTS_Raw[] = {
    "YTS_Raw\0"
};

void YTS_Raw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData YTS_Raw::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject YTS_Raw::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_YTS_Raw,
      qt_meta_data_YTS_Raw, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &YTS_Raw::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *YTS_Raw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *YTS_Raw::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_YTS_Raw))
        return static_cast<void*>(const_cast< YTS_Raw*>(this));
    if (!strcmp(_clname, "Source"))
        return static_cast< Source*>(const_cast< YTS_Raw*>(this));
    return QObject::qt_metacast(_clname);
}

int YTS_Raw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
