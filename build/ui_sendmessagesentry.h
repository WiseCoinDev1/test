/********************************************************************************
** Form generated from reading UI file 'sendmessagesentry.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGESENTRY_H
#define UI_SENDMESSAGESENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include "qvalidatedlineedit.h"
#include "qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendMessagesEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *sendToLayout;
    QValidatedLineEdit *sendTo;
    QToolButton *pasteButton;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QValidatedLineEdit *addAsLabel;
    QToolButton *addressBookButton;
    QToolButton *deleteButton;
    QLabel *publicKeyLabel;
    QHBoxLayout *horizontalLayout_6;
    QValidatedLineEdit *publicKey;
    QToolButton *PubkeyPasteButton;
    QLabel *messageLabel;
    QValidatedTextEdit *messageText;

    void setupUi(QFrame *SendMessagesEntry)
    {
        if (SendMessagesEntry->objectName().isEmpty())
            SendMessagesEntry->setObjectName(QString::fromUtf8("SendMessagesEntry"));
        SendMessagesEntry->resize(729, 236);
        SendMessagesEntry->setFrameShape(QFrame::StyledPanel);
        SendMessagesEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(SendMessagesEntry);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(SendMessagesEntry);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        sendToLayout = new QHBoxLayout();
        sendToLayout->setObjectName(QString::fromUtf8("sendToLayout"));
        sendTo = new QValidatedLineEdit(SendMessagesEntry);
        sendTo->setObjectName(QString::fromUtf8("sendTo"));
        sendTo->setMaxLength(34);

        sendToLayout->addWidget(sendTo);

        pasteButton = new QToolButton(SendMessagesEntry);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon);

        sendToLayout->addWidget(pasteButton);


        gridLayout->addLayout(sendToLayout, 0, 1, 1, 1);

        label_4 = new QLabel(SendMessagesEntry);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        addAsLabel = new QValidatedLineEdit(SendMessagesEntry);
        addAsLabel->setObjectName(QString::fromUtf8("addAsLabel"));
        addAsLabel->setEnabled(true);

        horizontalLayout_5->addWidget(addAsLabel);

        addressBookButton = new QToolButton(SendMessagesEntry);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon1);

        horizontalLayout_5->addWidget(addressBookButton);

        deleteButton = new QToolButton(SendMessagesEntry);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        horizontalLayout_5->addWidget(deleteButton);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        publicKeyLabel = new QLabel(SendMessagesEntry);
        publicKeyLabel->setObjectName(QString::fromUtf8("publicKeyLabel"));

        gridLayout->addWidget(publicKeyLabel, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        publicKey = new QValidatedLineEdit(SendMessagesEntry);
        publicKey->setObjectName(QString::fromUtf8("publicKey"));

        horizontalLayout_6->addWidget(publicKey);

        PubkeyPasteButton = new QToolButton(SendMessagesEntry);
        PubkeyPasteButton->setObjectName(QString::fromUtf8("PubkeyPasteButton"));
        PubkeyPasteButton->setIcon(icon);

        horizontalLayout_6->addWidget(PubkeyPasteButton);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        messageLabel = new QLabel(SendMessagesEntry);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(messageLabel, 3, 0, 1, 1);

        messageText = new QValidatedTextEdit(SendMessagesEntry);
        messageText->setObjectName(QString::fromUtf8("messageText"));
        messageText->setMouseTracking(true);
        messageText->setFocusPolicy(Qt::WheelFocus);
        messageText->setTabChangesFocus(false);

        gridLayout->addWidget(messageText, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(sendTo);
        label_4->setBuddy(addAsLabel);
        publicKeyLabel->setBuddy(publicKey);
        messageLabel->setBuddy(messageText);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendMessagesEntry);

        QMetaObject::connectSlotsByName(SendMessagesEntry);
    } // setupUi

    void retranslateUi(QFrame *SendMessagesEntry)
    {
        SendMessagesEntry->setWindowTitle(QApplication::translate("SendMessagesEntry", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SendMessagesEntry", "Send &To:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sendTo->setToolTip(QApplication::translate("SendMessagesEntry", "The address to send the payment to  (e.g. C8gZqgY4r2RoEdqYk3QsAqFckyf9pRHN6i)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendMessagesEntry", "Paste address from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendMessagesEntry", "Alt+P", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SendMessagesEntry", "&Label:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendMessagesEntry", "Enter a label for this address to add it to your address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendMessagesEntry", "Choose address from address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendMessagesEntry", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendMessagesEntry", "Remove this recipient", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        publicKeyLabel->setText(QApplication::translate("SendMessagesEntry", "&Public Key:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PubkeyPasteButton->setToolTip(QApplication::translate("SendMessagesEntry", "Paste address from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PubkeyPasteButton->setText(QString());
        PubkeyPasteButton->setShortcut(QApplication::translate("SendMessagesEntry", "Alt+P", 0, QApplication::UnicodeUTF8));
        messageLabel->setText(QApplication::translate("SendMessagesEntry", "&Message:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SendMessagesEntry: public Ui_SendMessagesEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGESENTRY_H
