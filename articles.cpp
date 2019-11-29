#include "articles.h"
#include "ui_articles.h"
#include "mainwindow.h"
#include <QtDebug>
#include <QString>

Articles::Articles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Articles)
{
    ui->setupUi(this);
}

Articles::~Articles()
{
    delete ui;
}

void Articles::setnom(QString n)
{
    ui->lineEdit_na->setText(n);
}

void Articles::setcategorie(QString n)
{
    ui->lineEdit_ca->setText(n);
}

void Articles::setrayon(QString n)
{
ui->lineEdit_ra->setText(n);
}

void Articles::setprix(QString n)
{
ui->lineEdit_pa->setText(n);
}


