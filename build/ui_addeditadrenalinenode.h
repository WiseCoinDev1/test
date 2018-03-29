/********************************************************************************
** Form generated from reading UI file 'addeditadrenalinenode.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITADRENALINENODE_H
#define UI_ADDEDITADRENALINENODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAdrenalineNode
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *aliasLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *privkeyLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txhashLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *outputindexLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *rewardaddressLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *rewardpercentageLineEdit;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddEditAdrenalineNode)
    {
        if (AddEditAdrenalineNode->objectName().isEmpty())
            AddEditAdrenalineNode->setObjectName(QString::fromUtf8("AddEditAdrenalineNode"));
        AddEditAdrenalineNode->resize(331, 298);
        AddEditAdrenalineNode->setModal(true);
        verticalLayout = new QVBoxLayout(AddEditAdrenalineNode);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(AddEditAdrenalineNode);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setWordWrap(true);

        verticalLayout->addWidget(label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_4 = new QLabel(AddEditAdrenalineNode);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        aliasLineEdit = new QLineEdit(AddEditAdrenalineNode);
        aliasLineEdit->setObjectName(QString::fromUtf8("aliasLineEdit"));

        horizontalLayout_4->addWidget(aliasLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_6 = new QLabel(AddEditAdrenalineNode);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        addressLineEdit = new QLineEdit(AddEditAdrenalineNode);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        horizontalLayout_5->addWidget(addressLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_5 = new QLabel(AddEditAdrenalineNode);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        privkeyLineEdit = new QLineEdit(AddEditAdrenalineNode);
        privkeyLineEdit->setObjectName(QString::fromUtf8("privkeyLineEdit"));

        horizontalLayout_3->addWidget(privkeyLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(AddEditAdrenalineNode);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txhashLineEdit = new QLineEdit(AddEditAdrenalineNode);
        txhashLineEdit->setObjectName(QString::fromUtf8("txhashLineEdit"));

        horizontalLayout_2->addWidget(txhashLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        label_8 = new QLabel(AddEditAdrenalineNode);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        outputindexLineEdit = new QLineEdit(AddEditAdrenalineNode);
        outputindexLineEdit->setObjectName(QString::fromUtf8("outputindexLineEdit"));

        horizontalLayout_8->addWidget(outputindexLineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_3 = new QLabel(AddEditAdrenalineNode);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        rewardaddressLineEdit = new QLineEdit(AddEditAdrenalineNode);
        rewardaddressLineEdit->setObjectName(QString::fromUtf8("rewardaddressLineEdit"));

        horizontalLayout_6->addWidget(rewardaddressLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        label_7 = new QLabel(AddEditAdrenalineNode);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        rewardpercentageLineEdit = new QLineEdit(AddEditAdrenalineNode);
        rewardpercentageLineEdit->setObjectName(QString::fromUtf8("rewardpercentageLineEdit"));

        horizontalLayout_7->addWidget(rewardpercentageLineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QString::fromUtf8("horizontalLayout_Buttons"));
        okButton = new QPushButton(AddEditAdrenalineNode);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(AddEditAdrenalineNode);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);


        retranslateUi(AddEditAdrenalineNode);

        QMetaObject::connectSlotsByName(AddEditAdrenalineNode);
    } // setupUi

    void retranslateUi(QDialog *AddEditAdrenalineNode)
    {
        AddEditAdrenalineNode->setWindowTitle(QApplication::translate("AddEditAdrenalineNode", "Add/Edit Osiris Node", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("AddEditAdrenalineNode", "<html><head/><body><p>Enter an Alias (friendly name) for your Master Node and its address (either clearnet IP and port or Tor onion address and port). The address should be in the format 123.456.789.123:9999 or akjdsafxjkhasdf.onion:9999. You must send exactly 1000 OSI to the collateral address.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddEditAdrenalineNode", "Alias*", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddEditAdrenalineNode", "Address*", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddEditAdrenalineNode", "PrivKey*", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddEditAdrenalineNode", "TxHash*", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AddEditAdrenalineNode", "Output Index*", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddEditAdrenalineNode", "Reward Address", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AddEditAdrenalineNode", "Reward %", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("AddEditAdrenalineNode", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("AddEditAdrenalineNode", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditAdrenalineNode: public Ui_AddEditAdrenalineNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITADRENALINENODE_H
