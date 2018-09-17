#include "worker.h"
#include <QTimer>

Worker::Worker(QObject *parent) :
    QObject(parent)
{

}

void Worker::process() { // Process. Start processing data.
    // allocate resources using new here
    qDebug("Hello World!");
    QTimer::singleShot(1000, this, SLOT(progres())); //simulating some work..  actually sleeping for 6 sec.
    QTimer::singleShot(2000, this, SLOT(progres())); //simulating some work..  actually sleeping for 6 sec.
    QTimer::singleShot(3000, this, SLOT(progres())); //simulating some work..  actually sleeping for 6 sec.
    QTimer::singleShot(4000, this, SLOT(progres())); //simulating some work..  actually sleeping for 6 sec.
    QTimer::singleShot(5000, this, SLOT(progres())); //simulating some work..  actually sleeping for 6 sec.
    QTimer::singleShot(6000, this, SLOT(finish())); //simulating some work..  actually sleeping for 6 sec.
}

void Worker::finish(){
    emit finished();
}

void Worker::progres(){
    emit progress(20); //for testing
}
