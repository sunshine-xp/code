#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,count = 0,ans = 0;
        cin>>n;
        bool f = false;
        long long int num;
        for(int i = 0;i<n;i++) {
            cin>>num;
            if(f&&num == 0) count++;
            if(num!=0) f = true;
            ans+=num;
        }
        ans+=count;
        if(num == 0) ans--;
        else ans -= num;
        cout<<ans<<endl;
    }
    
}