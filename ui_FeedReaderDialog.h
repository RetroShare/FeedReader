/********************************************************************************
** Form generated from reading UI file 'FeedReaderDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDREADERDIALOG_H
#define UI_FEEDREADERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "gui/common/RSTabWidget.h"
#include "gui/common/RSTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_FeedReaderDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QFrame *feedFrame;
    QGridLayout *gridLayout;
    QFrame *titleBarFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *titleBarPixmap;
    QLabel *titleBarLabel;
    QSpacerItem *spacerItem;
    QToolButton *feedAddButton;
    QToolButton *feedProcessButton;
    RSTreeWidget *feedTreeWidget;
    RSTabWidget *messageTabWidget;

    void setupUi(QWidget *FeedReaderDialog)
    {
        if (FeedReaderDialog->objectName().isEmpty())
            FeedReaderDialog->setObjectName(QString::fromUtf8("FeedReaderDialog"));
        FeedReaderDialog->resize(738, 583);
        horizontalLayout_2 = new QHBoxLayout(FeedReaderDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(FeedReaderDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        feedFrame = new QFrame(splitter);
        feedFrame->setObjectName(QString::fromUtf8("feedFrame"));
        feedFrame->setBaseSize(QSize(300, 300));
        gridLayout = new QGridLayout(feedFrame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        titleBarFrame = new QFrame(feedFrame);
        titleBarFrame->setObjectName(QString::fromUtf8("titleBarFrame"));
        titleBarFrame->setFrameShape(QFrame::Box);
        titleBarFrame->setFrameShadow(QFrame::Sunken);
        horizontalLayout_4 = new QHBoxLayout(titleBarFrame);
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        titleBarPixmap = new QLabel(titleBarFrame);
        titleBarPixmap->setObjectName(QString::fromUtf8("titleBarPixmap"));
        titleBarPixmap->setPixmap(QPixmap(QString::fromUtf8(":/images/Feed.png")));

        horizontalLayout_4->addWidget(titleBarPixmap);

        titleBarLabel = new QLabel(titleBarFrame);
        titleBarLabel->setObjectName(QString::fromUtf8("titleBarLabel"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        titleBarLabel->setFont(font);

        horizontalLayout_4->addWidget(titleBarLabel);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(spacerItem);

        feedAddButton = new QToolButton(titleBarFrame);
        feedAddButton->setObjectName(QString::fromUtf8("feedAddButton"));
        feedAddButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/FeedAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        feedAddButton->setIcon(icon);
        feedAddButton->setAutoRaise(true);

        horizontalLayout_4->addWidget(feedAddButton);

        feedProcessButton = new QToolButton(titleBarFrame);
        feedProcessButton->setObjectName(QString::fromUtf8("feedProcessButton"));
        feedProcessButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/FeedProcess.png"), QSize(), QIcon::Normal, QIcon::Off);
        feedProcessButton->setIcon(icon1);
        feedProcessButton->setAutoRaise(true);

        horizontalLayout_4->addWidget(feedProcessButton);


        gridLayout->addWidget(titleBarFrame, 0, 0, 1, 1);

        feedTreeWidget = new RSTreeWidget(feedFrame);
        feedTreeWidget->setObjectName(QString::fromUtf8("feedTreeWidget"));
        QFont font1;
        font1.setPointSize(9);
        feedTreeWidget->setFont(font1);
        feedTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        feedTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        feedTreeWidget->setRootIsDecorated(false);
        feedTreeWidget->setHeaderHidden(true);

        gridLayout->addWidget(feedTreeWidget, 1, 0, 1, 1);

        splitter->addWidget(feedFrame);
        messageTabWidget = new RSTabWidget(splitter);
        messageTabWidget->setObjectName(QString::fromUtf8("messageTabWidget"));
        messageTabWidget->setTabsClosable(true);
        messageTabWidget->setMovable(true);
        splitter->addWidget(messageTabWidget);

        horizontalLayout_2->addWidget(splitter);


        retranslateUi(FeedReaderDialog);

        QMetaObject::connectSlotsByName(FeedReaderDialog);
    } // setupUi

    void retranslateUi(QWidget *FeedReaderDialog)
    {
        FeedReaderDialog->setWindowTitle(QString());
        titleBarPixmap->setText(QString());
        titleBarLabel->setText(QApplication::translate("FeedReaderDialog", "Feeds", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        feedAddButton->setToolTip(QApplication::translate("FeedReaderDialog", "Add new feed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        feedProcessButton->setToolTip(QApplication::translate("FeedReaderDialog", "Update feed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class FeedReaderDialog: public Ui_FeedReaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDREADERDIALOG_H
