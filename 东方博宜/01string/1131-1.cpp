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
    string s;
    cin>>s>>c;
    int m = 0;
    while(s.find(c,m) != -1) {
        m = s.find(c,m);
        s.erase(m,1);
    }
    cout<<s<<endl;
    return 0;
}