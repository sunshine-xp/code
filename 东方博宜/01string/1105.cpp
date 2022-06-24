#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,t,r;
    cin>>s>>t;
    string l = s+t;
    fa(i,0,l.size() - 1) if(r.find(l[i]) == -1) r += l[i];
    cout<<r<<endl;
    
}