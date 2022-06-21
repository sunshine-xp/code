#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count = 0;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        cout<<count<<endl;
    }
} 