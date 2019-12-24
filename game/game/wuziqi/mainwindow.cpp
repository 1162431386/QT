#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QMouseEvent>
#include<QDebug>
#include <vector>
#include <QAction>
#include "qmessagebox.h"
#include <QSound>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     ui->centralWidget->setMouseTracking(true);
     setMouseTracking(true);
     chess_x=-1;    //棋盘的坐标，为了防止出错，初始化-1
     chess_y=-1;
     Init_Game();    //游戏初始化
     start_Game(); //棋盘坐标初始化
     connect(ui->action_4,&QAction::triggered,this,&MainWindow::on_action_triggered);
     connect(ui->return_action,&QAction::triggered,this,&MainWindow::sendslot);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(game)
    {
     delete game;
    }
}
void MainWindow::Init_Game()
{

  game = new gamemode;

}

void MainWindow::start_Game()
{

    for(int i=0;i<=23;i++)
    {

        for(int j=0;j<=13;j++)
        {

       game->gameMapVec[i][j]=0;

        }
      }

}

void MainWindow::paintEvent(QPaintEvent *)  //使用绘图事件时需要添加时间函数在h文件下面
{
    QPainter p(this);//创建Qpainter类型并指定绘图背景
    QPen pen; //创建画笔，用于设置绘图的线的粗细颜色和一些风格
    QBrush brush;
    pen.setWidth(4);  //制定宽度
    p.setPen(pen); //告诉p用画笔来画图
    p.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/new/prefix1/qipan.jpg")); //设置窗口背景]
    grand_x=width()/25;    //记录横向每一格子的宽度，，分25格子
    grand_y=height()/15;   //记录纵向每一格子宽度
    start_x=grand_x;       //记录期盼绘制横向起始坐标
    start_y=grand_y;       //记录期盼纵向起始坐标

     for(int i=0;i<= 23;i++)   //循环绘制竖线
     {
         p.drawLine(start_x+i*grand_x,start_y,start_x+i*grand_x,13*start_y+grand_y);  //起始坐标加上每一次循环后格子de宽度
     }

     for(int i=0;i<=13;i++)   //横线
     {
         p.drawLine(start_x,start_y+i*grand_y,23*grand_x+start_x,start_y+i*grand_y);

     }

     brush.setStyle(Qt::SolidPattern);
     //Q_ASSERT(chess_x>=0&&click_x<24&&chess_y>=0&&chess_y<14);
     if(chess_x>=0&&chess_x<24&&chess_y>=0&&chess_y<14)           //绘制下子标记点
     {

        if((game->Flag==1))   //绘制棋子
        {
            brush.setColor(Qt::white);
            p.setBrush(brush);
            p.drawEllipse((start_x+grand_x*chess_x)-5,(start_y+grand_y*chess_y)-5, 10, 10);
        }
         if((game->Flag==-1))   //绘制棋子
          {
          brush.setColor(Qt::black);
          p.setBrush(brush);
          p.drawEllipse((start_x+grand_x*chess_x)-5,(start_y+grand_y*chess_y)-5, 10, 10);
          }

       }

  /*绘制棋子 */
    for(int i=0;i<=23;i++)
       for(int j=0;j<=13;j++)
    {
     if((game->gameMapVec[i][j]==1))   //绘制棋子
     {
       p.setPen(QColor(Qt::black));     //画黑点
       p.setBrush(QBrush(Qt::black));
       p.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::Qt4CompatiblePainting);
       point_x=(start_x+grand_x*i)-15;
       point_y=(start_y+grand_y*j)-15;
       p.drawEllipse(point_x,point_y,30,30);
      // p.end();
       /*
        第一个参数是x坐标，
        第二个是圆的y坐标
        注意：这里的xy不是指圆心坐标，而是指圆点起点坐标，从屏幕左上角（0.0）算起
        第三个参数是圆点宽度
        第四个是高度
        可以根据三四各参数来绘制椭圆或者圆
        */
      }
     if((game->gameMapVec[i][j]==-1))   //绘制棋子
     {
       p.setPen(QColor(Qt::white));     //画白点
       p.setBrush(QBrush(Qt::white));
       p.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::Qt4CompatiblePainting);
       point_x=(start_x+grand_x*i)-15;
       point_y=(start_y+grand_y*j)-15;
       p.drawEllipse(point_x,point_y,30,30);

       }
    }
  }



void MainWindow::mouseMoveEvent(QMouseEvent *event)    //鼠标按压事件
{
   int x=event->x();   //定义变量来获取鼠标每次按下后的坐标值
   int y=event->y();
   if(x>=start_x/2&&x<=start_x+23.5*grand_x&&y>=start_y/2&&y<=start_y*13.5+grand_y)  //保证棋子落在棋盘内部，在外部的无效
   {
     chess_x=(x-start_x/2)/(grand_x);   //保证鼠标点击区域的坐标是十字线，（未优化）
     chess_y=(y-start_y/2)/(grand_y);
      //qDebug() << chess_x<< chess_y;
    update();//更新整个界面，（为显示新的棋子的图像）

   }
   else
   {
       chess_x=-1;    //棋盘的坐标，为了防止出错，初始化-1
       chess_y=-1;
   }

}

void MainWindow::mousePressEvent(QMouseEvent *e)   //鼠标按压后执行下棋操作
{
 if(e->button()==Qt::LeftButton)
  {
  personAct();
 }
}

/*打印输赢状态 */
void MainWindow::Print_win(void)
{
    if(game->Jude_win()==1){
      QSound::play(":/new/prefix1/res/sound/victory.wav");
      showInformation(this,"游戏结束","黑棋赢!!!",QMessageBox::Ok,QMessageBox::No);
      start_Game();
      update();
    }
    if(game->Jude_win()==-1){
       QSound::play(":/new/prefix1/res/sound/victory.wav");
       showInformation(this,"游戏结束","白棋赢!!!",QMessageBox::Ok,QMessageBox::No);
       start_Game();
       update();
    }

}

/*人人下棋动作*/
void MainWindow::personAct()
{

 /*如果在棋盘内且此处没有棋子，就将其标记 */
  if((chess_x!=-1)&&(chess_y!=-1)&&(game->gameMapVec[chess_x][chess_y]==0))
  {
      //qDebug() << chess_x<< chess_y;
     game->updateGameMap(chess_x,chess_y);
     QSound::play(":/new/prefix1/res/sound/chessone.wav");
     game->playerflag=!game->playerflag;  //下完黑子后换手
     update();
     Print_win();

  }
}


void MainWindow::on_action_triggered()
{

    Init_Game();    //游戏初始化
    start_Game(); //棋盘坐标初始化
    update();

}


void MainWindow::sendslot()
{

    emit mySignal();


}
