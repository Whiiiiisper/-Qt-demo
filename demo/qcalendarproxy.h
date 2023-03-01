#ifndef QCALENDARPROXY_H
#define QCALENDARPROXY_H

#include <QDialog>
#include <QDate>
#include <QCalendarWidget>

typedef enum {
	CalendarNone = -1,
	CalendarSelected
};

class QCalendarProxy : public QDialog
{
    Q_OBJECT
public:
    explicit QCalendarProxy(QWidget *parent = 0);
    ~QCalendarProxy();
	
	bool dataSelected();
    static int selectedDate(const QString& windowTitle,  QDate& selectedDate);

signals:

public slots:
	void dataSelect();

private:
    QCalendarWidget* m_calendarWidget;
	bool isDataSelected;
};

#endif // QCALENDARPROXY_H
