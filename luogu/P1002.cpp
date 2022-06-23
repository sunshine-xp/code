#include<bits/stdc++.h>
using namespace std;
#define MAX 22
int n,m,cx,cy;
int dir[][2] = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
int main()
{
    cin>>n>>m>>cx>>cy;
    long long int arr[MAX][MAX] = {0};
    arr[cx][cy] = -1;
    for(int i = 0;i < 8; i++) {
        int x = cx + dir[i][0];
        int y = cy + dir[i][1];
        if(x >= 0 && y >= 0 && x <= n && y <= m) arr[x][y] = -1;
    }
    if(arr[0][0] == -1 || arr[n][m] == -1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(int i = 0;i <= n; i++)if(arr[i][0] != -1) arr[i][0] = 1;
    for(int i = 0;i <= m; i++)if(arr[0][i] != -1) arr[0][i] = 1;
    for(int i = 1;i <= n; i++)
    for(int j = 1;j <= m; j++) {
        if(arr[i][j] == -1) continue;
        int b1 = 1,b2 = 1;
        if(arr[i - 1][j] == -1) b1 = 0;
        if(arr[i][j - 1] == -1) b2 = 0; 
        arr[i][j] = b1*arr[i - 1][j] + b2*arr[i][j - 1];
    }
    cout<<arr[n][m]<<endl;
}