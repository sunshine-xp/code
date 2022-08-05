#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        int arr[2*n];
        bool f = true;
        for(int i = 0;i<2*n;i++) cin>>arr[i];
        sort(arr,arr+2*n);
        for(int i = 0;i<n;i++) {
            if(arr[i] + x >arr[i+n]) {
                cout<<"NO"<<endl;
                f = false;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
    }
}