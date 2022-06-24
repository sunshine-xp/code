#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int ans = 0,m = 0;
    while(s2.find(s1,m) != -1) {
        ans++;
        m = s2.find(s1,m) + 1;
    }
    cout<<ans<<endl;
    return 0;
}