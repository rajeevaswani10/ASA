#ifndef PROGRESS_H
#define PROGRESS_H

#include <QDialog>
#include "workerthread.h"
#include "worker.h"

namespace Ui {
class progress;
}

class TaskProgress : public QDialog
{
    Q_OBJECT

public:
    explicit TaskProgress(QWidget *parent = 0);
    ~TaskProgress();

    void setProgress();

public Q_SLOTS:
    void started();
    void terminated();
    void aborted();
    void progress(int TaskProgress);
    void errorString(QString qStr);

private:
    Ui::progress *ui;
    WorkerThread *th;
    Worker *w;
};

#endif // PROGRESS_H
