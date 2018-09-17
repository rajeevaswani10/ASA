#include "loginform.h"
#include "ui_loginform.h"
#include "QMessageBox"

LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_pushButton_clicked()
{
    QString user = ui->field_user->text();
    QString password = ui->field_password->text();

    if(user == "test" && password == "test")
    {
        QMessageBox::information(this,"","Login successfull ");
        close();
    }
    else
    {
        QMessageBox::warning(this,"","Error: Invalid Credentials ");
    }
}
