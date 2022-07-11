#include<bits/stdc++.h>
using namespace std;
#define ff(a,b,i) for(int (i) = (a);i <= (b);(i)++)
#define MAXN 20
int n;
int f[MAXN];
int main()
{
    f[0] = f[1] = 1;
    cin>>n;
    ff(2,n,i) ff(0,i,j) f[i] += f[j]*f[i - j - 1];
    cout<<f[n]<<endl;
    return 0;
}
/**
 * @brief 
 * 
代码长度：267B


用时：15ms


内存：808KB
 * 
 */