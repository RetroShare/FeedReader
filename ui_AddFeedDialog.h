/********************************************************************************
** Form generated from reading UI file 'AddFeedDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFEEDDIALOG_H
#define UI_ADDFEEDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include "gui/common/HeaderFrame.h"

QT_BEGIN_NAMESPACE

class Ui_AddFeedDialog
{
public:
    QVBoxLayout *verticalLayout;
    HeaderFrame *headerFrame;
    QFrame *frame;
    QGridLayout *gridLayout_7;
    QGroupBox *typeGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *typeForumRadio;
    QComboBox *forumComboBox;
    QLabel *forumNameLabel;
    QRadioButton *typeLocalRadio;
    QGroupBox *authenticationGroupBox;
    QGridLayout *gridLayout_4;
    QCheckBox *useAuthenticationCheckBox;
    QLabel *userLabel;
    QLabel *passwordLabel;
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;
    QGroupBox *storageTimeGroupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *useStandardStorageTimeCheckBox;
    QLabel *storageTimeLabel;
    QSpinBox *storageTimeSpinBox;
    QGroupBox *proxyGroupBox;
    QGridLayout *gridLayout_6;
    QCheckBox *useStandardProxyCheckBox;
    QLabel *serverLabel;
    QLineEdit *proxyAddressLineEdit;
    QLabel *portLabel;
    QSpinBox *proxyPortSpinBox;
    QGroupBox *updateInteralGroupBox;
    QGridLayout *gridLayout_5;
    QCheckBox *useStandardUpdateInterval;
    QLabel *updateIntervalLabel;
    QSpinBox *updateIntervalSpinBox;
    QHBoxLayout *lastUpdateLayout;
    QLabel *lastUpdateLabel;
    QLabel *lastUpdate;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *descriptionLayout;
    QLabel *descriptionLabel;
    QPlainTextEdit *descriptionPlainTextEdit;
    QGridLayout *nameLayout;
    QLabel *urlLabel;
    QLineEdit *urlLineEdit;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *transformationTypeLabel;
    QPushButton *previewButton;
    QGroupBox *flagGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *activatedCheckBox;
    QCheckBox *useInfoFromFeedCheckBox;
    QCheckBox *updateForumInfoCheckBox;
    QCheckBox *embedImagesCheckBox;
    QCheckBox *saveCompletePageCheckBox;

    void setupUi(QDialog *AddFeedDialog)
    {
        if (AddFeedDialog->objectName().isEmpty())
            AddFeedDialog->setObjectName(QString::fromUtf8("AddFeedDialog"));
        AddFeedDialog->resize(715, 605);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/rstray3.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddFeedDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AddFeedDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        headerFrame = new HeaderFrame(AddFeedDialog);
        headerFrame->setObjectName(QString::fromUtf8("headerFrame"));

        verticalLayout->addWidget(headerFrame);

        frame = new QFrame(AddFeedDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        typeGroupBox = new QGroupBox(frame);
        typeGroupBox->setObjectName(QString::fromUtf8("typeGroupBox"));
        verticalLayout_3 = new QVBoxLayout(typeGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        typeForumRadio = new QRadioButton(typeGroupBox);
        typeForumRadio->setObjectName(QString::fromUtf8("typeForumRadio"));

        horizontalLayout_2->addWidget(typeForumRadio);

        forumComboBox = new QComboBox(typeGroupBox);
        forumComboBox->setObjectName(QString::fromUtf8("forumComboBox"));

        horizontalLayout_2->addWidget(forumComboBox);

        forumNameLabel = new QLabel(typeGroupBox);
        forumNameLabel->setObjectName(QString::fromUtf8("forumNameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(forumNameLabel->sizePolicy().hasHeightForWidth());
        forumNameLabel->setSizePolicy(sizePolicy);
        forumNameLabel->setText(QString::fromUtf8("Forum name"));

        horizontalLayout_2->addWidget(forumNameLabel);


        verticalLayout_3->addLayout(horizontalLayout_2);

        typeLocalRadio = new QRadioButton(typeGroupBox);
        typeLocalRadio->setObjectName(QString::fromUtf8("typeLocalRadio"));

        verticalLayout_3->addWidget(typeLocalRadio);


        gridLayout_7->addWidget(typeGroupBox, 3, 0, 1, 1);

        authenticationGroupBox = new QGroupBox(frame);
        authenticationGroupBox->setObjectName(QString::fromUtf8("authenticationGroupBox"));
        gridLayout_4 = new QGridLayout(authenticationGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        useAuthenticationCheckBox = new QCheckBox(authenticationGroupBox);
        useAuthenticationCheckBox->setObjectName(QString::fromUtf8("useAuthenticationCheckBox"));

        gridLayout_4->addWidget(useAuthenticationCheckBox, 0, 0, 1, 2);

        userLabel = new QLabel(authenticationGroupBox);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        gridLayout_4->addWidget(userLabel, 1, 0, 1, 1);

        passwordLabel = new QLabel(authenticationGroupBox);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        gridLayout_4->addWidget(passwordLabel, 2, 0, 1, 1);

        userLineEdit = new QLineEdit(authenticationGroupBox);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));

        gridLayout_4->addWidget(userLineEdit, 1, 1, 1, 1);

        passwordLineEdit = new QLineEdit(authenticationGroupBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(passwordLineEdit, 2, 1, 1, 1);


        gridLayout_7->addWidget(authenticationGroupBox, 7, 0, 1, 1);

        storageTimeGroupBox = new QGroupBox(frame);
        storageTimeGroupBox->setObjectName(QString::fromUtf8("storageTimeGroupBox"));
        gridLayout_3 = new QGridLayout(storageTimeGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        useStandardStorageTimeCheckBox = new QCheckBox(storageTimeGroupBox);
        useStandardStorageTimeCheckBox->setObjectName(QString::fromUtf8("useStandardStorageTimeCheckBox"));

        gridLayout_3->addWidget(useStandardStorageTimeCheckBox, 0, 0, 1, 2);

        storageTimeLabel = new QLabel(storageTimeGroupBox);
        storageTimeLabel->setObjectName(QString::fromUtf8("storageTimeLabel"));

        gridLayout_3->addWidget(storageTimeLabel, 2, 0, 1, 1);

        storageTimeSpinBox = new QSpinBox(storageTimeGroupBox);
        storageTimeSpinBox->setObjectName(QString::fromUtf8("storageTimeSpinBox"));
        storageTimeSpinBox->setMaximumSize(QSize(50, 16777215));
        storageTimeSpinBox->setMaximum(999999999);

        gridLayout_3->addWidget(storageTimeSpinBox, 2, 1, 1, 1);


        gridLayout_7->addWidget(storageTimeGroupBox, 7, 1, 1, 1);

        proxyGroupBox = new QGroupBox(frame);
        proxyGroupBox->setObjectName(QString::fromUtf8("proxyGroupBox"));
        gridLayout_6 = new QGridLayout(proxyGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        useStandardProxyCheckBox = new QCheckBox(proxyGroupBox);
        useStandardProxyCheckBox->setObjectName(QString::fromUtf8("useStandardProxyCheckBox"));

        gridLayout_6->addWidget(useStandardProxyCheckBox, 0, 0, 1, 2);

        serverLabel = new QLabel(proxyGroupBox);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));

        gridLayout_6->addWidget(serverLabel, 1, 0, 1, 1);

        proxyAddressLineEdit = new QLineEdit(proxyGroupBox);
        proxyAddressLineEdit->setObjectName(QString::fromUtf8("proxyAddressLineEdit"));

        gridLayout_6->addWidget(proxyAddressLineEdit, 1, 1, 1, 1);

        portLabel = new QLabel(proxyGroupBox);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        gridLayout_6->addWidget(portLabel, 1, 2, 1, 1);

        proxyPortSpinBox = new QSpinBox(proxyGroupBox);
        proxyPortSpinBox->setObjectName(QString::fromUtf8("proxyPortSpinBox"));
        proxyPortSpinBox->setMaximum(65535);

        gridLayout_6->addWidget(proxyPortSpinBox, 1, 3, 1, 1);


        gridLayout_7->addWidget(proxyGroupBox, 8, 1, 1, 1);

        updateInteralGroupBox = new QGroupBox(frame);
        updateInteralGroupBox->setObjectName(QString::fromUtf8("updateInteralGroupBox"));
        gridLayout_5 = new QGridLayout(updateInteralGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        useStandardUpdateInterval = new QCheckBox(updateInteralGroupBox);
        useStandardUpdateInterval->setObjectName(QString::fromUtf8("useStandardUpdateInterval"));

        gridLayout_5->addWidget(useStandardUpdateInterval, 0, 0, 1, 2);

        updateIntervalLabel = new QLabel(updateInteralGroupBox);
        updateIntervalLabel->setObjectName(QString::fromUtf8("updateIntervalLabel"));

        gridLayout_5->addWidget(updateIntervalLabel, 1, 0, 1, 1);

        updateIntervalSpinBox = new QSpinBox(updateInteralGroupBox);
        updateIntervalSpinBox->setObjectName(QString::fromUtf8("updateIntervalSpinBox"));
        updateIntervalSpinBox->setMaximumSize(QSize(50, 16777215));

        gridLayout_5->addWidget(updateIntervalSpinBox, 1, 1, 1, 1);

        lastUpdateLayout = new QHBoxLayout();
        lastUpdateLayout->setObjectName(QString::fromUtf8("lastUpdateLayout"));
        lastUpdateLabel = new QLabel(updateInteralGroupBox);
        lastUpdateLabel->setObjectName(QString::fromUtf8("lastUpdateLabel"));

        lastUpdateLayout->addWidget(lastUpdateLabel);

        lastUpdate = new QLabel(updateInteralGroupBox);
        lastUpdate->setObjectName(QString::fromUtf8("lastUpdate"));
        sizePolicy.setHeightForWidth(lastUpdate->sizePolicy().hasHeightForWidth());
        lastUpdate->setSizePolicy(sizePolicy);

        lastUpdateLayout->addWidget(lastUpdate);


        gridLayout_5->addLayout(lastUpdateLayout, 2, 0, 1, 2);


        gridLayout_7->addWidget(updateInteralGroupBox, 8, 0, 1, 1);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        buttonLayout->addWidget(buttonBox);


        gridLayout_7->addLayout(buttonLayout, 11, 0, 1, 2);

        descriptionLayout = new QVBoxLayout();
        descriptionLayout->setObjectName(QString::fromUtf8("descriptionLayout"));
        descriptionLabel = new QLabel(frame);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        descriptionLayout->addWidget(descriptionLabel);

        descriptionPlainTextEdit = new QPlainTextEdit(frame);
        descriptionPlainTextEdit->setObjectName(QString::fromUtf8("descriptionPlainTextEdit"));

        descriptionLayout->addWidget(descriptionPlainTextEdit);


        gridLayout_7->addLayout(descriptionLayout, 1, 0, 1, 2);

        nameLayout = new QGridLayout();
        nameLayout->setObjectName(QString::fromUtf8("nameLayout"));
        urlLabel = new QLabel(frame);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));

        nameLayout->addWidget(urlLabel, 0, 0, 1, 1);

        urlLineEdit = new QLineEdit(frame);
        urlLineEdit->setObjectName(QString::fromUtf8("urlLineEdit"));

        nameLayout->addWidget(urlLineEdit, 0, 1, 1, 1);

        nameLabel = new QLabel(frame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        nameLayout->addWidget(nameLabel, 1, 0, 1, 1);

        nameLineEdit = new QLineEdit(frame);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        nameLayout->addWidget(nameLineEdit, 1, 1, 1, 1);


        gridLayout_7->addLayout(nameLayout, 0, 0, 1, 2);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        transformationTypeLabel = new QLabel(groupBox);
        transformationTypeLabel->setObjectName(QString::fromUtf8("transformationTypeLabel"));

        horizontalLayout->addWidget(transformationTypeLabel);

        previewButton = new QPushButton(groupBox);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(previewButton->sizePolicy().hasHeightForWidth());
        previewButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(previewButton);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout_7->addWidget(groupBox, 4, 0, 1, 1);

        flagGroupBox = new QGroupBox(frame);
        flagGroupBox->setObjectName(QString::fromUtf8("flagGroupBox"));
        verticalLayout_2 = new QVBoxLayout(flagGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        activatedCheckBox = new QCheckBox(flagGroupBox);
        activatedCheckBox->setObjectName(QString::fromUtf8("activatedCheckBox"));

        verticalLayout_2->addWidget(activatedCheckBox);

        useInfoFromFeedCheckBox = new QCheckBox(flagGroupBox);
        useInfoFromFeedCheckBox->setObjectName(QString::fromUtf8("useInfoFromFeedCheckBox"));

        verticalLayout_2->addWidget(useInfoFromFeedCheckBox);

        updateForumInfoCheckBox = new QCheckBox(flagGroupBox);
        updateForumInfoCheckBox->setObjectName(QString::fromUtf8("updateForumInfoCheckBox"));

        verticalLayout_2->addWidget(updateForumInfoCheckBox);

        embedImagesCheckBox = new QCheckBox(flagGroupBox);
        embedImagesCheckBox->setObjectName(QString::fromUtf8("embedImagesCheckBox"));

        verticalLayout_2->addWidget(embedImagesCheckBox);

        saveCompletePageCheckBox = new QCheckBox(flagGroupBox);
        saveCompletePageCheckBox->setObjectName(QString::fromUtf8("saveCompletePageCheckBox"));

        verticalLayout_2->addWidget(saveCompletePageCheckBox);


        gridLayout_7->addWidget(flagGroupBox, 3, 1, 2, 1);


        verticalLayout->addWidget(frame);

        QWidget::setTabOrder(urlLineEdit, nameLineEdit);
        QWidget::setTabOrder(nameLineEdit, descriptionPlainTextEdit);
        QWidget::setTabOrder(descriptionPlainTextEdit, typeForumRadio);
        QWidget::setTabOrder(typeForumRadio, forumComboBox);
        QWidget::setTabOrder(forumComboBox, activatedCheckBox);
        QWidget::setTabOrder(activatedCheckBox, useInfoFromFeedCheckBox);
        QWidget::setTabOrder(useInfoFromFeedCheckBox, updateForumInfoCheckBox);
        QWidget::setTabOrder(updateForumInfoCheckBox, useAuthenticationCheckBox);
        QWidget::setTabOrder(useAuthenticationCheckBox, userLineEdit);
        QWidget::setTabOrder(userLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, useStandardStorageTimeCheckBox);
        QWidget::setTabOrder(useStandardStorageTimeCheckBox, storageTimeSpinBox);
        QWidget::setTabOrder(storageTimeSpinBox, useStandardUpdateInterval);
        QWidget::setTabOrder(useStandardUpdateInterval, updateIntervalSpinBox);
        QWidget::setTabOrder(updateIntervalSpinBox, useStandardProxyCheckBox);
        QWidget::setTabOrder(useStandardProxyCheckBox, proxyAddressLineEdit);
        QWidget::setTabOrder(proxyAddressLineEdit, proxyPortSpinBox);
        QWidget::setTabOrder(proxyPortSpinBox, buttonBox);

        retranslateUi(AddFeedDialog);

        QMetaObject::connectSlotsByName(AddFeedDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFeedDialog)
    {
        AddFeedDialog->setWindowTitle(QApplication::translate("AddFeedDialog", "Create new feed", 0, QApplication::UnicodeUTF8));
        typeGroupBox->setTitle(QApplication::translate("AddFeedDialog", "Type", 0, QApplication::UnicodeUTF8));
        typeForumRadio->setText(QApplication::translate("AddFeedDialog", "Forum", 0, QApplication::UnicodeUTF8));
        typeLocalRadio->setText(QApplication::translate("AddFeedDialog", "Local Feed", 0, QApplication::UnicodeUTF8));
        authenticationGroupBox->setTitle(QApplication::translate("AddFeedDialog", "Authentication (not yet supported)", 0, QApplication::UnicodeUTF8));
        useAuthenticationCheckBox->setText(QApplication::translate("AddFeedDialog", "Feed needs authentication", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("AddFeedDialog", "User", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("AddFeedDialog", "Password", 0, QApplication::UnicodeUTF8));
        storageTimeGroupBox->setTitle(QApplication::translate("AddFeedDialog", "Storage time", 0, QApplication::UnicodeUTF8));
        useStandardStorageTimeCheckBox->setText(QApplication::translate("AddFeedDialog", "Use standard storage time", 0, QApplication::UnicodeUTF8));
        storageTimeLabel->setText(QApplication::translate("AddFeedDialog", "Days (0 = off)", 0, QApplication::UnicodeUTF8));
        proxyGroupBox->setTitle(QApplication::translate("AddFeedDialog", "Proxy", 0, QApplication::UnicodeUTF8));
        useStandardProxyCheckBox->setText(QApplication::translate("AddFeedDialog", "Use standard proxy", 0, QApplication::UnicodeUTF8));
        serverLabel->setText(QApplication::translate("AddFeedDialog", "Server", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("AddFeedDialog", ":", 0, QApplication::UnicodeUTF8));
        updateInteralGroupBox->setTitle(QApplication::translate("AddFeedDialog", "Update interval", 0, QApplication::UnicodeUTF8));
        useStandardUpdateInterval->setText(QApplication::translate("AddFeedDialog", "Use standard update interval", 0, QApplication::UnicodeUTF8));
        updateIntervalLabel->setText(QApplication::translate("AddFeedDialog", "Interval in minutes (0 = manual)", 0, QApplication::UnicodeUTF8));
        lastUpdateLabel->setText(QApplication::translate("AddFeedDialog", "Last update", 0, QApplication::UnicodeUTF8));
        lastUpdate->setText(QApplication::translate("AddFeedDialog", "Never", 0, QApplication::UnicodeUTF8));
        descriptionLabel->setText(QApplication::translate("AddFeedDialog", "Description:", 0, QApplication::UnicodeUTF8));
        urlLabel->setText(QApplication::translate("AddFeedDialog", "RSS-Feed-URL:", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("AddFeedDialog", "Name:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddFeedDialog", "Transformation", 0, QApplication::UnicodeUTF8));
        transformationTypeLabel->setText(QApplication::translate("AddFeedDialog", "Transformation type", 0, QApplication::UnicodeUTF8));
        previewButton->setText(QApplication::translate("AddFeedDialog", "Preview && Transformation", 0, QApplication::UnicodeUTF8));
        flagGroupBox->setTitle(QApplication::translate("AddFeedDialog", "Misc", 0, QApplication::UnicodeUTF8));
        activatedCheckBox->setText(QApplication::translate("AddFeedDialog", "Activated", 0, QApplication::UnicodeUTF8));
        useInfoFromFeedCheckBox->setText(QApplication::translate("AddFeedDialog", "Use name and description from feed", 0, QApplication::UnicodeUTF8));
        updateForumInfoCheckBox->setText(QApplication::translate("AddFeedDialog", "Update forum information", 0, QApplication::UnicodeUTF8));
        embedImagesCheckBox->setText(QApplication::translate("AddFeedDialog", "Embed images", 0, QApplication::UnicodeUTF8));
        saveCompletePageCheckBox->setText(QApplication::translate("AddFeedDialog", "Save complete web page (experimental for local feeds)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddFeedDialog: public Ui_AddFeedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFEEDDIALOG_H
