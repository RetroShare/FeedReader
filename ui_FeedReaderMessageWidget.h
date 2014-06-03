/********************************************************************************
** Form generated from reading UI file 'FeedReaderMessageWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDREADERMESSAGEWIDGET_H
#define UI_FEEDREADERMESSAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <gui/common/LineEditClear.h>
#include "gui/common/RSTextBrowser.h"
#include "gui/common/RSTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_FeedReaderMessageWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *msgSplitter;
    QWidget *layoutWidget;
    QGridLayout *msgFrame;
    QFrame *toolBarFrame;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *msgReadButton;
    QToolButton *msgUnreadButton;
    QToolButton *msgReadAllButton;
    QToolButton *msgRemoveButton;
    QToolButton *feedProcessButton;
    LineEditClear *filterLineEdit;
    RSTreeWidget *msgTreeWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *msgTitle;
    QToolButton *linkButton;
    QPushButton *expandButton;
    RSTextBrowser *msgText;

    void setupUi(QWidget *FeedReaderMessageWidget)
    {
        if (FeedReaderMessageWidget->objectName().isEmpty())
            FeedReaderMessageWidget->setObjectName(QString::fromUtf8("FeedReaderMessageWidget"));
        FeedReaderMessageWidget->resize(658, 414);
        verticalLayout = new QVBoxLayout(FeedReaderMessageWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        msgSplitter = new QSplitter(FeedReaderMessageWidget);
        msgSplitter->setObjectName(QString::fromUtf8("msgSplitter"));
        msgSplitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(msgSplitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        msgFrame = new QGridLayout(layoutWidget);
        msgFrame->setObjectName(QString::fromUtf8("msgFrame"));
        msgFrame->setContentsMargins(0, 0, 0, 0);
        toolBarFrame = new QFrame(layoutWidget);
        toolBarFrame->setObjectName(QString::fromUtf8("toolBarFrame"));
        toolBarFrame->setFrameShape(QFrame::Box);
        toolBarFrame->setFrameShadow(QFrame::Sunken);
        horizontalLayout_5 = new QHBoxLayout(toolBarFrame);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        msgReadButton = new QToolButton(toolBarFrame);
        msgReadButton->setObjectName(QString::fromUtf8("msgReadButton"));
        msgReadButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/FeedMsgRead.png"), QSize(), QIcon::Normal, QIcon::Off);
        msgReadButton->setIcon(icon);
        msgReadButton->setAutoRaise(true);

        horizontalLayout_5->addWidget(msgReadButton);

        msgUnreadButton = new QToolButton(toolBarFrame);
        msgUnreadButton->setObjectName(QString::fromUtf8("msgUnreadButton"));
        msgUnreadButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/FeedMsgUnread.png"), QSize(), QIcon::Normal, QIcon::Off);
        msgUnreadButton->setIcon(icon1);
        msgUnreadButton->setAutoRaise(true);

        horizontalLayout_5->addWidget(msgUnreadButton);

        msgReadAllButton = new QToolButton(toolBarFrame);
        msgReadAllButton->setObjectName(QString::fromUtf8("msgReadAllButton"));
        msgReadAllButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/FeedMsgReadAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        msgReadAllButton->setIcon(icon2);
        msgReadAllButton->setAutoRaise(true);

        horizontalLayout_5->addWidget(msgReadAllButton);

        msgRemoveButton = new QToolButton(toolBarFrame);
        msgRemoveButton->setObjectName(QString::fromUtf8("msgRemoveButton"));
        msgRemoveButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/FeedMsgDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        msgRemoveButton->setIcon(icon3);
        msgRemoveButton->setAutoRaise(true);

        horizontalLayout_5->addWidget(msgRemoveButton);

        feedProcessButton = new QToolButton(toolBarFrame);
        feedProcessButton->setObjectName(QString::fromUtf8("feedProcessButton"));
        feedProcessButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/FeedProcess.png"), QSize(), QIcon::Normal, QIcon::Off);
        feedProcessButton->setIcon(icon4);
        feedProcessButton->setAutoRaise(true);

        horizontalLayout_5->addWidget(feedProcessButton);

        filterLineEdit = new LineEditClear(toolBarFrame);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));

        horizontalLayout_5->addWidget(filterLineEdit);


        msgFrame->addWidget(toolBarFrame, 1, 0, 1, 1);

        msgTreeWidget = new RSTreeWidget(layoutWidget);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/message-state-header.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(1, icon5);
        msgTreeWidget->setHeaderItem(__qtreewidgetitem);
        msgTreeWidget->setObjectName(QString::fromUtf8("msgTreeWidget"));
        QFont font;
        font.setPointSize(9);
        msgTreeWidget->setFont(font);
        msgTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        msgTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msgTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        msgTreeWidget->setSortingEnabled(true);
        msgTreeWidget->setAllColumnsShowFocus(true);

        msgFrame->addWidget(msgTreeWidget, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, -1, -1, -1);
        msgTitle = new QLabel(layoutWidget);
        msgTitle->setObjectName(QString::fromUtf8("msgTitle"));
        msgTitle->setWordWrap(true);
        msgTitle->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(msgTitle);

        linkButton = new QToolButton(layoutWidget);
        linkButton->setObjectName(QString::fromUtf8("linkButton"));
        linkButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Link.png"), QSize(), QIcon::Normal, QIcon::Off);
        linkButton->setIcon(icon6);
        linkButton->setPopupMode(QToolButton::MenuButtonPopup);
        linkButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(linkButton);

        expandButton = new QPushButton(layoutWidget);
        expandButton->setObjectName(QString::fromUtf8("expandButton"));
        expandButton->setMaximumSize(QSize(24, 24));
        expandButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/edit_remove24.png"), QSize(), QIcon::Normal, QIcon::Off);
        expandButton->setIcon(icon7);
        expandButton->setCheckable(true);
        expandButton->setChecked(true);

        horizontalLayout_3->addWidget(expandButton);


        msgFrame->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        msgSplitter->addWidget(layoutWidget);
        msgText = new RSTextBrowser(msgSplitter);
        msgText->setObjectName(QString::fromUtf8("msgText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(msgText->sizePolicy().hasHeightForWidth());
        msgText->setSizePolicy(sizePolicy);
        msgText->setFont(font);
        msgText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        msgSplitter->addWidget(msgText);

        verticalLayout->addWidget(msgSplitter);


        retranslateUi(FeedReaderMessageWidget);

        QMetaObject::connectSlotsByName(FeedReaderMessageWidget);
    } // setupUi

    void retranslateUi(QWidget *FeedReaderMessageWidget)
    {
        FeedReaderMessageWidget->setWindowTitle(QApplication::translate("FeedReaderMessageWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        msgReadButton->setToolTip(QApplication::translate("FeedReaderMessageWidget", "Mark messages as read", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        msgReadButton->setText(QApplication::translate("FeedReaderMessageWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        msgUnreadButton->setToolTip(QApplication::translate("FeedReaderMessageWidget", "Mark messages as unread", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        msgReadAllButton->setToolTip(QApplication::translate("FeedReaderMessageWidget", "Mark all messages as read", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        msgRemoveButton->setToolTip(QApplication::translate("FeedReaderMessageWidget", "Remove messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        feedProcessButton->setToolTip(QApplication::translate("FeedReaderMessageWidget", "Update feed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterLineEdit->setToolTip(QApplication::translate("FeedReaderMessageWidget", "Search forums", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = msgTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("FeedReaderMessageWidget", "Author", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("FeedReaderMessageWidget", "Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("FeedReaderMessageWidget", "Title", 0, QApplication::UnicodeUTF8));
        expandButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FeedReaderMessageWidget: public Ui_FeedReaderMessageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDREADERMESSAGEWIDGET_H
