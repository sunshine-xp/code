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
    int start,e;
    fa(i,0,s.size() - 1) if(s[i] != '*') {start = i;break;}
    fm(i,s.size() - 1,0) if(s[i] != '*') {e = i;break;}
    fa(i,0,s.size() - 1) 
        if(i<start || i>e) cout<<s[i];
        else if(s[i] != '*') cout<<s[i];
    
    return 0;
}