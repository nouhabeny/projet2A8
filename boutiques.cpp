#include "boutiques.h"
#include "boutiques.h"
#include "ui_boutiques.h"
#include "mainwindow.h"
#include <QtDebug>
#include <QString>

Boutiques::Boutiques(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Boutiques)
{
    ui->setupUi(this);
}

Boutiques::~Boutiques()
{
    delete ui;
}

void Boutiques::setnom(QString n)
{
    ui->lineEdit_nb->setText(n);
}

void Boutiques::setcategorie(QString n)
{
    ui->lineEdit_cb->setText(n);
}
void Boutiques::setstand(QString n)
{
ui->lineEdit_sb->setText(n);
}

void Boutiques::on_pb_ajouter_clicked()
{

}
