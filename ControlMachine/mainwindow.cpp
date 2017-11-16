#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebKit/QWebView>

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
//    QWebView *view = new QWebView(widgetMain);
//    view->show();
//    view->load(QUrl("http://google.com"));

    moduleGui.init_Interface(widgetMain);
}
