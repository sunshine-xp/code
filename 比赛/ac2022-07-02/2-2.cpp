#include<iostream>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int main()
{
    int n;
    cin>>n;
    int ans = 0,pre = 0;
    int a[n],b[n],c[n];
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++) b[i] = 1;
    for(int i = 1;i<= n;i++) {
        if(a[i]*2>= a[i-1]) c[i] = max(c[i-1]+1,)
    }   
    cout<<ans+1<<endl;
}