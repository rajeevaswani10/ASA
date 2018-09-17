#include "mainui.h"
#include "ui_mainui.h"
#include "starttest.h"
#include <QTableWidget>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QSqlTableModel>
#include "progress.h"
#include <QThread>

MainUI::MainUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainUI)
{
    ui->setupUi(this);

    //initialize db manager..
    db_mgr = new DbManager(QString("/home/rajeev/test1.db"));
    QSqlTableModel *model = new QSqlTableModel(this, db_mgr->getDatabaseObject());
    model->setTable("people");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("id"));
    model->setHeaderData(1, Qt::Horizontal, tr("name"));

    ui->tableView->setModel(model);
    ui->tableView->show();
}

MainUI::~MainUI()
{
    delete ui;
}

void MainUI::on_newtest_clicked()
{
    StartTest  newtest(this);
    newtest.setModal(true);
    connect(&newtest, SIGNAL(accepted()), this, SLOT(addtest()));
    newtest.exec();
}

void MainUI::addtest(){
    qDebug("successfully added test");
    TaskProgress prog(this);
    prog.setModal(true);
    prog.exec();
}
