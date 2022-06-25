#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,s1,s2;
    cin>>s;
    int m = s.find('*');
    s1 = s.substr(0,m);
    s2 = s.substr(m+1,s.size()-2);
    int a = stol(s1);
    int b = stol(s2);
    cout<<a*b<<endl;
    return 0;
}