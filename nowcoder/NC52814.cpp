#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int n,m;
struct node {
    int x,y,dis;
    node(int x = 0,int y = 0,int dis = 0):x(0),y(0),dis(0){};
};
vector<node> g[MAX];
bool visited[MAX];
int main()
{
    cin>>n>>m;
    memset(visited,false,sizeof(bool));
    for(int i = 0;i < m; i++)
    {
        node no;
        int x,y,dis;
        cin>>x>>y>>dis;
        if(g[x][y].dis == 0 || g[x][y].dis > dis)
        {
            g[x][y].dis = dis;
            g[y][x].dis = dis;
        }
    }
    for(int i = 0;i<n;i++)
    {
        //if(!visited[i])
    }
}