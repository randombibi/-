#include "simplethread.h"
#include <QDebug>

simpleThreadOne::simpleThreadOne()
{

}

void simpleThreadOne::run()
{  while (true)
    {
        qDebug()<<"SimpleThreadOne run!";
        sleep(2);
    }
}
