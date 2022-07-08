#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long t = 998244353;
    cin>>n;
    long long x = n%t;
    long long ans = powl(x,2);
    ans %= t;
    
    cout<<ans<<endl;
}