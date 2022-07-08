#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100004;
int n,ans = 0,pre = 0;
int arr[MAXN];
int ba(int h,int prep) {
    h++;
    if(h == n){
        h--;
        cout<<ans<<endl;
        ans = max(ans,pre);
        return 0;
        pre -= prep;
    }
    pre += abs(prep-1);
    ba(h,1);
    pre+= abs(prep -arr[h]);
    ba(h,arr[h]);
}
int main()
{
    cin>>n;
    for(int i = 0;i<n;i++) cin>>arr[i];
    ba(-1,0);
    //cout<<ans<<endl;
}