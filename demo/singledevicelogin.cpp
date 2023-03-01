#include <QMessageBox>
#include "singledevicelogin.h"
//#include "ui_singledevicelogin.h"


SingleDeviceLogin::SingleDeviceLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SingleDeviceLogin)
{
   
    ui->setupUi(this);
    setWindowTitle(tr("Single Device Login"));
    clearParam();
}

SingleDeviceLogin::~SingleDeviceLogin()
{
    delete ui;
}

void SingleDeviceLogin::on_QuitButton_clicked()
{
    this->close();
}

void SingleDeviceLogin::on_OKButton_clicked()
{
    m_AcessToken = ui->Token_lineEdit->text();
    std::string act = m_AcessToken.toStdString();
    if(m_AcessToken.isEmpty())
    {
        QMessageBox::information(this, tr("input Token"), tr("acToken can not be empty!"));
        return ;
    }
    m_AppKey = ui->AppKey_lineEdit->text();
    /*if(m_AppKey.isEmpty())
    {
        QMessageBox::information(this, tr("input Appkey"), tr("Appkey is empty!"));
        return ;
    }*/
    m_DevSerial = ui->DevSerial_lineEdit->text();
    if(m_DevSerial.isEmpty())
    {
        QMessageBox::information(this, tr("input Device Serial"), tr("Device Serial is empty!"));
        return ;
    }
    QString ChannelNo = ui->Channel_lineEdit->text();
    /*if(ChannelNo.isEmpty())
    {
        QMessageBox::information(this, tr("input Channel"), tr("ChannelNo is empty!"));
        return ;
    }*/
    m_Channel = ChannelNo.toInt();

    this->close();

}

void SingleDeviceLogin::getTokenFromLogin(QString& acToken)
{
    acToken = m_AcessToken;
}

void SingleDeviceLogin::getAppKeyFromLogin(QString& appKey)
{
    appKey = m_AppKey;
}

void SingleDeviceLogin::getDevSerialFromLogin(QString& devSerial)
{
    devSerial = m_DevSerial;
}

void SingleDeviceLogin::getChannelFromLogin(int& channel)
{
    channel = m_Channel;
}

void SingleDeviceLogin::clearParam()
{
    m_AcessToken.clear();
    m_AppKey.clear();
    m_DevSerial.clear();
    m_Channel = 0;
}
