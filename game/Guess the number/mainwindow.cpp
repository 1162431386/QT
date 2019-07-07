#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTime>
#include<QMessageBox>
#include<qstring.h>
#include<QDebug>
#include<QMovie>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page);   //ui设计中使用stacked控件创建多个页面，首页默认index（0），显示首页
     
     /*游戏失败动画初始化*/
    startmovie.setFileName(":/new/prefix1/85ccde71gw1fasliemtifg208c05phdt.gif");    
    ui->label_3->setMovie(&startmovie);
    ui->label_3->setScaledContents(true);

    /*游戏成功动画初始化 */
    winmovie.setFileName(":/new/prefix1/-48482abb2408b8fd.gif");
    ui->label_4->setMovie(&winmovie);
    ui->label_4->setScaledContents(true);



  //  ui->stackedWidget->setCurrentIndex(2);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::on_startbutton_clicked); //开始游戏的信号函数
    connect(ui->pushButton_2,&QPushButton::clicked,this,&MainWindow::on_endbutton_clicked);  //结束槽
  /*button 0～ 9对应的信号*/
    connect(ui->button0,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button1,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button2,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button3,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button4,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button5,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button6,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button7,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button8,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button9,&QPushButton::clicked,this,&MainWindow::delnum);
    connect(ui->button_del,&QPushButton::clicked,this,&MainWindow::on_button_del_clicked);  //删除信号
    connect(ui->button_piont,&QPushButton::clicked,this,&MainWindow::on_button_piont_clicked); //提示信号
    connect(ui->action,&QAction::triggered,this,&MainWindow::on_action_triggered);
    connect(ui->action_2,&QAction::triggered,this,&MainWindow::on_action2_triggered);
    connect(ui->action_3,&QAction::triggered,this,&MainWindow::on_action3_triggered);


}

/*游戏开始槽函数*/
void MainWindow::on_startbutton_clicked()
{
  gametime=ui->comboBox->currentText().toInt();  //首先从combobox读取里面的值，然后转化为int类型（gametime为全局成员）
  qDebug("%d",gametime);  //用于调试看读取成功没
  ui->stackedWidget->setCurrentWidget(ui->page_2); //按钮按下后，显示第二个界面，即游戏界面
  int num; //定义int变量来存放随机数
  qsrand(QTime(0,0,0).secsTo(QTime::currentTime())); //
  while((num=qrand()%10000)<999); //显示0~10000内随机数，并且剔除小于四位数的数值
  randStr = QString::number(num); //将生成的随机数转化为字符串 

  ui->progressBar->setMaximum(0); //设置进度条最小值为0
  ui->progressBar->setMaximum(gametime); //进度条最大值为gametime
  ui->progressBar->setValue(gametime); //设置进度条当前值为gametime

  gametimeid=0; //gametimeid初始化为0（全局成员）
  gametimeid=startTimer(1000);//设置定时器时间间隔为1s，每一秒进入定时器函数一次
  resultStr.clear(); //清除输入结果
  ui->textEdit->clear();//清除文本框

}

/**/
void MainWindow::timerEvent(QTimerEvent *event)
{
   if(event->timerId()==gametimeid) //判断gametimeid=0是否到时
   {
    gametime--;  //每过1s，游戏时间减1
    ui->progressBar->setValue(gametime); //更新进度条显示

     if(gametime==0)   //当游戏时间为0
     {
         overtimeid=0;  
         killTimer(gametimeid);  //清除定时器
         QMessageBox::information(this,"游戏失败!","朋友，时间到了，下把再见！！"); 
         startmovie.start(); //失败动画开始
         ui->stackedWidget->setCurrentWidget(ui->page_3);//显示失败动画界面
         overtimeid=startTimer(2000);  //失败动画持续时间
     }

   }
   else if(event->timerId()==overtimeid)  //失败动画定时器服务函数
   {
     startmovie.stop();         
     killTimer(overtimeid);
     ui->stackedWidget->setCurrentWidget(ui->page); //2s后回到主界面

   }
   else if(event->timerId()==wintimeid)  //胜利动画定时器服务函数
   {
     winmovie.stop();
     killTimer(wintimeid);
     ui->stackedWidget->setCurrentWidget(ui->page); 
   }
}

/*游戏结束按钮槽函数*/
void MainWindow::on_endbutton_clicked()
{
   this->close();

}

/*button 0~9 的 处理槽函数*/
void MainWindow::delnum()
{
  QObject *mysender=sender(); //sender函数判断那个摁下 
  QPushButton *p=(QPushButton *)mysender;  //强制转化
  if (p!=NULL)
  {
     QString numstr = p->text(); //得到按下的值
      resultStr+=numstr; //每次按下后字符串拼接
      if(resultStr.size()==1&&resultStr=="0") //对首个按下的数为0，不作处理
      {
         resultStr.clear();

      }

      if(resultStr.size()<=4)  //当按下数为设定位数时开始判断
      {
       ui->textEdit->setText(resultStr);        
              if(resultStr.size()==4)
               {
                 if(resultStr>randStr)
                 {
                  ui->textEdit->setText("猜的大了点!");
                 }

                 if(resultStr<randStr)
                 {
                  ui->textEdit->setText("猜的小了点!");

                 }
                  if(resultStr==randStr)  //猜中之后开始游戏胜利的动画
                  {
                     wintimeid=0;
                     ui->textEdit->setText("恭喜 ，你猜对了");
                     killTimer(gametimeid);
                     QMessageBox::information(this,"胜利","恭喜 ，你猜对了");
                     ui->stackedWidget->setCurrentIndex(0);
                     winmovie.start();
                     ui->stackedWidget->setCurrentWidget(ui->page_4);
                     wintimeid=startTimer(2000); //持续2s 

                  }

                 resultStr.clear();  //清空结果

               }
      }
  }

}
 
 /*删除按钮槽函数 */
void MainWindow::on_button_del_clicked()  
{
 if(resultStr.size()==1)  //如果为1 ，直接删除
 {
   resultStr.clear();

 }
   else  //否则，截取最后一个
 {
    resultStr.chop(1);
    ui->textEdit->setText(resultStr);

 }

}
 
 /*提示按钮槽函数 */
void MainWindow::on_button_piont_clicked()
{

 ui->textEdit->setText("答案为："+randStr);//直接显示随机数

}

void MainWindow::on_action_triggered()
{
  ui->stackedWidget->setCurrentWidget(ui->page_5);
  ui->textBrowser->show();

}

void MainWindow::on_action2_triggered()
{
  ui->stackedWidget->setCurrentWidget(ui->page_6);
  ui->textBrowser_2->show();
}

void MainWindow::on_action3_triggered()
{

    ui->stackedWidget->setCurrentWidget(ui->page);

}

MainWindow::~MainWindow()
{
    delete ui;
}


