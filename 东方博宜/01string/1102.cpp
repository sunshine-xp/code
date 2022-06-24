#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,z,k;
    getline(cin,s);
    fa(i,0,s.size() - 1) 
        if(s[i] == ' ') k += s[i];
        else z += s[i];
    cout<<k+z<<endl;
    
    return 0;
}