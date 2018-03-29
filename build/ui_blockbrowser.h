/********************************************************************************
** Form generated from reading UI file 'blockbrowser.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKBROWSER_H
#define UI_BLOCKBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockBrowser
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *txButton;
    QLabel *inputLabel;
    QLabel *valueLabel;
    QLabel *txLabel;
    QLabel *hardBox;
    QLabel *txID;
    QLabel *inputBox;
    QLabel *valueBox;
    QLabel *hardLabel;
    QSpinBox *heightBox;
    QLabel *heightLabel_2;
    QLabel *timeBox;
    QPushButton *blockButton;
    QLabel *merkleLabel;
    QLabel *hashLabel;
    QLabel *feesBox;
    QLabel *heightLabel;
    QLabel *feesLabel;
    QLabel *bitsLabel;
    QLabel *bitsBox;
    QLabel *merkleBox;
    QLabel *outputLabel;
    QLabel *outputBox;
    QLabel *nonceLabel;
    QLabel *nonceBox;
    QLabel *timeLabel;
    QLabel *hashBox;
    QLineEdit *txBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BlockBrowser)
    {
        if (BlockBrowser->objectName().isEmpty())
            BlockBrowser->setObjectName(QString::fromUtf8("BlockBrowser"));
        BlockBrowser->setWindowModality(Qt::NonModal);
        BlockBrowser->setEnabled(true);
        BlockBrowser->resize(850, 514);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockBrowser->sizePolicy().hasHeightForWidth());
        BlockBrowser->setSizePolicy(sizePolicy);
        BlockBrowser->setMinimumSize(QSize(0, 0));
        BlockBrowser->setAcceptDrops(false);
        gridLayout = new QGridLayout(BlockBrowser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(21, 21, 10, -1);
        widget = new QWidget(BlockBrowser);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(widget);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans,sans-serif"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout1->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_3->setHorizontalSpacing(7);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 18, 0, 1, 1);

        txButton = new QPushButton(widget);
        txButton->setObjectName(QString::fromUtf8("txButton"));

        gridLayout_3->addWidget(txButton, 12, 1, 1, 1);

        inputLabel = new QLabel(widget);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));
        inputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(inputLabel, 17, 0, 1, 1);

        valueLabel = new QLabel(widget);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        gridLayout_3->addWidget(valueLabel, 14, 0, 1, 1);

        txLabel = new QLabel(widget);
        txLabel->setObjectName(QString::fromUtf8("txLabel"));

        gridLayout_3->addWidget(txLabel, 13, 0, 1, 1);

        hardBox = new QLabel(widget);
        hardBox->setObjectName(QString::fromUtf8("hardBox"));
        hardBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(hardBox, 9, 1, 1, 1);

        txID = new QLabel(widget);
        txID->setObjectName(QString::fromUtf8("txID"));
        txID->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(txID, 13, 1, 1, 1);

        inputBox = new QLabel(widget);
        inputBox->setObjectName(QString::fromUtf8("inputBox"));
        inputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        inputBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(inputBox, 17, 1, 1, 1);

        valueBox = new QLabel(widget);
        valueBox->setObjectName(QString::fromUtf8("valueBox"));
        valueBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(valueBox, 14, 1, 1, 1);

        hardLabel = new QLabel(widget);
        hardLabel->setObjectName(QString::fromUtf8("hardLabel"));

        gridLayout_3->addWidget(hardLabel, 9, 0, 1, 1);

        heightBox = new QSpinBox(widget);
        heightBox->setObjectName(QString::fromUtf8("heightBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(heightBox->sizePolicy().hasHeightForWidth());
        heightBox->setSizePolicy(sizePolicy1);
        heightBox->setMaximum(99999999);

        gridLayout_3->addWidget(heightBox, 1, 0, 1, 1);

        heightLabel_2 = new QLabel(widget);
        heightLabel_2->setObjectName(QString::fromUtf8("heightLabel_2"));

        gridLayout_3->addWidget(heightLabel_2, 3, 0, 1, 1);

        timeBox = new QLabel(widget);
        timeBox->setObjectName(QString::fromUtf8("timeBox"));
        timeBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(timeBox, 8, 1, 1, 1);

        blockButton = new QPushButton(widget);
        blockButton->setObjectName(QString::fromUtf8("blockButton"));

        gridLayout_3->addWidget(blockButton, 1, 1, 1, 1);

        merkleLabel = new QLabel(widget);
        merkleLabel->setObjectName(QString::fromUtf8("merkleLabel"));

        gridLayout_3->addWidget(merkleLabel, 5, 0, 1, 1);

        hashLabel = new QLabel(widget);
        hashLabel->setObjectName(QString::fromUtf8("hashLabel"));

        gridLayout_3->addWidget(hashLabel, 4, 0, 1, 1);

        feesBox = new QLabel(widget);
        feesBox->setObjectName(QString::fromUtf8("feesBox"));
        feesBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(feesBox, 15, 1, 1, 1);

        heightLabel = new QLabel(widget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(heightLabel, 3, 1, 1, 1);

        feesLabel = new QLabel(widget);
        feesLabel->setObjectName(QString::fromUtf8("feesLabel"));

        gridLayout_3->addWidget(feesLabel, 15, 0, 1, 1);

        bitsLabel = new QLabel(widget);
        bitsLabel->setObjectName(QString::fromUtf8("bitsLabel"));

        gridLayout_3->addWidget(bitsLabel, 7, 0, 1, 1);

        bitsBox = new QLabel(widget);
        bitsBox->setObjectName(QString::fromUtf8("bitsBox"));
        bitsBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(bitsBox, 7, 1, 1, 1);

        merkleBox = new QLabel(widget);
        merkleBox->setObjectName(QString::fromUtf8("merkleBox"));
        merkleBox->setMinimumSize(QSize(187, 0));
        merkleBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(merkleBox, 5, 1, 1, 1);

        outputLabel = new QLabel(widget);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        outputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(outputLabel, 16, 0, 1, 1);

        outputBox = new QLabel(widget);
        outputBox->setObjectName(QString::fromUtf8("outputBox"));
        outputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        outputBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(outputBox, 16, 1, 1, 1);

        nonceLabel = new QLabel(widget);
        nonceLabel->setObjectName(QString::fromUtf8("nonceLabel"));

        gridLayout_3->addWidget(nonceLabel, 6, 0, 1, 1);

        nonceBox = new QLabel(widget);
        nonceBox->setObjectName(QString::fromUtf8("nonceBox"));
        nonceBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(nonceBox, 6, 1, 1, 1);

        timeLabel = new QLabel(widget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        gridLayout_3->addWidget(timeLabel, 8, 0, 1, 1);

        hashBox = new QLabel(widget);
        hashBox->setObjectName(QString::fromUtf8("hashBox"));
        hashBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hashBox->sizePolicy().hasHeightForWidth());
        hashBox->setSizePolicy(sizePolicy2);
        hashBox->setMinimumSize(QSize(0, 0));
        hashBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(hashBox, 4, 1, 1, 1);

        txBox = new QLineEdit(widget);
        txBox->setObjectName(QString::fromUtf8("txBox"));
        sizePolicy1.setHeightForWidth(txBox->sizePolicy().hasHeightForWidth());
        txBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(txBox, 12, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 11, 0, 1, 1);


        gridLayout1->addLayout(gridLayout_3, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(BlockBrowser);

        QMetaObject::connectSlotsByName(BlockBrowser);
    } // setupUi

    void retranslateUi(QWidget *BlockBrowser)
    {
        BlockBrowser->setWindowTitle(QApplication::translate("BlockBrowser", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">Block Explorer </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        txButton->setText(QApplication::translate("BlockBrowser", "Decode Transaction", 0, QApplication::UnicodeUTF8));
        inputLabel->setText(QApplication::translate("BlockBrowser", "Inputs:", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QApplication::translate("BlockBrowser", "Value out:", 0, QApplication::UnicodeUTF8));
        txLabel->setText(QApplication::translate("BlockBrowser", "Transaction ID:", 0, QApplication::UnicodeUTF8));
        hardBox->setText(QApplication::translate("BlockBrowser", "0.00", 0, QApplication::UnicodeUTF8));
        txID->setText(QApplication::translate("BlockBrowser", "000", 0, QApplication::UnicodeUTF8));
        inputBox->setText(QString());
        valueBox->setText(QString());
        hardLabel->setText(QApplication::translate("BlockBrowser", "Block Difficulty:", 0, QApplication::UnicodeUTF8));
        heightLabel_2->setText(QApplication::translate("BlockBrowser", "Block Height:", 0, QApplication::UnicodeUTF8));
        timeBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        blockButton->setText(QApplication::translate("BlockBrowser", "Jump to Block", 0, QApplication::UnicodeUTF8));
        merkleLabel->setText(QApplication::translate("BlockBrowser", "Block Merkle:", 0, QApplication::UnicodeUTF8));
        hashLabel->setText(QApplication::translate("BlockBrowser", "Block Hash:", 0, QApplication::UnicodeUTF8));
        feesBox->setText(QString());
        heightLabel->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        feesLabel->setText(QApplication::translate("BlockBrowser", "Fees:", 0, QApplication::UnicodeUTF8));
        bitsLabel->setText(QApplication::translate("BlockBrowser", "Block nBits:", 0, QApplication::UnicodeUTF8));
        bitsBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        merkleBox->setText(QApplication::translate("BlockBrowser", "0x0", 0, QApplication::UnicodeUTF8));
        outputLabel->setText(QApplication::translate("BlockBrowser", "Outputs:", 0, QApplication::UnicodeUTF8));
        outputBox->setText(QString());
        nonceLabel->setText(QApplication::translate("BlockBrowser", "Block nNonce:", 0, QApplication::UnicodeUTF8));
        nonceBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("BlockBrowser", "Block Timestamp:", 0, QApplication::UnicodeUTF8));
        hashBox->setText(QApplication::translate("BlockBrowser", "0x0", 0, QApplication::UnicodeUTF8));
        txBox->setInputMask(QString());
        txBox->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class BlockBrowser: public Ui_BlockBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKBROWSER_H
