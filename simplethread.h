#ifndef SIMPLETHREAD_H
#define SIMPLETHREAD_H

#endif // SIMPLETHREAD_H
#include <QThread>

class simpleThreadOne : public QThread
{
public:
    simpleThreadOne();
    void run();
};
