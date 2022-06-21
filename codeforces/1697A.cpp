#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            if(m >= x) {
                m -= x;
                continue;
            }else {
                ans += x-m;
                m = 0;
            }
        }
        cout<<ans<<endl;
    }
}