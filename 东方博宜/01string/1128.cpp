#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
bool ispri(int num) {
    if(num < 2) return false;
    bool f = true;
    for(int i = 2;i<=(int)sqrt(num);i++)
        if(num % i == 0) {
            f = false;
            break;
        }
    return f;
}
int main()
{
    string s;
    cin>>s;
    int ans = INT_MAX;
    fa(i,0,s.size()-1) {
        int x = stoi(s.substr(0,i+1))+stoi(s.substr(i+1));
        if(ispri(x) && ans > x) ans = x;
    }
    if(ans != INT_MAX) cout<<ans<<endl;
    else cout<<"-1"<<endl;
    return 0;
}