#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    char c;
    string s,r;
    cin>>s>>c;
    fa(i,0,s.size()) if(s[i] != c) r += s[i];
    cout<<r<<endl;
    
    return 0;
}