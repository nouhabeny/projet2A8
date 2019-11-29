#include "magasins.h"
#include "ui_magasins.h"

magasins::magasins(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::magasins)
{
    ui->setupUi(this);
}

magasins::~magasins()
{
    delete ui;
}

void magasins::on_pushButton_clicked()
{
    magasins magasin;
      magasins.setnom(ui->lineEditnm->text());
      magasins.setcategorie(ui->lineEditcm->text());
      magasins.setstand(ui->lineEditsm->text());

    magasins.exec();
}
