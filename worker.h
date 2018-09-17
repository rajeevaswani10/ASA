#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = 0);

signals:
    void progress(int val);
    void finished();
    void error(QString err);

public slots:
    void process();
    void finish(); //for simulation..
    void progres();  //for simulation..

};

#endif // WORKER_H
