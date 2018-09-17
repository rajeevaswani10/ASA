#ifndef STARTTEST_H
#define STARTTEST_H

#include <QDialog>

namespace Ui {
class StartTest;
}

class StartTest : public QDialog
{
    Q_OBJECT

public:
    explicit StartTest(QWidget *parent = 0);
    ~StartTest();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::StartTest *ui;
};

#endif // STARTTEST_H
