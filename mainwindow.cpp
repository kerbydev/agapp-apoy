#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString UserName = ui->lineEdit_Email->text();
    QString PassworD = ui->lineEdit_Password->text();
    if (UserName=="Admin" && PassworD == "123456" ){
        QMessageBox :: information(this,"LogIn","Login Succesful");
}

}
