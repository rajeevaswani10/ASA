#ifndef MAINUI_H
#define MAINUI_H

#include <QMainWindow>
#include "dbmanager.h"

namespace Ui {
class MainUI;
}

class MainUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = 0);
    ~MainUI();

private slots:
    void on_newtest_clicked();
    void addtest();

private:
    Ui::MainUI *ui;
    DbManager* db_mgr;
};

#endif // MAINUI_H
