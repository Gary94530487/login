#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui -> lineEdit_UserName -> text();
    QString Password = ui -> lineEdit_Password -> text();
    if((UserName == "fourthchicken" && Password == "a94530487") || (UserName == "" && Password == "")){
        QMessageBox::information(this, "Qt with Gary", "Login Success.");
        //this -> hide();
        QString file = "test.txt";
        QString one = "one";
        QString two = "two";
        QString three = "three";
        QtText txt;
        //txt.clearFile(file);
        //txt.writeFile(file, one);
        //txt.writeFile(file, two);
        //txt.writeFile(file, three);
        txt.readFile(file);

    }
    else{
        QMessageBox::warning(this, "Qt with Gary", "Wrong UserName or Password!");
    }
}


void MainWindow::on_pushButton_Cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Qt with Gary", "Are you sure to close the window?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }
}

