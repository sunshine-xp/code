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
    cin>>s;
    s += '1';
    int num = 1;
    char prep = s[0];
    fa(i,1,s.size()) {
        if(s[i] == prep) num++;
        else {
            if(num == 1) cout<<prep;
            else {
                cout<<num<<prep;
            }
            prep = s[i];
            num = 1;
        }
    }
    
    return 0;
}