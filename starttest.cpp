#include "starttest.h"
#include "ui_starttest.h"
#include "progress.h"

StartTest::StartTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartTest)
{
    ui->setupUi(this);
}

StartTest::~StartTest()
{
    delete ui;
}

void StartTest::on_buttonBox_accepted()
{
}
