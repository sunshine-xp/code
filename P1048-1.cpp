#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

using namespace std;

int w[105],val[105];
int dp[1005];

int main()
{
    int t,m,res = 1;
    cin>>t>>m;
    fa(i,1,m) cin>>w[i]>>val[i];
    fa(i,1,m) fm(j,t,0) if(j >= w[i]) dp[j] = max(dp[j-w[i]]+val[i],dp[j]);
    cout<<dp[t]<<endl;  



    return 0;
}