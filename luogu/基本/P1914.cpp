#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    int n;
    string s;
    cin>>n>>s;
    fa(i,0,s.size()) s[i] = (s[i] - 'a' + n)%26 + 'a';
    cout<<s<<endl;

    return 0;
}