#include<iostream>
#include<random>
#include<ctime>
#include<queue>
using namespace std;
const int dir[][2] = {{0,1},{1,0}};
int main()
{
    srand((unsigned int)time(0));
    int data[][20] = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//1
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//2
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//3
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//4
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//5
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//6
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//7
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//8
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    };

    int  x = 0,y = 0;
    int randomnum;
    queue<int> q;
    q.push(0);
    while (x != 19 || y != 19)
    {
        data[x][y] = 0;
        do{
            randomnum = rand()%2;
        }while(    
          (x + dir[randomnum][0]) <  0
        ||(x + dir[randomnum][0])>= 20
        ||(y + dir[randomnum][1]) <  0
        ||(y + dir[randomnum][1])  >= 20
        ||data[x+dir[randomnum][0]][y+dir[randomnum][1]] == 0);
        x += dir[randomnum][0];
        y += dir[randomnum][1];
        cout<<" ( "<<x<<" "<<y<<" ) "<<endl;
       
    }
    cout<<endl;
    data[19][19] = 0;
    for(int i = 0;i<20;i++){
        for(int j = 0;j<20;j++) cout<<data[i][j]<<" ";
        cout<<endl;
    }
    
}