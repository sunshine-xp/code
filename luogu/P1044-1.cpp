#include<bits/stdc++.h>
using namespace std;
#define MAXN 20
int n;
int f[MAXN][MAXN];
int dfs(int i,int j) 
{
    if(f[i][j]) return f[i][j];
    if( i == 0) return 1;
    if(j > 0) f[i][j] += dfs(i, j - 1);
    f[i][j] += dfs(i - 1, j + 1);
    return f[i][j];
}

int main()
{
    cin>>n;
    cout<<dfs(n, 0)<<endl;
}

/**
 * 
 * 
 *
 * 代码长度：319B
 *用时：15ms
 *内存：808KB
 * 
 */