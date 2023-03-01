#include <QHBoxLayout>
#include "qcalendarproxy.h"

QCalendarProxy::QCalendarProxy(QWidget *parent) :
    QDialog(parent),
	isDataSelected(false)
{
    QHBoxLayout* mainlayout = new QHBoxLayout(this);
    mainlayout->setContentsMargins(0, 0, 0, 0);

    m_calendarWidget = new QCalendarWidget(this);
    mainlayout->addWidget(m_calendarWidget);

     connect(m_calendarWidget, SIGNAL(clicked(QDate)), this, SLOT(dataSelect()));
}

QCalendarProxy::~QCalendarProxy()
{

}

bool QCalendarProxy::dataSelected()
{
	return this->isDataSelected;
}

void QCalendarProxy::dataSelect()
{
	this->isDataSelected = true;
	this->close();
}

int QCalendarProxy::selectedDate(const QString& windowTitle, QDate& selectedDate)
{
    QCalendarProxy proxy;
    proxy.setWindowTitle(windowTitle);
    proxy.exec();
	if (proxy.dataSelected())
	{
		 selectedDate = proxy.m_calendarWidget->selectedDate();
		 return CalendarSelected;
	}
    return CalendarNone;
}
