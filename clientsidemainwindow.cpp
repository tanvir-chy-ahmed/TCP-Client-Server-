#include "clientsidemainwindow.h"
#include "ui_clientsidemainwindow.h"

#include <QHostAddress>
#include <QMetaEnum>
#include <QStyle>
#include <QMessageBox>

ClientSideMainWindow::ClientSideMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientSideMainWindow)
{
    ui->setupUi(this);
    setDeviceController();
}

ClientSideMainWindow::~ClientSideMainWindow()
{
    delete ui;
}

void ClientSideMainWindow::on_InIpAdr_textChanged(const QString &arg1)
{
    QHostAddress address(arg1);
    QString state = "0";

    if(arg1 == "...")
    {
        state = "";
    }else{

if(QAbstractSocket::IPv4Protocol == address.protocol())
        {
            state = "1";
        }
    }

    ui->InIpAdr->setProperty("state",state);
    style()->polish(ui->InIpAdr);
}


void ClientSideMainWindow::on_BtnConnect_clicked()
{
    if(_controller.isConnected()){
        _controller.disconnect();
    }else{
        auto ip = ui->InIpAdr->text();
        auto port = ui->SpinPort->value();
        _controller.connectToDevice(ip,port);
    }




}

void ClientSideMainWindow::device_connected()
{
    ui->ListConsole->addItem("Connected To Device");
    ui->BtnConnect->setText("Disconnect");
    ui->grpBoxsend->setEnabled(true);
}

void ClientSideMainWindow::device_disconnected()
{
    ui->ListConsole->addItem("Disconnected from Device");
     ui->BtnConnect->setText("Connect");
     ui->grpBoxsend->setEnabled(false);
}

void ClientSideMainWindow::device_stateChanged(QAbstractSocket::SocketState state)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    ui->ListConsole->addItem(metaEnum.valueToKey(state));
}


void ClientSideMainWindow::device_errorOccurred(QAbstractSocket::SocketError error)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    ui->ListConsole->addItem(metaEnum.valueToKey(error));
}

void ClientSideMainWindow::device_dataRead(QByteArray data)
{
    ui->ListConsole->addItem(QString(data));
}



void ClientSideMainWindow::setDeviceController()
{
    connect(&_controller, &DeviceController::connected, this, &ClientSideMainWindow::device_connected);
    connect(&_controller, &DeviceController::disconnected, this, &ClientSideMainWindow::device_disconnected);
    connect(&_controller, &DeviceController::stateChanged, this, &ClientSideMainWindow::device_stateChanged);
    connect(&_controller, &DeviceController::errorOccurred, this, &ClientSideMainWindow::device_errorOccurred);
    // MISSING:
    connect(&_controller, &DeviceController::dataReady, this, &ClientSideMainWindow::device_dataRead);
}

void ClientSideMainWindow::on_pushButton_clicked()
{
    QListWidgetItem *list = new QListWidgetItem("");
    ui->ListConsole->addItem(list);
    if(list->text().isEmpty())
    {
        QMessageBox::question(this,"Notice","Console is Already Blank");

    }else{
         ui->ListConsole->clear();
    }

}


void ClientSideMainWindow::on_sendBtn_clicked()
{
    auto message = ui->msgInput->text().trimmed();
    _controller.send(message);
}

