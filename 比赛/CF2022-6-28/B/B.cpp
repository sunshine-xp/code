#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,k,ans = 0;
        cin>>n>>k;
        vector<int> v;
        fa(i,0,n) {
            
            int num;
            cin>>num;
            v.push_back(num);
        }
        fa(i,1,n-1) if(v[i-1]+v[i+1]<v[i]) ans ++;
        
        cout<<ans<<endl;
    }
    return 0;
}