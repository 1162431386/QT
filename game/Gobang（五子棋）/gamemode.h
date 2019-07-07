#ifndef GAMEMODE_H
#define GAMEMODE_H
#include <vector>


class gamemode
{
public:
    gamemode();
public:
      int gameMapVec[24][14]; // 存储当前游戏棋盘和棋子的情况,空白为0，白子1，黑子-1
      int playerflag;
      void updateGameMap(int x,int y);  //更新游戏棋子状态
      int Jude_win();   //判断输赢

private: 

};

#endif // GAMEMODE_H
