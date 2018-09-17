#ifndef NEWTEST_H
#define NEWTEST_H

#include <QDialog>

namespace Ui {
class newtest;
}

class newtest : public QDialog
{
    Q_OBJECT

public:
    explicit newtest(QWidget *parent = 0);
    ~newtest();

private:
    Ui::newtest *ui;
};

#endif // NEWTEST_H
