/********************************************************************************
** Form generated from reading UI file 'PreviewFeedDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWFEEDDIALOG_H
#define UI_PREVIEWFEEDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextBrowser>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include "gui/common/RSPlainTextEdit.h"

QT_BEGIN_NAMESPACE

class Ui_PreviewFeedDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *titleFrame;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *textLayout;
    QLabel *nameLabel;
    QLabel *feedNameLabel;
    QLabel *feedInfoLabel;
    QLabel *transformationInfoLabel;
    QHBoxLayout *buttonLayout;
    QSpacerItem *buttonSpacerLeft;
    QPushButton *previousPushButton;
    QSpacerItem *buttonSpacerLeft1;
    QLabel *messageCountLabel;
    QSpacerItem *buttonSpacerRight1;
    QPushButton *nextPushButton;
    QSpacerItem *buttonSpacerRight;
    QLabel *transformationTypeLabel;
    QComboBox *transformationTypeComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *structureButton;
    QHBoxLayout *titleLayout;
    QLabel *titleLabel;
    QLabel *msgTitle;
    QSplitter *splitter;
    QFrame *msgFrame;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *msgTextOrg;
    QTextBrowser *msgText;
    QFrame *structureTreeFrame;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *structureTreeWidgetOrg;
    QTreeWidget *structureTreeWidget;
    QFrame *transformationFrame;
    QVBoxLayout *verticalLayout;
    QFrame *xsltFrame;
    QVBoxLayout *verticalLayout_3;
    RSPlainTextEdit *xsltTextEdit;
    QFrame *xpathFrame;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *xpathUserLayout;
    QLabel *xpathUseLabel;
    QListWidget *xpathUseListWidget;
    QVBoxLayout *xpathRemoveLayout;
    QLabel *xpathRemoveLabel;
    QListWidget *xpathRemoveListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreviewFeedDialog)
    {
        if (PreviewFeedDialog->objectName().isEmpty())
            PreviewFeedDialog->setObjectName(QString::fromUtf8("PreviewFeedDialog"));
        PreviewFeedDialog->resize(800, 521);
        PreviewFeedDialog->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(PreviewFeedDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        titleFrame = new QFrame(PreviewFeedDialog);
        titleFrame->setObjectName(QString::fromUtf8("titleFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleFrame->sizePolicy().hasHeightForWidth());
        titleFrame->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(titleFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        textLayout = new QGridLayout();
        textLayout->setObjectName(QString::fromUtf8("textLayout"));
        textLayout->setSizeConstraint(QLayout::SetMaximumSize);
        nameLabel = new QLabel(titleFrame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy1);

        textLayout->addWidget(nameLabel, 0, 0, 1, 1);

        feedNameLabel = new QLabel(titleFrame);
        feedNameLabel->setObjectName(QString::fromUtf8("feedNameLabel"));
        feedNameLabel->setWordWrap(true);

        textLayout->addWidget(feedNameLabel, 0, 1, 1, 1);

        feedInfoLabel = new QLabel(titleFrame);
        feedInfoLabel->setObjectName(QString::fromUtf8("feedInfoLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        feedInfoLabel->setPalette(palette);
        feedInfoLabel->setText(QString::fromUtf8("Feed information"));
        feedInfoLabel->setWordWrap(true);
        feedInfoLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        textLayout->addWidget(feedInfoLabel, 1, 1, 1, 1);

        transformationInfoLabel = new QLabel(titleFrame);
        transformationInfoLabel->setObjectName(QString::fromUtf8("transformationInfoLabel"));
        transformationInfoLabel->setMaximumSize(QSize(16777215, 100));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        transformationInfoLabel->setPalette(palette1);
        transformationInfoLabel->setText(QString::fromUtf8("Transformation information"));
        transformationInfoLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        textLayout->addWidget(transformationInfoLabel, 2, 1, 1, 1);


        verticalLayout_4->addLayout(textLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacerLeft);

        previousPushButton = new QPushButton(titleFrame);
        previousPushButton->setObjectName(QString::fromUtf8("previousPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(previousPushButton->sizePolicy().hasHeightForWidth());
        previousPushButton->setSizePolicy(sizePolicy2);

        buttonLayout->addWidget(previousPushButton);

        buttonSpacerLeft1 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacerLeft1);

        messageCountLabel = new QLabel(titleFrame);
        messageCountLabel->setObjectName(QString::fromUtf8("messageCountLabel"));
        sizePolicy1.setHeightForWidth(messageCountLabel->sizePolicy().hasHeightForWidth());
        messageCountLabel->setSizePolicy(sizePolicy1);

        buttonLayout->addWidget(messageCountLabel);

        buttonSpacerRight1 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacerRight1);

        nextPushButton = new QPushButton(titleFrame);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));
        sizePolicy2.setHeightForWidth(nextPushButton->sizePolicy().hasHeightForWidth());
        nextPushButton->setSizePolicy(sizePolicy2);

        buttonLayout->addWidget(nextPushButton);

        buttonSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacerRight);

        transformationTypeLabel = new QLabel(titleFrame);
        transformationTypeLabel->setObjectName(QString::fromUtf8("transformationTypeLabel"));

        buttonLayout->addWidget(transformationTypeLabel);

        transformationTypeComboBox = new QComboBox(titleFrame);
        transformationTypeComboBox->setObjectName(QString::fromUtf8("transformationTypeComboBox"));

        buttonLayout->addWidget(transformationTypeComboBox);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        structureButton = new QPushButton(titleFrame);
        structureButton->setObjectName(QString::fromUtf8("structureButton"));
        structureButton->setCheckable(true);

        buttonLayout->addWidget(structureButton);


        verticalLayout_4->addLayout(buttonLayout);

        titleLayout = new QHBoxLayout();
        titleLayout->setObjectName(QString::fromUtf8("titleLayout"));
        titleLabel = new QLabel(titleFrame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        sizePolicy1.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy1);

        titleLayout->addWidget(titleLabel);

        msgTitle = new QLabel(titleFrame);
        msgTitle->setObjectName(QString::fromUtf8("msgTitle"));
        msgTitle->setMinimumSize(QSize(0, 24));
        msgTitle->setWordWrap(true);
        msgTitle->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        titleLayout->addWidget(msgTitle);


        verticalLayout_4->addLayout(titleLayout);


        verticalLayout_2->addWidget(titleFrame);

        splitter = new QSplitter(PreviewFeedDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setFrameShape(QFrame::StyledPanel);
        splitter->setFrameShadow(QFrame::Raised);
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        msgFrame = new QFrame(splitter);
        msgFrame->setObjectName(QString::fromUtf8("msgFrame"));
        horizontalLayout = new QHBoxLayout(msgFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        msgTextOrg = new QTextBrowser(msgFrame);
        msgTextOrg->setObjectName(QString::fromUtf8("msgTextOrg"));

        horizontalLayout->addWidget(msgTextOrg);

        msgText = new QTextBrowser(msgFrame);
        msgText->setObjectName(QString::fromUtf8("msgText"));

        horizontalLayout->addWidget(msgText);

        splitter->addWidget(msgFrame);
        structureTreeFrame = new QFrame(splitter);
        structureTreeFrame->setObjectName(QString::fromUtf8("structureTreeFrame"));
        horizontalLayout_2 = new QHBoxLayout(structureTreeFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        structureTreeWidgetOrg = new QTreeWidget(structureTreeFrame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        structureTreeWidgetOrg->setHeaderItem(__qtreewidgetitem);
        structureTreeWidgetOrg->setObjectName(QString::fromUtf8("structureTreeWidgetOrg"));
        structureTreeWidgetOrg->setWordWrap(true);
        structureTreeWidgetOrg->header()->setVisible(false);
        structureTreeWidgetOrg->header()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(structureTreeWidgetOrg);

        structureTreeWidget = new QTreeWidget(structureTreeFrame);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        structureTreeWidget->setHeaderItem(__qtreewidgetitem1);
        structureTreeWidget->setObjectName(QString::fromUtf8("structureTreeWidget"));
        structureTreeWidget->setWordWrap(true);
        structureTreeWidget->header()->setVisible(false);
        structureTreeWidget->header()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(structureTreeWidget);

        splitter->addWidget(structureTreeFrame);
        transformationFrame = new QFrame(splitter);
        transformationFrame->setObjectName(QString::fromUtf8("transformationFrame"));
        sizePolicy.setHeightForWidth(transformationFrame->sizePolicy().hasHeightForWidth());
        transformationFrame->setSizePolicy(sizePolicy);
        transformationFrame->setFrameShape(QFrame::StyledPanel);
        transformationFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(transformationFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        xsltFrame = new QFrame(transformationFrame);
        xsltFrame->setObjectName(QString::fromUtf8("xsltFrame"));
        xsltFrame->setFrameShape(QFrame::StyledPanel);
        xsltFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(xsltFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        xsltTextEdit = new RSPlainTextEdit(xsltFrame);
        xsltTextEdit->setObjectName(QString::fromUtf8("xsltTextEdit"));

        verticalLayout_3->addWidget(xsltTextEdit);


        verticalLayout->addWidget(xsltFrame);

        xpathFrame = new QFrame(transformationFrame);
        xpathFrame->setObjectName(QString::fromUtf8("xpathFrame"));
        xpathFrame->setFrameShape(QFrame::StyledPanel);
        xpathFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(xpathFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        xpathUserLayout = new QVBoxLayout();
        xpathUserLayout->setObjectName(QString::fromUtf8("xpathUserLayout"));
        xpathUseLabel = new QLabel(xpathFrame);
        xpathUseLabel->setObjectName(QString::fromUtf8("xpathUseLabel"));

        xpathUserLayout->addWidget(xpathUseLabel);

        xpathUseListWidget = new QListWidget(xpathFrame);
        xpathUseListWidget->setObjectName(QString::fromUtf8("xpathUseListWidget"));
        xpathUseListWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        xpathUseListWidget->setDragDropMode(QAbstractItemView::InternalMove);

        xpathUserLayout->addWidget(xpathUseListWidget);


        horizontalLayout_3->addLayout(xpathUserLayout);

        xpathRemoveLayout = new QVBoxLayout();
        xpathRemoveLayout->setObjectName(QString::fromUtf8("xpathRemoveLayout"));
        xpathRemoveLabel = new QLabel(xpathFrame);
        xpathRemoveLabel->setObjectName(QString::fromUtf8("xpathRemoveLabel"));

        xpathRemoveLayout->addWidget(xpathRemoveLabel);

        xpathRemoveListWidget = new QListWidget(xpathFrame);
        xpathRemoveListWidget->setObjectName(QString::fromUtf8("xpathRemoveListWidget"));
        xpathRemoveListWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        xpathRemoveListWidget->setDragDropMode(QAbstractItemView::InternalMove);

        xpathRemoveLayout->addWidget(xpathRemoveListWidget);


        horizontalLayout_3->addLayout(xpathRemoveLayout);


        verticalLayout->addWidget(xpathFrame);

        splitter->addWidget(transformationFrame);

        verticalLayout_2->addWidget(splitter);

        buttonBox = new QDialogButtonBox(PreviewFeedDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        titleFrame->raise();
        splitter->raise();
        buttonBox->raise();

        retranslateUi(PreviewFeedDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreviewFeedDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreviewFeedDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreviewFeedDialog);
    } // setupUi

    void retranslateUi(QDialog *PreviewFeedDialog)
    {
        PreviewFeedDialog->setWindowTitle(QApplication::translate("PreviewFeedDialog", "Preview", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("PreviewFeedDialog", "Name:", 0, QApplication::UnicodeUTF8));
        feedNameLabel->setText(QApplication::translate("PreviewFeedDialog", "Feed name", 0, QApplication::UnicodeUTF8));
        previousPushButton->setText(QApplication::translate("PreviewFeedDialog", "Previous", 0, QApplication::UnicodeUTF8));
        messageCountLabel->setText(QApplication::translate("PreviewFeedDialog", "0/0", 0, QApplication::UnicodeUTF8));
        nextPushButton->setText(QApplication::translate("PreviewFeedDialog", "Next", 0, QApplication::UnicodeUTF8));
        transformationTypeLabel->setText(QApplication::translate("PreviewFeedDialog", "Transformation type", 0, QApplication::UnicodeUTF8));
        structureButton->setText(QApplication::translate("PreviewFeedDialog", "Structure", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("PreviewFeedDialog", "Title:", 0, QApplication::UnicodeUTF8));
        xpathUseLabel->setText(QApplication::translate("PreviewFeedDialog", "XPath use", 0, QApplication::UnicodeUTF8));
        xpathRemoveLabel->setText(QApplication::translate("PreviewFeedDialog", "XPath remove", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreviewFeedDialog: public Ui_PreviewFeedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWFEEDDIALOG_H
