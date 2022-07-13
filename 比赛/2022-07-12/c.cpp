#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++) cin>>a[i];
        for(int i = 0;i<n;i++) {
            int c;
            string ss;
            cin>>c>>ss;
            for(int j = c-1;j>=0;j--) {
                if(ss[j] == 'D')a[i] = (a[i]+1)%10;
                else a[i] = (a[i]+9)%10;
            }
        }
        for(int i = 0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
}