#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,ans;
    int len = 0;
    while(cin>>s) {
        if(s.size()>len){
            len = s.size();
            ans = s;
        }
    }
    cout<<ans<<endl;
    return 0;
}