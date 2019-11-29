#ifndef BOUTIQUES_H
#define BOUTIQUES_H

#include <QWidget>

namespace Ui {
class Boutiques;
}

class Boutiques : public QWidget
{
    Q_OBJECT

public:
    explicit Boutiques(QWidget *parent = nullptr);
    void setnom(QString );
    void setcategorie(QString );
    void setstand(QString);

    ~Boutiques();

private:
    Ui::Boutiques *ui;
    QString nom,categorie;
    QString stand;
};

#endif // BOUTIQUES_H
