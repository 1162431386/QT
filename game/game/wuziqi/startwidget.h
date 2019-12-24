#ifndef STARTWIDGET_H
#define STARTWIDGET_H
#include <QWidget>
#include "mainwindow.h"
#include "QMouseEvent"
class MainWindow;
namespace Ui {
class startwidget;
}

class startwidget : public QWidget
{
    Q_OBJECT

public:
    explicit startwidget(QWidget *parent = nullptr);
    ~startwidget();
    MainWindow *mainwindow;

protected:
     void paintEvent(QPaintEvent *event);
     void mousePressEvent(QMouseEvent *event);
     void dealwith_signal();

private slots:
     void on_pushButton_clicked();

     void on_pushButton_2_clicked();

     void on_pushButton_3_clicked();

private:
    Ui::startwidget *ui;
};

#endif // STARTWIDGET_H
