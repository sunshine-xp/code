#include<bits/stdc++.h>
using namespace std;

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

int main()
{
    freopen("leetcode.md","r",stdin);
   freopen("leetcode_o.md","w",stdout);
    string p;
    string s;
    int count = 0;
    while(cin>>p) 
    {
        if(p[p.size() - 1] == '.') {
            cout<<s<<endl;
            s.clear();
            s += p;
            count++;
        }else {
            s += " ";
            s += p;
        }
    }
    cout<<count<<endl;
    return 0;
}