/****************************************************************************
** Meta object code from reading C++ file 'FeedReaderMessageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/FeedReaderMessageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FeedReaderMessageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FeedReaderMessageWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   61,   24,   24, 0x08,
      98,   24,   24,   24, 0x08,
     121,   24,   24,   24, 0x08,
     150,  138,   24,   24, 0x08,
     194,  187,   24,   24, 0x08,
     224,  219,   24,   24, 0x08,
     245,   24,   24,   24, 0x08,
     261,   24,   24,   24, 0x08,
     277,   24,   24,   24, 0x08,
     295,   24,   24,   24, 0x08,
     314,   24,   24,   24, 0x08,
     337,   24,   24,   24, 0x08,
     349,   24,   24,   24, 0x08,
     363,   24,   24,   24, 0x08,
     377,   24,   24,   24, 0x08,
     391,   24,   24,   24, 0x08,
     420,  408,   24,   24, 0x08,
     463,  445,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FeedReaderMessageWidget[] = {
    "FeedReaderMessageWidget\0\0widget\0"
    "feedMessageChanged(QWidget*)\0point\0"
    "msgTreeCustomPopupMenu(QPoint)\0"
    "updateCurrentMessage()\0msgItemChanged()\0"
    "item,column\0msgItemClicked(QTreeWidgetItem*,int)\0"
    "column\0filterColumnChanged(int)\0text\0"
    "filterItems(QString)\0toggleMsgText()\0"
    "markAsReadMsg()\0markAsUnreadMsg()\0"
    "markAllAsReadMsg()\0copySelectedLinksMsg()\0"
    "removeMsg()\0processFeed()\0openLinkMsg()\0"
    "copyLinkMsg()\0retransformMsg()\0"
    "feedId,type\0feedChanged(QString,int)\0"
    "feedId,msgId,type\0msgChanged(QString,QString,int)\0"
};

void FeedReaderMessageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FeedReaderMessageWidget *_t = static_cast<FeedReaderMessageWidget *>(_o);
        switch (_id) {
        case 0: _t->feedMessageChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->msgTreeCustomPopupMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->updateCurrentMessage(); break;
        case 3: _t->msgItemChanged(); break;
        case 4: _t->msgItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->filterColumnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->filterItems((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->toggleMsgText(); break;
        case 8: _t->markAsReadMsg(); break;
        case 9: _t->markAsUnreadMsg(); break;
        case 10: _t->markAllAsReadMsg(); break;
        case 11: _t->copySelectedLinksMsg(); break;
        case 12: _t->removeMsg(); break;
        case 13: _t->processFeed(); break;
        case 14: _t->openLinkMsg(); break;
        case 15: _t->copyLinkMsg(); break;
        case 16: _t->retransformMsg(); break;
        case 17: _t->feedChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->msgChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FeedReaderMessageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FeedReaderMessageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FeedReaderMessageWidget,
      qt_meta_data_FeedReaderMessageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FeedReaderMessageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FeedReaderMessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FeedReaderMessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FeedReaderMessageWidget))
        return static_cast<void*>(const_cast< FeedReaderMessageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FeedReaderMessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void FeedReaderMessageWidget::feedMessageChanged(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
