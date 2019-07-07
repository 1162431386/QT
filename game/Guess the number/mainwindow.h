#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMovie>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:                     
    void on_startbutton_clicked();  //相应槽函数
    
    void on_endbutton_clicked();

    void on_button_del_clicked();

    void on_button_piont_clicked();


protected:
    void timerEvent(QTimerEvent *event);  //添加定时器事件
private:
    Ui::MainWindow *ui;
    int gametime;   
    QString randStr;  //
    int gametimeid;
    int overtimeid;
    int wintimeid;
    QString resultStr;
    void delnum();
    void on_action_triggered();
    void on_action2_triggered();
    void on_action3_triggered();
    QMovie startmovie;
    QMovie winmovie;
};

#endif // MAINWINDOW_H
