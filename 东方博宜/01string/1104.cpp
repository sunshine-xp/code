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
    int pre = 0;
    fa(i,0,s.size()) {
        if(isdigit(s[i])) pre = pre*10 + s[i]-'0';
        else{
            if(i == 0) cout<<s[i];
            if(isdigit(s[i-1])) {
                while(pre--) cout<<s[i];
                pre = 0;
            }
            else cout<<s[i];
        }
    }
    
    return 0;
}

//12ab10c2ax