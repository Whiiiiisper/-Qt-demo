#ifndef LOGINTHREAD_H
#define LOGINTHREAD_H

#include <QThread>

class LoginWindow;

class LoginThread : public QThread
{
    Q_OBJECT
public:
    explicit LoginThread();

    LoginWindow* loginWin;
private:
    void run();

};

#endif // LOGINTHREAD_H
