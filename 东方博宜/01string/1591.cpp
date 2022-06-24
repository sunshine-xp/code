#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int p = s.find(t);
    if(p == -1) cout<<"-1"<<endl;
    else {
        while(p != -1) {
            cout<<p+1<<endl;
            p = s.find(t,p + 1);
        }
    }
    
    return 0;
}