/********************************************************************************
** Form generated from reading UI file 'clientsidemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSIDEMAINWINDOW_H
#define UI_CLIENTSIDEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientSideMainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *InIpAdr;
    QLabel *label_2;
    QFormLayout *formLayout_2;
    QSpinBox *SpinPort;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnConnect;
    QGroupBox *grpBoxsend;
    QFormLayout *formLayout_4;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *msgInput;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *ListConsole;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientSideMainWindow)
    {
        if (ClientSideMainWindow->objectName().isEmpty())
            ClientSideMainWindow->setObjectName("ClientSideMainWindow");
        ClientSideMainWindow->resize(790, 509);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/client.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ClientSideMainWindow->setWindowIcon(icon);
        ClientSideMainWindow->setAutoFillBackground(false);
        ClientSideMainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);"));
        centralwidget = new QWidget(ClientSideMainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 30, 301, 191));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(50, 50, 201, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        InIpAdr = new QLineEdit(formLayoutWidget);
        InIpAdr->setObjectName("InIpAdr");
        InIpAdr->setStyleSheet(QString::fromUtf8("#InIpAdr[state=\"0\"]{\n"
"	background-color: rgb(228, 110, 109);\n"
"}\n"
"\n"
"\n"
"#InIpAdr[state=\"1\"]{\n"
"	background-color:rgb(164, 198, 134);\n"
"}"));
        InIpAdr->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, InIpAdr);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        SpinPort = new QSpinBox(formLayoutWidget);
        SpinPort->setObjectName("SpinPort");
        SpinPort->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        SpinPort->setMinimum(1024);
        SpinPort->setMaximum(65535);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, SpinPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(0, QFormLayout::ItemRole::FieldRole, horizontalSpacer);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, formLayout_2);

        BtnConnect = new QPushButton(groupBox);
        BtnConnect->setObjectName("BtnConnect");
        BtnConnect->setGeometry(QRect(110, 120, 81, 31));
        BtnConnect->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        grpBoxsend = new QGroupBox(centralwidget);
        grpBoxsend->setObjectName("grpBoxsend");
        grpBoxsend->setGeometry(QRect(50, 250, 301, 91));
        formLayout_4 = new QFormLayout(grpBoxsend);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_3 = new QLabel(grpBoxsend);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        msgInput = new QLineEdit(grpBoxsend);
        msgInput->setObjectName("msgInput");
        msgInput->setStyleSheet(QString::fromUtf8("#InIpAdr[state=\"0\"]{\n"
"	background-color: rgb(228, 110, 109);\n"
"}\n"
"\n"
"\n"
"#InIpAdr[state=\"1\"]{\n"
"	background-color:rgb(164, 198, 134);\n"
"}"));
        msgInput->setClearButtonEnabled(true);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, msgInput);


        formLayout_4->setLayout(0, QFormLayout::ItemRole::SpanningRole, formLayout_3);

        sendBtn = new QPushButton(grpBoxsend);
        sendBtn->setObjectName("sendBtn");
        sendBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, sendBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_4->setItem(2, QFormLayout::ItemRole::LabelRole, horizontalSpacer_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(440, 40, 311, 401));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ListConsole = new QListWidget(widget);
        ListConsole->setObjectName("ListConsole");

        verticalLayout->addWidget(ListConsole);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton);

        ClientSideMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientSideMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 790, 17));
        ClientSideMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ClientSideMainWindow);
        statusbar->setObjectName("statusbar");
        ClientSideMainWindow->setStatusBar(statusbar);

        retranslateUi(ClientSideMainWindow);

        QMetaObject::connectSlotsByName(ClientSideMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientSideMainWindow)
    {
        ClientSideMainWindow->setWindowTitle(QCoreApplication::translate("ClientSideMainWindow", "Client", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ClientSideMainWindow", "Connection Information", nullptr));
        label->setText(QCoreApplication::translate("ClientSideMainWindow", "Ip Adress:", nullptr));
        InIpAdr->setInputMask(QCoreApplication::translate("ClientSideMainWindow", "000.000.000.000;_", nullptr));
        InIpAdr->setText(QCoreApplication::translate("ClientSideMainWindow", "127.0.0.1", nullptr));
        InIpAdr->setProperty("state", QVariant(QString()));
        label_2->setText(QCoreApplication::translate("ClientSideMainWindow", "Port:", nullptr));
        BtnConnect->setText(QCoreApplication::translate("ClientSideMainWindow", "Connect", nullptr));
        grpBoxsend->setTitle(QCoreApplication::translate("ClientSideMainWindow", "Connection Information", nullptr));
        label_3->setText(QCoreApplication::translate("ClientSideMainWindow", "Message", nullptr));
        msgInput->setInputMask(QString());
        msgInput->setText(QString());
        msgInput->setProperty("state", QVariant(QString()));
        sendBtn->setText(QCoreApplication::translate("ClientSideMainWindow", "Send", nullptr));
        pushButton->setText(QCoreApplication::translate("ClientSideMainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientSideMainWindow: public Ui_ClientSideMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSIDEMAINWINDOW_H
