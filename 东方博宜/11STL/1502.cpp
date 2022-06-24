#include<bits/stdc++.h>
#include<vector>
#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    fa(i,0,n) {
        int num;
        cin>>num;
        v.push_back(num);
    }
    while(m--) {
        int x,y;
        cin>>x>>y;
        int mid = (x+y)/2-1;
        fa(i,x-1,mid+1) swap(v[i],v[y-i+x-2]);
        
    }
    fa(i,0,n) cout<<v[i]<<" ";
    cout<<"\n";
    return 0;
}