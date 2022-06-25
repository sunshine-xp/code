#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,p,q;
    getline(cin,s);
    getline(cin,p);
    getline(cin,q);
    int m = 0;
    while (s.find(p,m) != -1)
    {
        m = s.find(p,m);
        s.erase(m,p.size());
        s.insert(m,q);
        m += q.size()+1;
    }
    
    cout<<s<<endl;
    return 0;
}