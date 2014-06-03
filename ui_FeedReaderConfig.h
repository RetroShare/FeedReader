/********************************************************************************
** Form generated from reading UI file 'FeedReaderConfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDREADERCONFIG_H
#define UI_FEEDREADERCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedReaderConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *updateGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *updateIntervalLabel;
    QSpinBox *updateIntervalSpinBox;
    QGroupBox *storageTimeGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *storageTimeLabel;
    QSpinBox *storageTimeSpinBox;
    QGroupBox *proxyGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *useProxyCheckBox;
    QLabel *serverLabel;
    QLineEdit *proxyAddressLineEdit;
    QSpinBox *proxyPortSpinBox;
    QLabel *potLabel;
    QGroupBox *miscGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *openAllInNewTabCheckBox;
    QCheckBox *setMsgToReadOnActivate;
    QCheckBox *saveInBackgroundCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FeedReaderConfig)
    {
        if (FeedReaderConfig->objectName().isEmpty())
            FeedReaderConfig->setObjectName(QString::fromUtf8("FeedReaderConfig"));
        FeedReaderConfig->resize(508, 378);
        verticalLayout = new QVBoxLayout(FeedReaderConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        updateGroupBox = new QGroupBox(FeedReaderConfig);
        updateGroupBox->setObjectName(QString::fromUtf8("updateGroupBox"));
        horizontalLayout = new QHBoxLayout(updateGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        updateIntervalLabel = new QLabel(updateGroupBox);
        updateIntervalLabel->setObjectName(QString::fromUtf8("updateIntervalLabel"));

        horizontalLayout->addWidget(updateIntervalLabel);

        updateIntervalSpinBox = new QSpinBox(updateGroupBox);
        updateIntervalSpinBox->setObjectName(QString::fromUtf8("updateIntervalSpinBox"));
        updateIntervalSpinBox->setMaximumSize(QSize(50, 16777215));
        updateIntervalSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(updateIntervalSpinBox);


        verticalLayout->addWidget(updateGroupBox);

        storageTimeGroupBox = new QGroupBox(FeedReaderConfig);
        storageTimeGroupBox->setObjectName(QString::fromUtf8("storageTimeGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(storageTimeGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        storageTimeLabel = new QLabel(storageTimeGroupBox);
        storageTimeLabel->setObjectName(QString::fromUtf8("storageTimeLabel"));

        horizontalLayout_2->addWidget(storageTimeLabel);

        storageTimeSpinBox = new QSpinBox(storageTimeGroupBox);
        storageTimeSpinBox->setObjectName(QString::fromUtf8("storageTimeSpinBox"));
        storageTimeSpinBox->setMaximumSize(QSize(50, 16777215));
        storageTimeSpinBox->setMaximum(999999999);

        horizontalLayout_2->addWidget(storageTimeSpinBox);


        verticalLayout->addWidget(storageTimeGroupBox);

        proxyGroupBox = new QGroupBox(FeedReaderConfig);
        proxyGroupBox->setObjectName(QString::fromUtf8("proxyGroupBox"));
        gridLayout = new QGridLayout(proxyGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        useProxyCheckBox = new QCheckBox(proxyGroupBox);
        useProxyCheckBox->setObjectName(QString::fromUtf8("useProxyCheckBox"));

        gridLayout->addWidget(useProxyCheckBox, 0, 0, 1, 4);

        serverLabel = new QLabel(proxyGroupBox);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));

        gridLayout->addWidget(serverLabel, 1, 0, 1, 1);

        proxyAddressLineEdit = new QLineEdit(proxyGroupBox);
        proxyAddressLineEdit->setObjectName(QString::fromUtf8("proxyAddressLineEdit"));

        gridLayout->addWidget(proxyAddressLineEdit, 1, 1, 1, 1);

        proxyPortSpinBox = new QSpinBox(proxyGroupBox);
        proxyPortSpinBox->setObjectName(QString::fromUtf8("proxyPortSpinBox"));
        proxyPortSpinBox->setMaximum(65535);

        gridLayout->addWidget(proxyPortSpinBox, 1, 3, 1, 1);

        potLabel = new QLabel(proxyGroupBox);
        potLabel->setObjectName(QString::fromUtf8("potLabel"));

        gridLayout->addWidget(potLabel, 1, 2, 1, 1);


        verticalLayout->addWidget(proxyGroupBox);

        miscGroupBox = new QGroupBox(FeedReaderConfig);
        miscGroupBox->setObjectName(QString::fromUtf8("miscGroupBox"));
        gridLayout_2 = new QGridLayout(miscGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        openAllInNewTabCheckBox = new QCheckBox(miscGroupBox);
        openAllInNewTabCheckBox->setObjectName(QString::fromUtf8("openAllInNewTabCheckBox"));

        gridLayout_2->addWidget(openAllInNewTabCheckBox, 2, 0, 1, 1);

        setMsgToReadOnActivate = new QCheckBox(miscGroupBox);
        setMsgToReadOnActivate->setObjectName(QString::fromUtf8("setMsgToReadOnActivate"));

        gridLayout_2->addWidget(setMsgToReadOnActivate, 1, 0, 1, 1);

        saveInBackgroundCheckBox = new QCheckBox(miscGroupBox);
        saveInBackgroundCheckBox->setObjectName(QString::fromUtf8("saveInBackgroundCheckBox"));

        gridLayout_2->addWidget(saveInBackgroundCheckBox, 0, 0, 1, 1);


        verticalLayout->addWidget(miscGroupBox);

        verticalSpacer = new QSpacerItem(20, 301, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(updateIntervalSpinBox, storageTimeSpinBox);
        QWidget::setTabOrder(storageTimeSpinBox, useProxyCheckBox);
        QWidget::setTabOrder(useProxyCheckBox, proxyAddressLineEdit);
        QWidget::setTabOrder(proxyAddressLineEdit, proxyPortSpinBox);
        QWidget::setTabOrder(proxyPortSpinBox, saveInBackgroundCheckBox);
        QWidget::setTabOrder(saveInBackgroundCheckBox, setMsgToReadOnActivate);
        QWidget::setTabOrder(setMsgToReadOnActivate, openAllInNewTabCheckBox);

        retranslateUi(FeedReaderConfig);

        QMetaObject::connectSlotsByName(FeedReaderConfig);
    } // setupUi

    void retranslateUi(QWidget *FeedReaderConfig)
    {
        FeedReaderConfig->setWindowTitle(QApplication::translate("FeedReaderConfig", "Form", 0, QApplication::UnicodeUTF8));
        updateGroupBox->setTitle(QApplication::translate("FeedReaderConfig", "Update", 0, QApplication::UnicodeUTF8));
        updateIntervalLabel->setText(QApplication::translate("FeedReaderConfig", "Interval in minutes (0 = manual)", 0, QApplication::UnicodeUTF8));
        storageTimeGroupBox->setTitle(QApplication::translate("FeedReaderConfig", "Storage time", 0, QApplication::UnicodeUTF8));
        storageTimeLabel->setText(QApplication::translate("FeedReaderConfig", "Days (0 = off)", 0, QApplication::UnicodeUTF8));
        proxyGroupBox->setTitle(QApplication::translate("FeedReaderConfig", "Proxy", 0, QApplication::UnicodeUTF8));
        useProxyCheckBox->setText(QApplication::translate("FeedReaderConfig", "Use proxy", 0, QApplication::UnicodeUTF8));
        serverLabel->setText(QApplication::translate("FeedReaderConfig", "Server", 0, QApplication::UnicodeUTF8));
        potLabel->setText(QApplication::translate("FeedReaderConfig", ":", 0, QApplication::UnicodeUTF8));
        miscGroupBox->setTitle(QApplication::translate("FeedReaderConfig", "Misc", 0, QApplication::UnicodeUTF8));
        openAllInNewTabCheckBox->setText(QApplication::translate("FeedReaderConfig", "Open all feeds in new tab", 0, QApplication::UnicodeUTF8));
        setMsgToReadOnActivate->setText(QApplication::translate("FeedReaderConfig", "Set message to read on activate", 0, QApplication::UnicodeUTF8));
        saveInBackgroundCheckBox->setText(QApplication::translate("FeedReaderConfig", "Save configuration in background (for slow systems, more memory needed)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FeedReaderConfig: public Ui_FeedReaderConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDREADERCONFIG_H
