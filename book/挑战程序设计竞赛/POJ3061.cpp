#include<bits/stdc++.h>
using namespace std;
#define MAXN 100001
int n,S;
int a[MAXN];
int sum[MAXN + 1];

void solve1() 
{
    for(int i = 0;i<n;i++) {
        sum[i + 1] = sum[i] + a[i];
    }
    if(sum[n] < S) {

        cout<<"0\n";
        return;
    }
    int res = n;
    for(int s = 0;sum[s] + S <= sum[n]; s++) {
        int t = lower_bound(sum + S,sum + n, sum[s] + S) - sum;
        res = min(res, t - s);
    }
    cout<<res<<endl;
}

void solve2()
{
    int res = n + 1;
    int s = 0,t = 0,sum = 0;
    while(true) {
        while(t < n &&  sum < S) sum += a[t++];
        if(sum <S) break;
        res = min(res,t - s);
        sum -= a[s++];
    } 
    if(res > n) res = 0;
    cout<<res<<endl;
}
int main()
{
    cin>>n>>S;
    for(int i = 0;i<n;i++) cin>>a[i];
}