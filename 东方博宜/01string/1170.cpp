#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s;
    char p,q;
    cin>>s>>p>>q;
    int m = 0;
    while(s.find(p,m)!= -1) {
        m = s.find(p,m);
        s[m] = q;
        m++;
    }
    cout<<s<<endl;
    return 0;
}