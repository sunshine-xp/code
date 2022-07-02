#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    bool f = false;
    for(int i = 0;i<n;i++) {
        cin>>a[i];
        if(a[i] == 1) f= true;
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}