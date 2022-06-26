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
    int ans = 0;
    fa(i,1,n+1) {
        if(i%4 == 0) ans++;
        else if(i%7 == 0) ans++;
        else {
            string s = to_string(i);
            int m = s.find("44");
            int n = s.find("77");
            if(m != -1 || n != -1)ans++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}