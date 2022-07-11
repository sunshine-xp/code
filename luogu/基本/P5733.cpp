#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s;
    cin>>s;
    fa(i,0,s.size()) if(s[i] >= 'a'&&s[i]<='z') s[i] -= 'a'-'A';
    
    cout<<s<<endl;
    return 0;
}