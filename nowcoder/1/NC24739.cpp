#include<iostream>
#include<queue>
using namespace std;
#define  MAX 101
char da[MAX][MAX];
int dir[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1}};
int n,m;
int ans = 0;  
void bfs(int i,int j)
{
    queue<int> q;
    int num = i * m + j;
    q.push(num);
    while(!q.empty())
    {
        int prepoint = q.front();
        q.pop();
        int x = prepoint/m;
        int y = prepoint%m;
        da[x][y] = '.';
        for(int d = 0;d < 8; d++)
        {
            int nx = x + dir[d][0];
            int ny = y + dir[d][1];
            //cout<<nx<<" "<<ny<<endl;
            if(nx >= 0 && ny >= 0 && nx < n && ny < m &&da[nx][ny] == 'W') q.push(nx*m + ny);   
        }
    }
}

void dfs(int i,int j)
{
    for(int d = 0;d < 8; d++)
        {
            int nx = i + dir[d][0];
            int ny = j + dir[d][1];
            //cout<<nx<<" "<<ny<<endl;
            if(nx >= 0 && ny >= 0 && nx < n && ny < m &&da[nx][ny] == 'W') {
                da[nx][ny] = '.';
                dfs(nx,ny);
            } 
        }
}
int main()
{
    cin>>n>>m;  
    for(int i = 0;i < n;i ++) for(int j = 0;j < m;j++) cin>>da[i][j];
    for(int i = 0;i < n;i ++) for(int j = 0;j < m;j++)
    {
        if(da[i][j] == 'W') {
            //cout<<i<<" "<<j<<endl;
            dfs(i,j);
            ans++;
        }
    }
    cout<<ans<<endl;
}
