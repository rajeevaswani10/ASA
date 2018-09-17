#include "asatest.h"

AsaTest::AsaTest(QObject *parent) :
    QThread(parent)
{

}

void AsaTest::process(){
    // allocate resources using new here
    qDebug("Hello World!");
    emit finished();
}
