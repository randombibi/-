#include "widget.h"

#include <QApplication>
#include<simplethread.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(600,800);
    w.show();
    qDebug() << "main() begin";
    simpleThreadOne thread;
    thread.start();
    return a.exec();
}

