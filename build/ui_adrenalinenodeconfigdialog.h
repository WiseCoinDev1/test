/********************************************************************************
** Form generated from reading UI file 'adrenalinenodeconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADRENALINENODECONFIGDIALOG_H
#define UI_ADRENALINENODECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdrenalineNodeConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdrenalineNodeConfigDialog)
    {
        if (AdrenalineNodeConfigDialog->objectName().isEmpty())
            AdrenalineNodeConfigDialog->setObjectName(QString::fromUtf8("AdrenalineNodeConfigDialog"));
        AdrenalineNodeConfigDialog->resize(620, 250);
        verticalLayout = new QVBoxLayout(AdrenalineNodeConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        detailText = new QTextEdit(AdrenalineNodeConfigDialog);
        detailText->setObjectName(QString::fromUtf8("detailText"));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(AdrenalineNodeConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AdrenalineNodeConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdrenalineNodeConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdrenalineNodeConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdrenalineNodeConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *AdrenalineNodeConfigDialog)
    {
        AdrenalineNodeConfigDialog->setWindowTitle(QApplication::translate("AdrenalineNodeConfigDialog", "Master Node Configuration Template", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        detailText->setToolTip(QApplication::translate("AdrenalineNodeConfigDialog", "<html><head/><body><p>This pane shows an example osiris.conf template with the necessary masternode settings.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AdrenalineNodeConfigDialog: public Ui_AdrenalineNodeConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADRENALINENODECONFIGDIALOG_H
