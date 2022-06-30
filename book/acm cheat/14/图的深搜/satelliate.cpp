#include<iostream>
#include<string.h>
using namespace std;

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)
#define max(a,b) ((a)>(b)?(a):(b))

char dset[90][1010];
bool visited[90][1010];
int n,m,ans = 0,pre = 0;
int dir[][2] = {{1,0},{-1,0},{0,1},{0,-1}};
void dfs(int i,int j) {
    visited[i][j] = true;
    pre++;
    for(int d = 0;d<4;d++) {
        int x = i+dir[d][0];
        int y = j+dir[d][1];
        if(x>=0&&x<m && y>=0&&y<n && !visited[x][y] && dset[x][y] == '*') 
            dfs(x,y);
    }

}
int main()
{
    memset(dset,'0',sizeof(dset));
    memset(visited,false,sizeof(visited));
    cin>>n>>m;
    fa(i,0,m) fa(j,0,n) cin>>dset[i][j];
    fa(i,0,m) fa(j,0,n) {
        if(dset[i][j] == '*'&&!visited[i][j]) {
            dfs(i,j);
            ans  = max(ans,pre);

            pre = 0;
        }
    }
    cout<<ans<<endl;
}