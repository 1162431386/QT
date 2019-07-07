#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamemode.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
   // void mouseReleaseEvent(QMouseEvent *event);

private:

    Ui::MainWindow *ui;
    int chess_x;
    int chess_y;
    int grand_x;
    int grand_y;
    int start_x;
    int start_y;
    int point_x;
    int point_y;
    int click_x;
    int click_y;
    gamemode *game;
    void personAct();
    void Init_Game();
    void Print_win(void);
    void start_Game();

};

#endif // MAINWINDOW_H
