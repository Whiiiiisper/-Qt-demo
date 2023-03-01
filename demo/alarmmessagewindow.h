#ifndef ALARM_MESSAGE_WINDOW_H
#define ALARM_MESSAGE_WINDOW_H

#include <QDialog>
#include <QStackedLayout>
#include <QLabel>

class AlarmMessageWindow : public QDialog
{
    Q_OBJECT
public:
    explicit AlarmMessageWindow(const QImage *picImage, QWidget *parent = 0);
    ~AlarmMessageWindow();

signals:

public slots:

private:
    //[1] ui data
    QStackedLayout *m_pLayout;

    QWidget *m_pHomeWidget;
    QGridLayout *m_pHomeLayout;
    QLabel *m_pAlarmPicHintLabel;
    QLabel *m_pAlarmPicLabel;
};

#endif // ALARM_MESSAGE_WINDOW_H
