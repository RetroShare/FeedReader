/********************************************************************************
** Form generated from reading UI file 'FeedReaderFeedItem.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDREADERFEEDITEM_H
#define UI_FEEDREADERFEEDITEM_H

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
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedReaderFeedItem
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *logoLabel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *feedIconLabel;
    QLabel *titleLabel;
    QLabel *dateTimeLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *msgTitleLabel;
    QToolButton *linkButton;
    QPushButton *expandButton;
    QPushButton *readAndClearButton;
    QPushButton *clearButton;
    QFrame *expandFrame;
    QVBoxLayout *vboxLayout;
    QFrame *msgFrame;
    QVBoxLayout *verticalLayout;
    QLabel *descriptionLabel;

    void setupUi(QWidget *FeedReaderFeedItem)
    {
        if (FeedReaderFeedItem->objectName().isEmpty())
            FeedReaderFeedItem->setObjectName(QString::fromUtf8("FeedReaderFeedItem"));
        FeedReaderFeedItem->resize(629, 121);
        gridLayout_4 = new QGridLayout(FeedReaderFeedItem);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(6);
        gridLayout_4->setVerticalSpacing(1);
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        frame = new QFrame(FeedReaderFeedItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        logoLabel = new QLabel(frame);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setMaximumSize(QSize(48, 48));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/FeedReader.png")));
        logoLabel->setScaledContents(true);

        horizontalLayout_6->addWidget(logoLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        feedIconLabel = new QLabel(frame);
        feedIconLabel->setObjectName(QString::fromUtf8("feedIconLabel"));
        feedIconLabel->setMinimumSize(QSize(16, 16));
        feedIconLabel->setMaximumSize(QSize(16, 16));
        feedIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/Feed.png")));
        feedIconLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(feedIconLabel);

        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setText(QString::fromUtf8("Feed name"));

        horizontalLayout_3->addWidget(titleLabel);

        dateTimeLabel = new QLabel(frame);
        dateTimeLabel->setObjectName(QString::fromUtf8("dateTimeLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferAntialias);
        dateTimeLabel->setFont(font1);
        dateTimeLabel->setText(QString::fromUtf8("DateTime"));

        horizontalLayout_3->addWidget(dateTimeLabel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        msgTitleLabel = new QLabel(frame);
        msgTitleLabel->setObjectName(QString::fromUtf8("msgTitleLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(msgTitleLabel->sizePolicy().hasHeightForWidth());
        msgTitleLabel->setSizePolicy(sizePolicy2);
        msgTitleLabel->setMaximumSize(QSize(16777215, 60));
        msgTitleLabel->setText(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#666666;\">Short Description</span></p></body></html>"));
        msgTitleLabel->setWordWrap(true);
        msgTitleLabel->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(msgTitleLabel);

        linkButton = new QToolButton(frame);
        linkButton->setObjectName(QString::fromUtf8("linkButton"));
        linkButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Link.png"), QSize(), QIcon::Normal, QIcon::Off);
        linkButton->setIcon(icon);
        linkButton->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout_2->addWidget(linkButton);

        expandButton = new QPushButton(frame);
        expandButton->setObjectName(QString::fromUtf8("expandButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(expandButton->sizePolicy().hasHeightForWidth());
        expandButton->setSizePolicy(sizePolicy3);
        expandButton->setMaximumSize(QSize(24, 16777215));
        expandButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/edit_add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        expandButton->setIcon(icon1);

        horizontalLayout_2->addWidget(expandButton);

        readAndClearButton = new QPushButton(frame);
        readAndClearButton->setObjectName(QString::fromUtf8("readAndClearButton"));
        sizePolicy3.setHeightForWidth(readAndClearButton->sizePolicy().hasHeightForWidth());
        readAndClearButton->setSizePolicy(sizePolicy3);
        readAndClearButton->setMaximumSize(QSize(24, 16777215));
        readAndClearButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        readAndClearButton->setIcon(icon2);

        horizontalLayout_2->addWidget(readAndClearButton);

        clearButton = new QPushButton(frame);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy3.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy3);
        clearButton->setMaximumSize(QSize(24, 16777215));
        clearButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/close_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon3);

        horizontalLayout_2->addWidget(clearButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        expandFrame = new QFrame(frame);
        expandFrame->setObjectName(QString::fromUtf8("expandFrame"));
        vboxLayout = new QVBoxLayout(expandFrame);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        msgFrame = new QFrame(expandFrame);
        msgFrame->setObjectName(QString::fromUtf8("msgFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(msgFrame->sizePolicy().hasHeightForWidth());
        msgFrame->setSizePolicy(sizePolicy4);
        msgFrame->setFrameShape(QFrame::Box);
        msgFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(msgFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        descriptionLabel = new QLabel(msgFrame);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        sizePolicy1.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel->setMargin(6);
        descriptionLabel->setIndent(-1);
        descriptionLabel->setOpenExternalLinks(true);
        descriptionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(descriptionLabel);


        vboxLayout->addWidget(msgFrame);


        verticalLayout_3->addWidget(expandFrame);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(FeedReaderFeedItem);

        QMetaObject::connectSlotsByName(FeedReaderFeedItem);
    } // setupUi

    void retranslateUi(QWidget *FeedReaderFeedItem)
    {
#ifndef QT_NO_TOOLTIP
        expandButton->setToolTip(QApplication::translate("FeedReaderFeedItem", "Expand", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        readAndClearButton->setToolTip(QApplication::translate("FeedReaderFeedItem", "Set as read and remove item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("FeedReaderFeedItem", "Remove Item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(FeedReaderFeedItem);
    } // retranslateUi

};

namespace Ui {
    class FeedReaderFeedItem: public Ui_FeedReaderFeedItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDREADERFEEDITEM_H
