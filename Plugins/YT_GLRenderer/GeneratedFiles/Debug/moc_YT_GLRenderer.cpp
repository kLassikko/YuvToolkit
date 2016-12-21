/****************************************************************************
** Meta object code from reading C++ file 'YT_GLRenderer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../YT_GLRenderer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'YT_GLRenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenGLRendererPlugin[] = {

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

static const char qt_meta_stringdata_OpenGLRendererPlugin[] = {
    "OpenGLRendererPlugin\0"
};

void OpenGLRendererPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OpenGLRendererPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenGLRendererPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenGLRendererPlugin,
      qt_meta_data_OpenGLRendererPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenGLRendererPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenGLRendererPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenGLRendererPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGLRendererPlugin))
        return static_cast<void*>(const_cast< OpenGLRendererPlugin*>(this));
    if (!strcmp(_clname, "YTPlugIn"))
        return static_cast< YTPlugIn*>(const_cast< OpenGLRendererPlugin*>(this));
    if (!strcmp(_clname, "net.yocto.YUVToolkit.PlugIn/1.2"))
        return static_cast< YTPlugIn*>(const_cast< OpenGLRendererPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int OpenGLRendererPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_OpenGLRenderer[] = {

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
      16,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OpenGLRenderer[] = {
    "OpenGLRenderer\0\0OnResizeTimer()\0"
};

void OpenGLRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenGLRenderer *_t = static_cast<OpenGLRenderer *>(_o);
        switch (_id) {
        case 0: _t->OnResizeTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OpenGLRenderer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenGLRenderer::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_OpenGLRenderer,
      qt_meta_data_OpenGLRenderer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenGLRenderer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenGLRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenGLRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGLRenderer))
        return static_cast<void*>(const_cast< OpenGLRenderer*>(this));
    if (!strcmp(_clname, "Renderer"))
        return static_cast< Renderer*>(const_cast< OpenGLRenderer*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int OpenGLRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
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
