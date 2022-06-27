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
    int ans = 0,prev = 0;
    char op = '+';
    fa(i,0,s.size()) {
        if(isdigit(s[i])) {
            prev = prev*10 + s[i]-'0';
        }else {
            if(op == '+') ans += prev;
            else if(op == '-') ans -= prev;
            else if(op == '*') ans *= prev;
            op = s[i];
            prev = 0;
        }
    }
    if(op == '+') ans += prev;
    else if(op == '-') ans -= prev;
    else if(op == '*') ans *= prev;
    cout<<ans<<endl;
    
    return 0;
}