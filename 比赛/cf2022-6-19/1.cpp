#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long int n,m;
        cin>>n>>m;
        long long a = (m*m+m+n*n*m+n*m-2*m)/2;
        cout<<a<<endl;
    }
}