/****************************************************************************
** Meta object code from reading C++ file 'AddFeedDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/AddFeedDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddFeedDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddFeedDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      71,   14,   14,   14, 0x08,
     106,   14,   14,   14, 0x08,
     132,   14,   14,   14, 0x08,
     151,   14,   14,   14, 0x08,
     170,   14,   14,   14, 0x08,
     181,   14,   14,   14, 0x08,
     194,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddFeedDialog[] = {
    "AddFeedDialog\0\0authenticationToggled()\0"
    "useStandardStorageTimeToggled()\0"
    "useStandardUpdateIntervalToggled()\0"
    "useStandardProxyToggled()\0typeForumToggled()\0"
    "denyForumToggled()\0validate()\0"
    "createFeed()\0preview()\0"
};

void AddFeedDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddFeedDialog *_t = static_cast<AddFeedDialog *>(_o);
        switch (_id) {
        case 0: _t->authenticationToggled(); break;
        case 1: _t->useStandardStorageTimeToggled(); break;
        case 2: _t->useStandardUpdateIntervalToggled(); break;
        case 3: _t->useStandardProxyToggled(); break;
        case 4: _t->typeForumToggled(); break;
        case 5: _t->denyForumToggled(); break;
        case 6: _t->validate(); break;
        case 7: _t->createFeed(); break;
        case 8: _t->preview(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddFeedDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddFeedDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddFeedDialog,
      qt_meta_data_AddFeedDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddFeedDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddFeedDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddFeedDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddFeedDialog))
        return static_cast<void*>(const_cast< AddFeedDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddFeedDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
