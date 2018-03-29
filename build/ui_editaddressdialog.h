/********************************************************************************
** Form generated from reading UI file 'editaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITADDRESSDIALOG_H
#define UI_EDITADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_EditAddressDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *labelEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QToolButton *EditAddressPasteButton;
    QCheckBox *stealthCB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditAddressDialog)
    {
        if (EditAddressDialog->objectName().isEmpty())
            EditAddressDialog->setObjectName(QString::fromUtf8("EditAddressDialog"));
        EditAddressDialog->resize(457, 126);
        gridLayout_2 = new QGridLayout(EditAddressDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(EditAddressDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        labelEdit = new QLineEdit(EditAddressDialog);
        labelEdit->setObjectName(QString::fromUtf8("labelEdit"));

        horizontalLayout_4->addWidget(labelEdit);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(EditAddressDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        addressEdit = new QLineEdit(EditAddressDialog);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));

        horizontalLayout_3->addWidget(addressEdit);

        EditAddressPasteButton = new QToolButton(EditAddressDialog);
        EditAddressPasteButton->setObjectName(QString::fromUtf8("EditAddressPasteButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        EditAddressPasteButton->setIcon(icon);

        horizontalLayout_3->addWidget(EditAddressPasteButton);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        stealthCB = new QCheckBox(EditAddressDialog);
        stealthCB->setObjectName(QString::fromUtf8("stealthCB"));

        gridLayout_2->addWidget(stealthCB, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EditAddressDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(labelEdit);
        label_2->setBuddy(addressEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditAddressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAddressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAddressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAddressDialog)
    {
        EditAddressDialog->setWindowTitle(QApplication::translate("EditAddressDialog", "Edit Address", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EditAddressDialog", "&Label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelEdit->setToolTip(QApplication::translate("EditAddressDialog", "The label associated with this address book entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("EditAddressDialog", "&Address", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressEdit->setToolTip(QApplication::translate("EditAddressDialog", "The address associated with this address book entry. This can only be modified for sending addresses.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        EditAddressPasteButton->setToolTip(QApplication::translate("EditAddressDialog", "Paste address from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        EditAddressPasteButton->setText(QString());
        EditAddressPasteButton->setShortcut(QApplication::translate("EditAddressDialog", "Alt+P", 0, QApplication::UnicodeUTF8));
        stealthCB->setText(QApplication::translate("EditAddressDialog", "&Stealth Address", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditAddressDialog: public Ui_EditAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITADDRESSDIALOG_H
