#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,s1,s2;
    getline(cin,s);
    int p = s.find(',');
    s1 = s.substr(0,p);
    s2 = s.substr(p+1);
    cout<<s2<<","<<s1<<endl;
    return 0;
}