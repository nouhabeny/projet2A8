#include "stock.h"
#include "ui_stock.h"
#include "mainwindow.h"
#include <QtDebug>
#include <QString>

Stock::Stock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Stock)
{
    ui->setupUi(this);
}

Stock::~Stock()
{
    delete ui;
}

void Stock::setarticle(QString n)
{
    ui->lineEdit_as->setText(n);
}

void Stock::setquantite(QString n)
{
    ui->lineEdit_qs->setText(n);
}
