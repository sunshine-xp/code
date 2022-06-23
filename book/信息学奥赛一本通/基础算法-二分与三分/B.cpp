#include <bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)
typedef long long ll;
using namespace std;

ll n,L,a[101010],b[101010];
bool C(ll x)
{
    for(ll i=1;i<=n;i++)b[i]=b[i-1]+a[i-1]*1000-x;
    ll minn=0;
    for(ll i=L;i<=n;i++)
    {
        minn=min(minn,b[i-L]);
        if(b[i]-minn>=0)return true;
    }
    return false;
}
int main()
{
    cin>>n>>L;
    for(ll i=0;i<n;i++) cin>>a[i];
    ll l=0,r=2020202020,mid;
    while(r-l>1)
    {
        mid=(r+l)/2;
        if(C(mid))l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    return 0;
}