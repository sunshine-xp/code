#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s;
    set<string,less<string>> ss;
    while(cin>>s) ss.insert(s);
    for(auto it = ss.begin();it!=ss.end();it++) cout<<*it<<endl; 
    return 0;
}