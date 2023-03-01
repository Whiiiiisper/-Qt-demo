#include "loginthread.h"
#include "opennetstream.h"
#include "loginwindow.h"
#include <QDebug>

LoginThread::LoginThread()
{
    loginWin = NULL;
}

void LoginThread::run()
 {
      qDebug() << "login from worker thread " << thread()->currentThreadId();
      OpenNetStream::getInstance()->login();
      if(loginWin)
      {
        //loginWin->closeWindow();
      }
 }
