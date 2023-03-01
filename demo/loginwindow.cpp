#include "loginwindow.h"
#include "opennetstream.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <QDebug>
#include "localsetting.h"
#include "json/json.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent)
{
	setWindowTitle(tr("Ezviz authorization"));
	m_pLayout = new QStackedLayout(this);

	m_pHomeWidget = new QWidget(this);
	m_pHomeLayout = new QGridLayout(m_pHomeWidget);
	m_pOAuthButton = new QPushButton(m_pHomeWidget);
	m_pOAuthButton->setText(tr("Ezviz OAuth Protocol Login"));
	m_pAcTokenButton = new QPushButton(m_pHomeWidget);
	m_pAcTokenButton->setText(tr("Enter into page of device list"));
	m_pHomeLayout->addWidget(m_pOAuthButton,0,0);
	m_pHomeLayout->addWidget(m_pAcTokenButton,1,0);

	m_pPage1Widget = new QWidget(this);
	m_pPage1Layout = new QGridLayout(m_pPage1Widget);
	m_pTokenHintLabel = new QLabel(m_pPage1Widget);
	m_pTokenHintLabel->setText(tr("Please input accesstoken:"));
	m_pTokenTextEdit = new QTextEdit(m_pPage1Widget);
	m_pGetDevListButton = new QPushButton(m_pPage1Widget);
	m_pGetDevListButton->setText(tr("Enter into the page of device list"));
	m_pPage1Layout->addWidget(m_pTokenHintLabel,0,0);
	m_pPage1Layout->addWidget(m_pTokenTextEdit,1,0);
	m_pPage1Layout->addWidget(m_pGetDevListButton,2,0);

	m_pLayout->addWidget(m_pHomeWidget);
	m_pLayout->addWidget(m_pPage1Widget);

	m_pLayout->setCurrentWidget(m_pHomeWidget);

	connect(m_pOAuthButton,SIGNAL(clicked()),this,SLOT(on_OAuthButton_clicked()));
	connect(m_pAcTokenButton,SIGNAL(clicked()),this,SLOT(on_AcTokenButton_clicked()));
	connect(m_pGetDevListButton,SIGNAL(clicked()),this,SLOT(on_GetDevListButton_clicked()));

	m_acToken.clear();
}

LoginWindow::~LoginWindow()
{

}

void LoginWindow::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
    m_pLayout->setCurrentWidget(m_pHomeWidget);
}

void LoginWindow::getTokenFromLogin(QString& acToken)
{
    acToken = m_acToken;
}

void LoginWindow::clearParam()
{
    m_acToken.clear();
}

void LoginWindow::on_OAuthButton_clicked()
{
    m_acToken = OpenNetStream::getInstance()->login();
    //loginThread.loginWin = this;
    //loginThread.start();
    this->close();
}

void LoginWindow::on_AcTokenButton_clicked()
{
    m_pLayout->setCurrentWidget(m_pPage1Widget);
}

void LoginWindow::on_GetDevListButton_clicked()
{
    m_acToken = m_pTokenTextEdit->toPlainText();
    if(m_acToken.isEmpty())
    {
        QMessageBox::information(this, tr("input acToken"), tr("acToken can not be empty!"));
		return ;
    }
	this->close();
}
