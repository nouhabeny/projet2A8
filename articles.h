#ifndef ARTICLES_H
#define ARTICLES_H
#include <QtDebug>
#include <QWidget>
#include <QString>

namespace Ui {
class Articles;
}

class Articles : public QWidget
{
    Q_OBJECT

public:
    explicit Articles(QWidget *parent = nullptr);
    void setnom(QString );
    void setcategorie(QString );
    void setrayon(QString);
    void setprix(QString);

    ~Articles();

private:
    Ui::Articles *ui;
    QString nom,categorie;
    QString prix,rayon;
};

#endif // ARTICLES_H
