#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int ni[n+1];
    for(int i = 1;i <= n;i++) cin>>ni[i];
    sort(ni+1,ni+n+1);
    
    while(q--)
    {
        int a,b,sum = 0;
        cin>>a>>b;
        for(int i = 1;i <= b;i++) sum+=ni[n - a + i];
        cout<<sum<<endl;
    }
}