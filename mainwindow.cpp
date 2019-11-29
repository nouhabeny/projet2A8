#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "boutiques.h"
#include "articles.h"
#include "stock.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_boutiques_clicked()
{
    ui->centralWidget->hide();
    boutiques= new Boutiques (this);
    boutiques->show();
}

void MainWindow::on_pb_articles_clicked()
{
    ui->centralWidget->hide();
    articles= new Articles(this);
    articles->show();
}

void MainWindow::on_pb_stock_clicked()
{
    ui->centralWidget->hide();
    stock= new Stock(this);
    stock->show();
}
