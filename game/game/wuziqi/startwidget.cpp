#include "startwidget.h"
#include "ui_startwidget.h"
#include "QPainter"
#include "QDebug"
startwidget::startwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startwidget)
{
    ui->setupUi(this);
    mainwindow=new MainWindow;
    ui->stackedWidget->setCurrentWidget(ui->page);
 /*
设置按钮样式
*/
    ui->pushButton->setStyleSheet ("border:2px groove gray;border-radius:10px;padding:2px 6px;background:white;"
                                   "font-family:'微软雅黑';font-size:26px;color:rgb(0,0,0,255);}"
                                    "QPushButton:hover{background-color: rgb(50, 170, 200);border:none;color:rgb(255, 255, 255);}");

    ui->pushButton_2->setStyleSheet ("border:2px groove gray;border-radius:10px;padding:2px 6px;background:white;"
                                     "font-family:'微软雅黑';font-size:26px;color:rgb(0,0,0,255);}"
                                      "QPushButton:hover{background-color: rgb(50, 170, 200);border:none;color:rgb(255, 255, 255);}");

    ui->pushButton_3->setStyleSheet ("border:2px groove gray;border-radius:10px;padding:2px 6px;background:white;"
                                     "font-family:'微软雅黑';font-size:26px;color:rgb(0,0,0,255);}"
                                     "QPushButton:hover{background-color: rgb(50, 170, 200);border:none;color:rgb(255, 255, 255);}");
    connect(mainwindow,&MainWindow::mySignal,this,&startwidget::dealwith_signal);

}

startwidget::~startwidget()
{

    delete mainwindow;
    delete ui;
}
void startwidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);//创建Qpainter类型并指定绘图背景
    p.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/new/prefix1/beijing.jpg")); //设置窗口背景]

}

void startwidget::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void startwidget::on_pushButton_2_clicked()
{
  exit(1);
}

void startwidget::on_pushButton_3_clicked()
{
    mainwindow->show();
    this->hide();
}

void startwidget::mousePressEvent(QMouseEvent *)
{

 ui->stackedWidget->setCurrentWidget(ui->page);

}

void startwidget::dealwith_signal()
{
   mainwindow->hide();
   this->show();

}
