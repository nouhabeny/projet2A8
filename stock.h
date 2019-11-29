#ifndef STOCK_H
#define STOCK_H
#include <QtDebug>
#include <QWidget>
#include <QString>

namespace Ui {
class Stock;
}

class Stock : public QWidget
{
    Q_OBJECT

public:
    explicit Stock(QWidget *parent = nullptr);
    void setarticle(QString );
    void setquantite(QString);
    ~Stock();

private:
    Ui::Stock *ui;
    QString article;
    QString quantite;
};

#endif // STOCK_H
