#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s;
    cin>>s;
    fm(i,s.size()-1,0) if(isupper(s[i]))cout<<s[i];
    fa(i,0,s.size()) if(islower(s[i]))cout<<s[i];
    return 0;
}