#include<iostream>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int a[n];
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++) {
        int count = 0;
        for(int j = 0;j<n-1;j++) {
            if(a[j]*2 >= a[j+1]) count++;
            else {
                ans = max(count,ans);
                count = 0;
            }
        }
        ans = max(count,ans);
    }
    cout<<ans+1<<endl;
}