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
    string s;
    cin>>s;
    int arr[256];
    memset(arr,0,sizeof(arr));
    fa(i,0,s.size()) {
        arr[s[i]-0]++;
        if( arr[s[i]-0]>=n) {
            cout<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}