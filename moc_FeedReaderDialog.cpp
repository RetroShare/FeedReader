/****************************************************************************
** Meta object code from reading C++ file 'FeedReaderDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gui/FeedReaderDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FeedReaderDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FeedReaderDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      42,   36,   17,   17, 0x08,
      79,   74,   17,   17, 0x08,
     119,   74,   17,   17, 0x08,
     165,   17,   17,   17, 0x08,
     180,   17,   17,   17, 0x08,
     192,   17,   17,   17, 0x08,
     202,   17,   17,   17, 0x08,
     215,   17,   17,   17, 0x08,
     226,   17,   17,   17, 0x08,
     241,   17,   17,   17, 0x08,
     261,  255,   17,   17, 0x08,
     291,  255,   17,   17, 0x08,
     321,  314,   17,   17, 0x08,
     365,  353,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FeedReaderDialog[] = {
    "FeedReaderDialog\0\0settingsChanged()\0"
    "point\0feedTreeCustomPopupMenu(QPoint)\0"
    "item\0feedTreeItemActivated(QTreeWidgetItem*)\0"
    "feedTreeMiddleButtonClicked(QTreeWidgetItem*)\0"
    "openInNewTab()\0newFolder()\0newFeed()\0"
    "removeFeed()\0editFeed()\0activateFeed()\0"
    "processFeed()\0index\0messageTabCloseRequested(int)\0"
    "messageTabChanged(int)\0widget\0"
    "messageTabInfoChanged(QWidget*)\0"
    "feedId,type\0feedChanged(QString,int)\0"
};

void FeedReaderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FeedReaderDialog *_t = static_cast<FeedReaderDialog *>(_o);
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->feedTreeCustomPopupMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->feedTreeItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->feedTreeMiddleButtonClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->openInNewTab(); break;
        case 5: _t->newFolder(); break;
        case 6: _t->newFeed(); break;
        case 7: _t->removeFeed(); break;
        case 8: _t->editFeed(); break;
        case 9: _t->activateFeed(); break;
        case 10: _t->processFeed(); break;
        case 11: _t->messageTabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->messageTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->messageTabInfoChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 14: _t->feedChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FeedReaderDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FeedReaderDialog::staticMetaObject = {
    { &MainPage::staticMetaObject, qt_meta_stringdata_FeedReaderDialog,
      qt_meta_data_FeedReaderDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FeedReaderDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FeedReaderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FeedReaderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FeedReaderDialog))
        return static_cast<void*>(const_cast< FeedReaderDialog*>(this));
    return MainPage::qt_metacast(_clname);
}

int FeedReaderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
