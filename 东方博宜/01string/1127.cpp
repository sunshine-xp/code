#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
bool cmp(string a,string b){
    if(a+b>b+a) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    string s[n];
    fa(i,0,n) cin>>s[i];    
    sort(s,s+n,cmp);
    fa(i,0,n)cout<<s[i];
    cout<<"\n";
    return 0;
}