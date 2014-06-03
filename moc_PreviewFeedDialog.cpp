/****************************************************************************
** Meta object code from reading C++ file 'PreviewFeedDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/PreviewFeedDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreviewFeedDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreviewFeedDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      33,   18,   18,   18, 0x08,
      43,   18,   18,   18, 0x08,
      70,   64,   18,   18, 0x08,
     115,  103,   18,   18, 0x08,
     177,   18,   18,   18, 0x08,
     188,   18,   18,   18, 0x08,
     200,   18,   18,   18, 0x08,
     214,   18,   18,   18, 0x08,
     254,  242,   18,   18, 0x08,
     297,  279,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PreviewFeedDialog[] = {
    "PreviewFeedDialog\0\0previousMsg()\0"
    "nextMsg()\0showStructureFrame()\0point\0"
    "xpathListCustomPopupMenu(QPoint)\0"
    "editor,hint\0"
    "xpathCloseEditor(QWidget*,QAbstractItemDelegate::EndEditHint)\0"
    "addXPath()\0editXPath()\0removeXPath()\0"
    "transformationTypeChanged()\0feedId,type\0"
    "feedChanged(QString,int)\0feedId,msgId,type\0"
    "msgChanged(QString,QString,int)\0"
};

void PreviewFeedDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreviewFeedDialog *_t = static_cast<PreviewFeedDialog *>(_o);
        switch (_id) {
        case 0: _t->previousMsg(); break;
        case 1: _t->nextMsg(); break;
        case 2: _t->showStructureFrame(); break;
        case 3: _t->xpathListCustomPopupMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->xpathCloseEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 5: _t->addXPath(); break;
        case 6: _t->editXPath(); break;
        case 7: _t->removeXPath(); break;
        case 8: _t->transformationTypeChanged(); break;
        case 9: _t->feedChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->msgChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreviewFeedDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreviewFeedDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreviewFeedDialog,
      qt_meta_data_PreviewFeedDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreviewFeedDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreviewFeedDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreviewFeedDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewFeedDialog))
        return static_cast<void*>(const_cast< PreviewFeedDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PreviewFeedDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
