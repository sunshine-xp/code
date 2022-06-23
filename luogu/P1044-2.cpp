#include<bits/stdc++.h>
using namespace std;
#define MAXN 20
#define ff(a,b,i) for(int (i) = (a);i < (b);(i)++)
int n;
int f[MAXN][MAXN];
int main()
{
    cin >> n;
    ff(0,n + 1,i) f[0][i] = 1;
    ff(1,n + 1,i)
    ff(1,n + 1,j)
    {
        if(i == j) f[i][j] = f[i - 1][j];
        else f[i][j] = f[i][j - 1] + f[i - 1][j];
    }
    cout<<f[n][n]<<endl;
    return 0;
}
/**
 * @代码长度：376B


用时：15ms


内存：708KB
 * 
 */