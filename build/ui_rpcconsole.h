/********************************************************************************
** Form generated from reading UI file 'rpcconsole.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_H
#define UI_RPCCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *clientName;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *label_14;
    QLabel *openSSLVersion;
    QLabel *label_12;
    QLabel *buildDate;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *label_15;
    QLabel *masternodeCount;
    QLabel *label_8;
    QCheckBox *isTestNet;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *label_2;
    QLabel *lastBlockTime;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QLabel *labelCLOptions;
    QPushButton *showCLOptionsButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_console;
    QGridLayout *gridLayout;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *copyButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QToolButton *pasteButton;
    QWidget *tab_nettraffic;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line;
    QLabel *label_16;
    QLabel *lblBytesIn;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_2;
    QLabel *label_17;
    QLabel *lblBytesOut;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_peers;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_101;
    QTableView *peerWidget;
    QLabel *banHeading;
    QTableView *banlistWidget;
    QLabel *peerHeading;
    QWidget *detailWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_23;
    QLabel *peerDirection;
    QLabel *label_21;
    QLabel *label_28;
    QLabel *peerSubversion;
    QLabel *label_4;
    QLabel *peerServices;
    QLabel *label_22;
    QLabel *label_25;
    QLabel *peerSyncNode;
    QLabel *label_29;
    QLabel *peerHeight;
    QLabel *label_24;
    QLabel *peerBanScore;
    QLabel *label_221;
    QLabel *peerConnTime;
    QLabel *label_151;
    QLabel *peerLastSend;
    QLabel *label_19;
    QLabel *peerLastRecv;
    QLabel *label_18;
    QLabel *peerBytesSent;
    QLabel *label_20;
    QLabel *peerBytesRecv;
    QLabel *label_26;
    QLabel *peerPingTime;
    QLabel *label_timeoffset;
    QLabel *timeoffset;
    QSpacerItem *verticalSpacer_3;
    QLabel *peerVersion;

    void setupUi(QWidget *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QString::fromUtf8("RPCConsole"));
        RPCConsole->resize(740, 450);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_info = new QWidget();
        tab_info->setObjectName(QString::fromUtf8("tab_info"));
        formLayout = new QFormLayout(tab_info);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        label_5 = new QLabel(tab_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QString::fromUtf8("clientName"));
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setTextFormat(Qt::PlainText);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, clientName);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QString::fromUtf8("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, clientVersion);

        label_14 = new QLabel(tab_info);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setIndent(10);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_14);

        openSSLVersion = new QLabel(tab_info);
        openSSLVersion->setObjectName(QString::fromUtf8("openSSLVersion"));
        openSSLVersion->setCursor(QCursor(Qt::IBeamCursor));
        openSSLVersion->setTextFormat(Qt::PlainText);
        openSSLVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, openSSLVersion);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_12);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QString::fromUtf8("buildDate"));
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::FieldRole, buildDate);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_13);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QString::fromUtf8("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(5, QFormLayout::FieldRole, startupTime);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_11);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QString::fromUtf8("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(7, QFormLayout::FieldRole, numberOfConnections);

        label_15 = new QLabel(tab_info);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_15);

        masternodeCount = new QLabel(tab_info);
        masternodeCount->setObjectName(QString::fromUtf8("masternodeCount"));
        masternodeCount->setCursor(QCursor(Qt::IBeamCursor));
        masternodeCount->setTextFormat(Qt::PlainText);
        masternodeCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(8, QFormLayout::FieldRole, masternodeCount);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        isTestNet = new QCheckBox(tab_info);
        isTestNet->setObjectName(QString::fromUtf8("isTestNet"));
        isTestNet->setEnabled(false);

        formLayout->setWidget(9, QFormLayout::FieldRole, isTestNet);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_10);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_3);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QString::fromUtf8("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(11, QFormLayout::FieldRole, numberOfBlocks);

        label_2 = new QLabel(tab_info);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_2);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QString::fromUtf8("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(12, QFormLayout::FieldRole, lastBlockTime);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(13, QFormLayout::LabelRole, verticalSpacer_2);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName(QString::fromUtf8("labelDebugLogfile"));
        labelDebugLogfile->setFont(font);

        formLayout->setWidget(14, QFormLayout::LabelRole, labelDebugLogfile);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QString::fromUtf8("openDebugLogfileButton"));
        openDebugLogfileButton->setAutoDefault(false);

        formLayout->setWidget(15, QFormLayout::LabelRole, openDebugLogfileButton);

        labelCLOptions = new QLabel(tab_info);
        labelCLOptions->setObjectName(QString::fromUtf8("labelCLOptions"));
        labelCLOptions->setFont(font);

        formLayout->setWidget(16, QFormLayout::LabelRole, labelCLOptions);

        showCLOptionsButton = new QPushButton(tab_info);
        showCLOptionsButton->setObjectName(QString::fromUtf8("showCLOptionsButton"));
        showCLOptionsButton->setAutoDefault(false);

        formLayout->setWidget(17, QFormLayout::LabelRole, showCLOptionsButton);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(18, QFormLayout::LabelRole, verticalSpacer);

        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QString::fromUtf8("tab_console"));
        gridLayout = new QGridLayout(tab_console);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QString::fromUtf8("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        gridLayout->addWidget(messagesWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        copyButton = new QPushButton(tab_console);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copyButton->setIcon(icon);
        copyButton->setShortcut(QString::fromUtf8("Ctrl+L"));
        copyButton->setAutoDefault(false);

        horizontalLayout->addWidget(copyButton);

        label = new QLabel(tab_console);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pasteButton = new QToolButton(tab_console);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pasteButton->sizePolicy().hasHeightForWidth());
        pasteButton->setSizePolicy(sizePolicy);
        pasteButton->setMinimumSize(QSize(24, 24));
        pasteButton->setMaximumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        horizontalLayout->addWidget(pasteButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget->addTab(tab_console, QString());
        tab_nettraffic = new QWidget();
        tab_nettraffic->setObjectName(QString::fromUtf8("tab_nettraffic"));
        horizontalLayout_3 = new QHBoxLayout(tab_nettraffic);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        trafficGraph = new TrafficGraphWidget(tab_nettraffic);
        trafficGraph->setObjectName(QString::fromUtf8("trafficGraph"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sldGraphRange = new QSlider(tab_nettraffic);
        sldGraphRange->setObjectName(QString::fromUtf8("sldGraphRange"));
        sldGraphRange->setMinimum(1);
        sldGraphRange->setMaximum(288);
        sldGraphRange->setPageStep(12);
        sldGraphRange->setValue(6);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(tab_nettraffic);
        lblGraphRange->setObjectName(QString::fromUtf8("lblGraphRange"));
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(tab_nettraffic);
        btnClearTrafficGraph->setObjectName(QString::fromUtf8("btnClearTrafficGraph"));

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(tab_nettraffic);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setMinimumSize(QSize(10, 0));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        line->setPalette(palette);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_4->addWidget(label_16);

        lblBytesIn = new QLabel(groupBox);
        lblBytesIn->setObjectName(QString::fromUtf8("lblBytesIn"));
        lblBytesIn->setMinimumSize(QSize(50, 0));
        lblBytesIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblBytesIn);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setMinimumSize(QSize(10, 0));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        line_2->setPalette(palette1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_5->addWidget(label_17);

        lblBytesOut = new QLabel(groupBox);
        lblBytesOut->setObjectName(QString::fromUtf8("lblBytesOut"));
        lblBytesOut->setMinimumSize(QSize(50, 0));
        lblBytesOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblBytesOut);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 407, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab_nettraffic, QString());
        tab_peers = new QWidget();
        tab_peers->setObjectName(QString::fromUtf8("tab_peers"));
        gridLayout_2 = new QGridLayout(tab_peers);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_101 = new QVBoxLayout();
        verticalLayout_101->setSpacing(0);
        verticalLayout_101->setObjectName(QString::fromUtf8("verticalLayout_101"));
        peerWidget = new QTableView(tab_peers);
        peerWidget->setObjectName(QString::fromUtf8("peerWidget"));
        peerWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        peerWidget->setSortingEnabled(true);
        peerWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(peerWidget);

        banHeading = new QLabel(tab_peers);
        banHeading->setObjectName(QString::fromUtf8("banHeading"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(banHeading->sizePolicy().hasHeightForWidth());
        banHeading->setSizePolicy(sizePolicy3);
        banHeading->setMinimumSize(QSize(300, 32));
        banHeading->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setPointSize(12);
        banHeading->setFont(font1);
        banHeading->setCursor(QCursor(Qt::IBeamCursor));
        banHeading->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        banHeading->setWordWrap(true);
        banHeading->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_101->addWidget(banHeading);

        banlistWidget = new QTableView(tab_peers);
        banlistWidget->setObjectName(QString::fromUtf8("banlistWidget"));
        sizePolicy1.setHeightForWidth(banlistWidget->sizePolicy().hasHeightForWidth());
        banlistWidget->setSizePolicy(sizePolicy1);
        banlistWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        banlistWidget->setSortingEnabled(true);
        banlistWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(banlistWidget);


        gridLayout_2->addLayout(verticalLayout_101, 0, 0, 2, 1);

        peerHeading = new QLabel(tab_peers);
        peerHeading->setObjectName(QString::fromUtf8("peerHeading"));
        sizePolicy3.setHeightForWidth(peerHeading->sizePolicy().hasHeightForWidth());
        peerHeading->setSizePolicy(sizePolicy3);
        peerHeading->setMinimumSize(QSize(300, 32));
        QFont font2;
        font2.setPointSize(10);
        peerHeading->setFont(font2);
        peerHeading->setCursor(QCursor(Qt::IBeamCursor));
        peerHeading->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        peerHeading->setWordWrap(true);
        peerHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHeading, 0, 1, 1, 1);

        detailWidget = new QWidget(tab_peers);
        detailWidget->setObjectName(QString::fromUtf8("detailWidget"));
        detailWidget->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(detailWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_23 = new QLabel(detailWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 0, 0, 1, 1);

        peerDirection = new QLabel(detailWidget);
        peerDirection->setObjectName(QString::fromUtf8("peerDirection"));
        peerDirection->setCursor(QCursor(Qt::IBeamCursor));
        peerDirection->setTextFormat(Qt::PlainText);
        peerDirection->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerDirection, 0, 2, 1, 1);

        label_21 = new QLabel(detailWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 1, 0, 1, 1);

        label_28 = new QLabel(detailWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setCursor(QCursor(Qt::IBeamCursor));
        label_28->setTextFormat(Qt::PlainText);
        label_28->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_28, 2, 0, 1, 1);

        peerSubversion = new QLabel(detailWidget);
        peerSubversion->setObjectName(QString::fromUtf8("peerSubversion"));
        peerSubversion->setCursor(QCursor(Qt::IBeamCursor));
        peerSubversion->setTextFormat(Qt::PlainText);
        peerSubversion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSubversion, 2, 2, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        peerServices = new QLabel(detailWidget);
        peerServices->setObjectName(QString::fromUtf8("peerServices"));
        peerServices->setCursor(QCursor(Qt::IBeamCursor));
        peerServices->setTextFormat(Qt::PlainText);
        peerServices->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerServices, 3, 2, 1, 1);

        label_22 = new QLabel(detailWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 8, 0, 1, 1);

        label_25 = new QLabel(detailWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 4, 0, 1, 1);

        peerSyncNode = new QLabel(detailWidget);
        peerSyncNode->setObjectName(QString::fromUtf8("peerSyncNode"));
        peerSyncNode->setCursor(QCursor(Qt::IBeamCursor));
        peerSyncNode->setTextFormat(Qt::PlainText);
        peerSyncNode->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSyncNode, 4, 2, 1, 1);

        label_29 = new QLabel(detailWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_3->addWidget(label_29, 5, 0, 1, 1);

        peerHeight = new QLabel(detailWidget);
        peerHeight->setObjectName(QString::fromUtf8("peerHeight"));
        peerHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerHeight->setTextFormat(Qt::PlainText);
        peerHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerHeight, 5, 2, 1, 1);

        label_24 = new QLabel(detailWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_3->addWidget(label_24, 7, 0, 1, 1);

        peerBanScore = new QLabel(detailWidget);
        peerBanScore->setObjectName(QString::fromUtf8("peerBanScore"));
        peerBanScore->setCursor(QCursor(Qt::IBeamCursor));
        peerBanScore->setTextFormat(Qt::PlainText);
        peerBanScore->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBanScore, 7, 2, 1, 1);

        label_221 = new QLabel(detailWidget);
        label_221->setObjectName(QString::fromUtf8("label_221"));

        gridLayout_3->addWidget(label_221, 8, 0, 1, 1);

        peerConnTime = new QLabel(detailWidget);
        peerConnTime->setObjectName(QString::fromUtf8("peerConnTime"));
        peerConnTime->setCursor(QCursor(Qt::IBeamCursor));
        peerConnTime->setTextFormat(Qt::PlainText);
        peerConnTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerConnTime, 8, 2, 1, 1);

        label_151 = new QLabel(detailWidget);
        label_151->setObjectName(QString::fromUtf8("label_151"));

        gridLayout_3->addWidget(label_151, 9, 0, 1, 1);

        peerLastSend = new QLabel(detailWidget);
        peerLastSend->setObjectName(QString::fromUtf8("peerLastSend"));
        peerLastSend->setCursor(QCursor(Qt::IBeamCursor));
        peerLastSend->setTextFormat(Qt::PlainText);
        peerLastSend->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastSend, 9, 2, 1, 1);

        label_19 = new QLabel(detailWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 10, 0, 1, 1);

        peerLastRecv = new QLabel(detailWidget);
        peerLastRecv->setObjectName(QString::fromUtf8("peerLastRecv"));
        peerLastRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerLastRecv->setTextFormat(Qt::PlainText);
        peerLastRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastRecv, 10, 2, 1, 1);

        label_18 = new QLabel(detailWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 11, 0, 1, 1);

        peerBytesSent = new QLabel(detailWidget);
        peerBytesSent->setObjectName(QString::fromUtf8("peerBytesSent"));
        peerBytesSent->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesSent->setTextFormat(Qt::PlainText);
        peerBytesSent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesSent, 11, 2, 1, 1);

        label_20 = new QLabel(detailWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 12, 0, 1, 1);

        peerBytesRecv = new QLabel(detailWidget);
        peerBytesRecv->setObjectName(QString::fromUtf8("peerBytesRecv"));
        peerBytesRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesRecv->setTextFormat(Qt::PlainText);
        peerBytesRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesRecv, 12, 2, 1, 1);

        label_26 = new QLabel(detailWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_3->addWidget(label_26, 13, 0, 1, 1);

        peerPingTime = new QLabel(detailWidget);
        peerPingTime->setObjectName(QString::fromUtf8("peerPingTime"));
        peerPingTime->setCursor(QCursor(Qt::IBeamCursor));
        peerPingTime->setTextFormat(Qt::PlainText);
        peerPingTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerPingTime, 13, 2, 1, 1);

        label_timeoffset = new QLabel(detailWidget);
        label_timeoffset->setObjectName(QString::fromUtf8("label_timeoffset"));

        gridLayout_3->addWidget(label_timeoffset, 14, 0, 1, 1);

        timeoffset = new QLabel(detailWidget);
        timeoffset->setObjectName(QString::fromUtf8("timeoffset"));
        timeoffset->setCursor(QCursor(Qt::IBeamCursor));
        timeoffset->setTextFormat(Qt::PlainText);
        timeoffset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(timeoffset, 14, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 15, 1, 1, 1);

        peerVersion = new QLabel(detailWidget);
        peerVersion->setObjectName(QString::fromUtf8("peerVersion"));

        gridLayout_3->addWidget(peerVersion, 1, 2, 1, 1);


        gridLayout_2->addWidget(detailWidget, 1, 1, 1, 1);

        tabWidget->addTab(tab_peers, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "Osiris - Debug window", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RPCConsole", "Osiris Core", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RPCConsole", "Client name", 0, QApplication::UnicodeUTF8));
        clientName->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RPCConsole", "Client version", 0, QApplication::UnicodeUTF8));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RPCConsole", "Using OpenSSL version", 0, QApplication::UnicodeUTF8));
        openSSLVersion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("RPCConsole", "Build date", 0, QApplication::UnicodeUTF8));
        buildDate->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("RPCConsole", "Startup time", 0, QApplication::UnicodeUTF8));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RPCConsole", "Network", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("RPCConsole", "Number of connections", 0, QApplication::UnicodeUTF8));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("RPCConsole", "Number of masternodes", 0, QApplication::UnicodeUTF8));
        masternodeCount->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("RPCConsole", "On testnet", 0, QApplication::UnicodeUTF8));
        isTestNet->setText(QString());
        label_10->setText(QApplication::translate("RPCConsole", "Block chain", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RPCConsole", "Current number of blocks", 0, QApplication::UnicodeUTF8));
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RPCConsole", "Last block time", 0, QApplication::UnicodeUTF8));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        labelDebugLogfile->setText(QApplication::translate("RPCConsole", "Debug log file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the Osiris debug log file from the current data directory. This can take a few seconds for large log files.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open", 0, QApplication::UnicodeUTF8));
        labelCLOptions->setText(QApplication::translate("RPCConsole", "Command-line options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showCLOptionsButton->setToolTip(QApplication::translate("RPCConsole", "Show the Osiris-Qt help message to get a list with possible Osiris command-line options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showCLOptionsButton->setText(QApplication::translate("RPCConsole", "&Show", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole", "&Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        copyButton->setToolTip(QApplication::translate("RPCConsole", "Copy to clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        copyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("RPCConsole", "Paste from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("RPCConsole", "Alt+P", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole", "&Console", 0, QApplication::UnicodeUTF8));
        btnClearTrafficGraph->setText(QApplication::translate("RPCConsole", "&Clear", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RPCConsole", "Totals", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("RPCConsole", "In:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("RPCConsole", "Out:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_nettraffic), QApplication::translate("RPCConsole", "&Network Traffic", 0, QApplication::UnicodeUTF8));
        banHeading->setText(QApplication::translate("RPCConsole", "Banned peers", 0, QApplication::UnicodeUTF8));
        peerHeading->setText(QApplication::translate("RPCConsole", "Select a peer to view detailed information.", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("RPCConsole", "Direction", 0, QApplication::UnicodeUTF8));
        peerDirection->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("RPCConsole", "Version", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("RPCConsole", "User Agent", 0, QApplication::UnicodeUTF8));
        peerSubversion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RPCConsole", "Services", 0, QApplication::UnicodeUTF8));
        peerServices->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("RPCConsole", "Connection Time:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("RPCConsole", "Sync Node", 0, QApplication::UnicodeUTF8));
        peerSyncNode->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("RPCConsole", "Starting Height", 0, QApplication::UnicodeUTF8));
        peerHeight->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("RPCConsole", "Ban Score", 0, QApplication::UnicodeUTF8));
        peerBanScore->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_221->setText(QApplication::translate("RPCConsole", "Connection Time", 0, QApplication::UnicodeUTF8));
        peerConnTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_151->setText(QApplication::translate("RPCConsole", "Last Send", 0, QApplication::UnicodeUTF8));
        peerLastSend->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("RPCConsole", "Last Recieve", 0, QApplication::UnicodeUTF8));
        peerLastRecv->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("RPCConsole", "Bytes Sent:", 0, QApplication::UnicodeUTF8));
        peerBytesSent->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("RPCConsole", "Bytes Received", 0, QApplication::UnicodeUTF8));
        peerBytesRecv->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("RPCConsole", "Ping Time", 0, QApplication::UnicodeUTF8));
        peerPingTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_timeoffset->setText(QApplication::translate("RPCConsole", "Time Offset", 0, QApplication::UnicodeUTF8));
        timeoffset->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        peerVersion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_peers), QApplication::translate("RPCConsole", "&Peers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_H
