#include "alarmmessagewindow.h"
#include "opennetstream.h"
#include "OpenNetStreamError.h"
#include <QMessageBox>
#include <QDebug>
#include "localsetting.h"

AlarmMessageWindow::AlarmMessageWindow(const QImage *picImage, QWidget *parent) :
    QDialog(parent)
{
    m_pLayout = new QStackedLayout(this);

    m_pHomeWidget = new QWidget(this);
    m_pHomeLayout = new QGridLayout(m_pHomeWidget);

    m_pAlarmPicHintLabel = new QLabel(m_pHomeWidget);
    m_pAlarmPicHintLabel->setText("Picture Info:");
    m_pAlarmPicLabel = new QLabel(m_pHomeWidget);
    m_pAlarmPicLabel->setPixmap(QPixmap::fromImage(*picImage));

    m_pHomeLayout->addWidget(m_pAlarmPicHintLabel,0,0);
    m_pHomeLayout->addWidget(m_pAlarmPicLabel,1,0);


    m_pLayout->addWidget(m_pHomeWidget);
}

AlarmMessageWindow::~AlarmMessageWindow()
{

}
