#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
bool cmp(char a,char b){
    if(a > b) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    char arr[n];
    fa(i,0,n) cin>>arr[i];
    sort(arr,arr+n,cmp);
    fa(i,0,n)cout<<arr[i];
    cout<<"\n";
    return 0;
}