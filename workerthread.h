#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QThread>
#include "worker.h"

class WorkerThread : public QThread
{
    Q_OBJECT
public:
    explicit WorkerThread(QObject *parent = 0, Worker *w = 0);

signals:

public slots:

};

#endif // WORKERTHREAD_H
