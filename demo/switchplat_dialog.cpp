#include "switchplat_dialog.h"
//#include "ui_switchplat_dialog.h"
#include "Opennetstream.h"
#include  <QMessageBox>

switchPlat::switchPlat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::switchPlat)
{
    ui->setupUi(this);
}

switchPlat::~switchPlat()
{
    delete ui;
}

void switchPlat::on_OKButton_clicked()
{
    QString AuthAddr=ui->AuthAddress->text();
    QString PlatAddr=ui->PlatformAddress->text();
    QString AppID=ui->Appkey->text();
    if(NULL==AuthAddr && NULL==PlatAddr && NULL==AppID)
    {
            QMessageBox::information(this,tr(""),tr("Input NULL!"));
            return;
    }
    if(NULL!= AuthAddr )
        OpenNetStream::getInstance()->setAuthAddr(AuthAddr);//OpenSDK_SetAuthAddr(AuthAddr);
    if( NULL!=PlatAddr)
        OpenNetStream::getInstance()->setPlatForm(PlatAddr);
    if(NULL!=AppID)
        OpenNetStream::getInstance()->setAppId(AppID);
    this->close();
}
