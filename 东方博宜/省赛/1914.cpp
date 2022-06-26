#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,m,sx,sy,ex,ey,ans = 0,pref = 7,f = 7,t = -1,pret = -1;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int arr[12][12];
bool visited[12][12];

bool dfs(int i,int j) {
    visited[i][j] = true;
    pref--;
    t++;
    for(int d = 0;d<4;d++) {
        int x = i+dir[d][0];
        int y = j+dir[d][1];
        if(x>0&&x<=n&&y>0&&y<=m&&!visited[x][y]&&arr[x][y]!=0) {
            if(arr[x][y] == 1)  dfs(x,y);
            else if(arr[x][y] == 3) {
                if(pref>0) return true;
                
            }else if(arr[x][y] == 4) {
                t++;
                pre = 6;
                dfs(x,y);
            }
        }
            
    }
        ans = max(ans,pre);
        visited[i][j] = false; 
        pre -= arr[i][j]; 
}

int main()
{
    cin>>n>>m;
    memset(arr,0,sizeof(arr));
    memset(visited,false,sizeof(visited));
    fa(i,1,n+1) fa(j,1,m+1) {
        cin>>arr[i][j];
        if(arr[i][j] == 2){
            sx = i;
            sy = j;
        }
        if(arr[i][j] == 3){
            ex = i;
            ey = j;
        }
    }
    
    dfs(sx,sy);
    cout<<ans<<endl;

    return 0;
}