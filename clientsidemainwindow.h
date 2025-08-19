#ifndef CLIENTSIDEMAINWINDOW_H
#define CLIENTSIDEMAINWINDOW_H

#include <QMainWindow>
#include "devicecontroller.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class ClientSideMainWindow;
}
QT_END_NAMESPACE

class ClientSideMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    ClientSideMainWindow(QWidget *parent = nullptr);
    ~ClientSideMainWindow();

private slots:
    void on_InIpAdr_textChanged(const QString &arg1);

    void on_BtnConnect_clicked();
    void on_pushButton_clicked();
    void device_connected();
    void device_disconnected();
    void device_stateChanged(QAbstractSocket::SocketState);
    void device_errorOccurred(QAbstractSocket::SocketError);
    void device_dataRead(QByteArray data);




    void on_sendBtn_clicked();

private:
    Ui::ClientSideMainWindow *ui;
    DeviceController _controller;
    void setDeviceController();
};
#endif // CLIENTSIDEMAINWINDOW_H
