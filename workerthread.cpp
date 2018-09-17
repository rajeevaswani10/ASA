#include "workerthread.h"

WorkerThread::WorkerThread(QObject *parent, Worker *worker) :
    QThread(parent)
{
    connect(this, SIGNAL (started()), worker, SLOT (process()));
    connect(worker, SIGNAL (finished()), this, SLOT (quit()));
    connect(worker, SIGNAL (finished()), worker, SLOT (deleteLater()));
    connect(this, SIGNAL (finished()), this, SLOT (deleteLater()));
}
