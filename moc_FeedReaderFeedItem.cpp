/****************************************************************************
** Meta object code from reading C++ file 'FeedReaderFeedItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/FeedReaderFeedItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FeedReaderFeedItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FeedReaderFeedItem[] = {

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
      20,   19,   19,   19, 0x08,
      33,   19,   19,   19, 0x08,
      42,   19,   19,   19, 0x08,
      61,   19,   19,   19, 0x08,
      72,   19,   19,   19, 0x08,
     101,   83,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FeedReaderFeedItem[] = {
    "FeedReaderFeedItem\0\0removeItem()\0"
    "toggle()\0readAndClearItem()\0copyLink()\0"
    "openLink()\0feedId,msgId,type\0"
    "msgChanged(QString,QString,int)\0"
};

void FeedReaderFeedItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FeedReaderFeedItem *_t = static_cast<FeedReaderFeedItem *>(_o);
        switch (_id) {
        case 0: _t->removeItem(); break;
        case 1: _t->toggle(); break;
        case 2: _t->readAndClearItem(); break;
        case 3: _t->copyLink(); break;
        case 4: _t->openLink(); break;
        case 5: _t->msgChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FeedReaderFeedItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FeedReaderFeedItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FeedReaderFeedItem,
      qt_meta_data_FeedReaderFeedItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FeedReaderFeedItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FeedReaderFeedItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FeedReaderFeedItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FeedReaderFeedItem))
        return static_cast<void*>(const_cast< FeedReaderFeedItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int FeedReaderFeedItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
