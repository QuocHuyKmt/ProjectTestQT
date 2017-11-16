#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_Interface(this->ui->centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_Interface(QWidget *widgetMain)
{
    moduleGui.init_Interface(widgetMain);
}
