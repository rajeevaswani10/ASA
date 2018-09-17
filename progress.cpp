#include "progress.h"
#include "ui_progress.h"

TaskProgress::TaskProgress(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::progress)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Window
                   | Qt::FramelessWindowHint);

    ui->progressBar->setValue(0);

    w = new Worker(this);
    th = new WorkerThread(this,w);
    connect(th,SIGNAL(started()),this,SLOT(started()));
    connect(th,SIGNAL(finished()),this,SLOT(terminated()));
    connect(w, SIGNAL (error(QString)), this, SLOT (errorString(QString)));
    connect(w, SIGNAL (progress(int)), this, SLOT (progress(int)));

    th->start();
}

TaskProgress::~TaskProgress()
{
    delete ui;
}

void TaskProgress::started(){
    qDebug("successfully started task");
}

void TaskProgress::terminated(){
    qDebug("task terminated");
    close();
}

void TaskProgress::aborted(){
    qDebug("task aborted");

}

void TaskProgress::errorString(QString qStr){
    qDebug("task error");
}

void TaskProgress::progress(int progress){
    qDebug("task in progress");
    int val = ui->progressBar->value();
    ui->progressBar->setValue(progress+val);
}
