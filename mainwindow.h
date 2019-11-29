#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "boutiques.h"
#include "articles.h"
#include "stock.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb_boutiques_clicked();

    void on_pb_articles_clicked();

    void on_pb_stock_clicked();

private:
    Ui::MainWindow *ui;
    Boutiques *boutiques;
    Articles *articles;
    Stock *stock;
};

#endif // MAINWINDOW_H
