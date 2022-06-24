#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,t,x;
    getline(cin,s);
    getline(cin,t);
    bool f = false;
    fa(i,0,s.size()-1) {
        x = s.substr(i,t.size());
        if(x ==t) {
            cout<<i+1<<endl;
            f =true;
        }
    }
    if(f == false) cout<<"-1"<<endl;
    return 0;
}