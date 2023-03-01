#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QTextCodec>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTranslator translator;
    translator.load(":/language/EzvizQtDemo_zh.qm");
    app.installTranslator(&translator);

    QFile file(":/resource/style.css");
    file.open(QIODevice::ReadOnly);
    qApp->setStyleSheet(file.readAll());

    MainWindow win;

    win.show();

    return app.exec();
}
