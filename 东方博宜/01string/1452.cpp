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
    char arr[n+1];
    fa(i,0,n) cin>>arr[i];
    arr[n] = '\0';
    sort(arr,arr+n);
    string s = arr;
    int m = s.find_first_not_of('0');
    swap(s[0],s[m]);
    cout<<s<<"\n";
    return 0;
}