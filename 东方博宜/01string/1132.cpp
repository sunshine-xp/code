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
    getline(cin,s);
    bool f = false;
    fa(i,0,s.size()) {
        if(isdigit(s[i])) {
            cout<<s[i];
            f = false;
        }
        else {
            if(f)continue;
            else {
                cout<<"*";
                f = true;
            }
        }
    }
    
    return 0;
}