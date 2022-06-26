#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
bool cmp(int a,int b){
    if(a>b) return true;
    else return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    int sum = 0;
    fa(i,0,m) {
        cin>>arr[i];
        sum += arr[i];
    }
    if(sum < n) {
        cout<<"NO"<<endl;
        return 0;
    }
    sort(arr,arr+m,cmp);
    int ans = 0,k = 0;
    fa(i,0,m) {
        if(k<n) {
            ans++;
            k+=arr[i];
        }else break;
    }
    cout<<ans<<endl;
    return 0;
}