#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a = n;
        int b = n;
        int ans = n;
        while(a >= 3 || b >= 4)
        {
            int pre = a/3 + b/4; 
            ans += pre;
            a = pre + a % 3;
            b = pre + b % 4;
        }
        cout<<ans<<endl;
    }
}