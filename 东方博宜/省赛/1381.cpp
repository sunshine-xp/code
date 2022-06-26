#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,m,s,ans = 0,pre = 0;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int arr[105][105];
bool visited[105][105];

void dfs(int i,int j) {
    cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
    pre += arr[i][j];
    visited[i][j] = true;
    for(int d = 0;d<4;d++) {
        int x = i+dir[d][0];
        int y = j+dir[d][1];
        if(x>0&&x<=n&&y>0&&y<=m&&!visited[x][y]&&arr[x][y]>arr[i][j])
            dfs(x,y); 
    }
        ans = max(ans,pre);
        visited[i][j] = false; 
        pre -= arr[i][j]; 
}

int main()
{
    cin>>n>>m>>s;
    memset(arr,0,sizeof(arr));
    memset(visited,false,sizeof(visited));
    fa(i,1,n+1) fa(j,1,m+1) {
        s = (s*345)%19997;
        arr[i][j] = s%10+1;
    }
    fa(i,1,n+1) {
        fa(j,1,m+1) cout<<arr[i][j]<<" ";
        cout<<"\n";
    } 
    fa(i,1,n+1) fa(j,1,m+1) {
        cout<<"---------------------------"<<endl;
        dfs(i,j);
        cout<<"--"<<i<<" "<<j<<" "<<pre<<" "<<ans<<"--"<<endl;
        memset(visited,false,sizeof(visited));
    }
    cout<<ans<<endl;

    return 0;
}