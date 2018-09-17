#include "newtest.h"
#include "ui_newtest.h"

newtest::newtest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newtest)
{
    ui->setupUi(this);
}

newtest::~newtest()
{
    delete ui;
}
