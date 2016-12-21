/****************************************************************************
** Meta object code from reading C++ file 'YTR_D3D.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../YTR_D3D.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'YTR_D3D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_YTR_D3DPlugin[] = {

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

static const char qt_meta_stringdata_YTR_D3DPlugin[] = {
    "YTR_D3DPlugin\0"
};

void YTR_D3DPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData YTR_D3DPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject YTR_D3DPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_YTR_D3DPlugin,
      qt_meta_data_YTR_D3DPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &YTR_D3DPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *YTR_D3DPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *YTR_D3DPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_YTR_D3DPlugin))
        return static_cast<void*>(const_cast< YTR_D3DPlugin*>(this));
    if (!strcmp(_clname, "YTPlugIn"))
        return static_cast< YTPlugIn*>(const_cast< YTR_D3DPlugin*>(this));
    if (!strcmp(_clname, "net.yocto.YUVToolkit.PlugIn/1.2"))
        return static_cast< YTPlugIn*>(const_cast< YTR_D3DPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int YTR_D3DPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_YTR_D3D[] = {

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
       9,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_YTR_D3D[] = {
    "YTR_D3D\0\0OnResizeTimer()\0"
};

void YTR_D3D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        YTR_D3D *_t = static_cast<YTR_D3D *>(_o);
        switch (_id) {
        case 0: _t->OnResizeTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData YTR_D3D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject YTR_D3D::staticMetaObject = {
    { &D3DWidget::staticMetaObject, qt_meta_stringdata_YTR_D3D,
      qt_meta_data_YTR_D3D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &YTR_D3D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *YTR_D3D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *YTR_D3D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_YTR_D3D))
        return static_cast<void*>(const_cast< YTR_D3D*>(this));
    if (!strcmp(_clname, "Renderer"))
        return static_cast< Renderer*>(const_cast< YTR_D3D*>(this));
    return D3DWidget::qt_metacast(_clname);
}

int YTR_D3D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = D3DWidget::qt_metacall(_c, _id, _a);
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
