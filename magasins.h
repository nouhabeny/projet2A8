#ifndef MAGASINS_H
#define MAGASINS_H

#include <QWidget>

namespace Ui {
class magasins;
}

class magasins : public QWidget
{
    Q_OBJECT

public:
    explicit magasins(QWidget *parent = nullptr);
    ~magasins();

private slots:
    void on_pushButton_clicked();

private:
    Ui::magasins *ui;
};

#endif // MAGASINS_H
