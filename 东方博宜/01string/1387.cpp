#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s;
    getline(cin,s);
    string r;
    fa(i,0,s.size() - 1) 
        if(s[i] >= 'A' && s[i] <= 'Z') r += (s[i]-'A'+21)%26+'A';
        else r += s[i];
    cout<<r<<endl;
    return 0;
}