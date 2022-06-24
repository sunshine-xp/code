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
    cin>>s;
    int hash[26] = {};
    fa(i,0,s.size() - 1) hash[s[i]-'a']++;
    int ans = 0;
    char t;
    fa(i,0,25) if(hash[i]>=ans) {
        t = i + 'a';
        ans = hash[i];
    }
    cout<<t<<endl;
    return 0;
}