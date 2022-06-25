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
    fa(i,0,n) {
        string t;
        cin>>t;
        s += t;
    }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}