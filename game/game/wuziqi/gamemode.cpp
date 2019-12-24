#include "gamemode.h"
#include <QDebug>
gamemode::gamemode()
{

}

void gamemode::updateGameMap(int x,int y) //更新棋盘地图
{

   if (playerflag)         //黑白棋标志
   {
       gameMapVec[x][y]=1;   //黑色为1
       Flag=1;
   }
    else
   {
       gameMapVec[x][y]=-1;
       Flag=-1;
    }
}

/*
          判断输赢
定义六个连在一起的模板去匹配原来棋盘上的棋子

*/

int gamemode::Jude_win()
{
       int situ_1[5][5]=   {{1,1,1,1,1},           
                            {0,0,0,0,0},
                            {0,0,0,0,0},
                            {0,0,0,0,0},
                            {0,0,0,0,0}};





       int situ_2[5][5]= {{1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0},
                          {1,0,0,0,0}};





     int situ_3[5][5]=  {{1,0,0,0,0},
                         {0,1,0,0,0},
                         {0,0,1,0,0},
                         {0,0,0,1,0},
                         {0,0,0,0,1}};





     int situ_4[5][5]= {{0,0,0,0,1},
                        {0,0,0,1,0},
                        {0,0,1,0,0},
                        {0,1,0,0,0},
                        {1,0,0,0,0}};





     int situ_5[5][5]=  {{0,0,0,0,1},
                         {0,0,0,0,1},
                         {0,0,0,0,1},
                         {0,0,0,0,1},
                         {0,0,0,0,1}};





     int situ_6[5][5]=  {{0,0,0,0,0},
                         {0,0,0,0,0},
                         {0,0,0,0,0},
                         {0,0,0,0,0},
                         {1,1,1,1,1}};






    for(int i=0;i<=19;i++)
        for(int j=0;j<=9;j++)
        {
         int cnt=0;
         for(int x=0;x<=4;x++)
             for(int y=0;y<=4;y++)
             {
               cnt=cnt+situ_1[x][y]*gameMapVec[i+x][j+y];   //
               if(cnt==5)
               {

                   return 1;
               }
               if(cnt==-5)
               {
                   return -1;

               }
             }

               cnt=0;
         for(int x=0;x<=4;x++)
             for(int y=0;y<=4;y++)
             {

               cnt=cnt+situ_2[x][y]*gameMapVec[i+x][j+y];
               if(cnt==5)
               {

                   return 1;
               }
               if(cnt==-5)
               {
                   return -1;

               }
             }

                 cnt=0;

         for(int x=0;x<=4;x++)
             for(int y=0;y<=4;y++)
             {

               cnt=cnt+situ_3[x][y]*gameMapVec[i+x][j+y];
               if(cnt==5)
               {

                   return 1;
               }
               if(cnt==-5)
               {
                   return -1;

               }
             }

                  cnt=0;
         for(int x=0;x<=4;x++)
             for(int y=0;y<=4;y++)
             {

               cnt=cnt+situ_4[x][y]*gameMapVec[i+x][j+y];
               if(cnt==5)
               {

                   return 1;
               }
              if(cnt==-5)
               {
                   return -1;

               }
             }

                cnt=0;
          for(int x=0;x<=4;x++)
                    for(int y=0;y<=4;y++)
                    {
                      cnt=cnt+situ_5[x][y]*gameMapVec[i+x][j+y];
                      if(cnt==5)
                      {

                          return 1;
                      }
                  if(cnt==-5)
                      {
                          return -1;

                      }
                    }

                      cnt=0;
                      for(int x=0;x<=4;x++)
                          for(int y=0;y<=4;y++)
                          {
                            cnt=cnt+situ_6[x][y]*gameMapVec[i+x][j+y];
                            if(cnt==5)
                            {

                                return 1;
                            }
                             if(cnt==-5)
                            {
                                return -1;

                            }
                          }

                            cnt=0;

        }

    return 0;


}

