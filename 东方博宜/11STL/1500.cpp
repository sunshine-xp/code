#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr[n+1];
    memset(arr,0,sizeof(arr));
    while(m--) {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
    }
    fa(i,1,n) {
        sort(arr[i].begin(),arr[i].end());
        cout<<arr[i].size()<<" ";
        fa(j,0,arr[i].size()-1) cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    
    return 0;
}