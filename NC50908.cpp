#include<bits/stdc++.h>
using namespace std;


long long mil(long long a, long long b,long long m)
{
    long long ans = 0;
    a%m;
    b%m;
    while (b != 0)
    {
        if (b & 1)//逻辑位运算，0&0=0,1&0=0,1&1=1；
        {
            ans = (ans + a)%m;
        }
        b >>= 1;
        a = (a << 1) % m;
    }
    return ans;
}
 
long long reslut(long long a, long long b, long long m)
{
    long long ans;
    ans = mil(a, b, m) % m;
    return ans;
}
 
int main()
{
    long long a, b, m;
    scanf("%lld%lld%lld",&a,&b,&m);
    printf("%lld\n",reslut(a,b,m)%m);
    return 0;
}