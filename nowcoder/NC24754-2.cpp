#include<bits/stdc++.h>
using namespace std;
string ss;
int main()
{
    cin>>ss;
    int st=ss.size()%3;
    if(st==0)st=3;
    int i=0;
    for(i=0;i<st;i++)
    {
        cout<<ss[i];
    }
    for(i;i<ss.size();i+=3)
    {
        cout<<','<<ss[i]<<ss[i+1]<<ss[i+2];
    }
    return 0;
}