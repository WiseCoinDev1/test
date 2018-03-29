/********************************************************************************
** Form generated from reading UI file 'masternodemanager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODEMANAGER_H
#define UI_MASTERNODEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeManager
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetMasternodes;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *countLabel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *createButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *editButton;
    QPushButton *removeButton;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *startAllButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *MasternodeManager)
    {
        if (MasternodeManager->objectName().isEmpty())
            MasternodeManager->setObjectName(QString::fromUtf8("MasternodeManager"));
        MasternodeManager->resize(723, 457);
        topLayout = new QVBoxLayout(MasternodeManager);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        tabWidget = new QTabWidget(MasternodeManager);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidgetMasternodes = new QTableWidget(tab);
        if (tableWidgetMasternodes->columnCount() < 6)
            tableWidgetMasternodes->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetMasternodes->setObjectName(QString::fromUtf8("tableWidgetMasternodes"));
        tableWidgetMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMasternodes->setAlternatingRowColors(true);
        tableWidgetMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMasternodes->setSortingEnabled(true);
        tableWidgetMasternodes->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidgetMasternodes, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        countLabel = new QLabel(tab);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));

        horizontalLayout_3->addWidget(countLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        createButton = new QPushButton(tab_2);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        horizontalLayout->addWidget(createButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setMinimumSize(QSize(695, 0));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        editButton = new QPushButton(tab_2);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        horizontalLayout_2->addWidget(editButton);

        removeButton = new QPushButton(tab_2);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout_2->addWidget(removeButton);

        UpdateButton = new QPushButton(tab_2);
        UpdateButton->setObjectName(QString::fromUtf8("UpdateButton"));

        horizontalLayout_2->addWidget(UpdateButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(tab_2);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout_5->addWidget(startButton);

        startAllButton = new QPushButton(tab_2);
        startAllButton->setObjectName(QString::fromUtf8("startAllButton"));

        horizontalLayout_5->addWidget(startAllButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        topLayout->addLayout(verticalLayout);


        retranslateUi(MasternodeManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasternodeManager);
    } // setupUi

    void retranslateUi(QWidget *MasternodeManager)
    {
        MasternodeManager->setWindowTitle(QApplication::translate("MasternodeManager", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeManager", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeManager", "Protocol", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeManager", "Active", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeManager", "Active (secs)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeManager", "Last Seen", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeManager", "Pubkey", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MasternodeManager", "Osiris Node Count:", 0, QApplication::UnicodeUTF8));
        countLabel->setText(QApplication::translate("MasternodeManager", "0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MasternodeManager", "Osiris Network", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("MasternodeManager", "&Create...", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeManager", "Alias", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MasternodeManager", "IP/Onion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MasternodeManager", "Reward %", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MasternodeManager", "Reward Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("MasternodeManager", "Status", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("MasternodeManager", "&Edit", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("MasternodeManager", "&Remove", 0, QApplication::UnicodeUTF8));
        UpdateButton->setText(QApplication::translate("MasternodeManager", "&Update", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("MasternodeManager", "S&tart", 0, QApplication::UnicodeUTF8));
        startAllButton->setText(QApplication::translate("MasternodeManager", "St&art All", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MasternodeManager", "My Master Nodes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MasternodeManager: public Ui_MasternodeManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODEMANAGER_H
