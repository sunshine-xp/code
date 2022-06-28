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
        int n,ans = 0;
        cin>>n;
        vector<int> v;
        fa(i,0,n) {
            int num;
            cin>>num;
            v.push_back(num);
        }
        fa(i,0,n) {
            int s = v[i];
            int k = s;
            fa(j,0,n) if( i != j) s = s xor v[j];
            if(s == 0) {
                cout<<k<<endl;
               break;
            }
        }
    }
    
    return 0;
}