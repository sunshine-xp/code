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
    int ans = 0;
    char op = '+';
    fa(i,0,s.size()) {
        if(isdigit(s[i])) {
            if(op == '+') ans += s[i]-'0';
            else if(op == '-') ans -= s[i]-'0';
            else if(op == '*') ans *= s[i] -'0';
        }else op = s[i];
    }
    cout<<ans<<endl;
    
    return 0;
}