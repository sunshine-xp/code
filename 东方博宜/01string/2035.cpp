#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    int n;
    cin>>n;
    string s,ans;
    while(n--) {
        cin>>s;
        s += '-';
        char num = 0;
        fa(i,0,s.size()) {
            if(isdigit(s[i])) {
                num = num * 10 + s[i]-'0';
            }else if(s[i] == '#') {
                ans += 'A' + num - 1;
                ans += " ";
                num = 0;
            }else if(s[i] == '-') {
                ans += 'A' + num - 1;
                num = 0;
            }
        }
        cout<<ans<<endl;
        ans = "";
    }
    
    return 0;
}