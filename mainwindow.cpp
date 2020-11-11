#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_actionNew_triggered()
{
   MainWindow *nw = new MainWindow();
   nw->show();

}

void MainWindow::on_actionClose_triggered()
{
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    qApp->closeAllWindows();
}
