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
    fa(i,0,s.size() - 1) {
        if(s[i]>='a' && s[i] <= 'y'||s[i]>='A'&&s[i]<='Y') s[i] += 1;
        else if(s[i] == 'z'||s[i] == 'Z') s[i] -= 25;
    }
    cout<<s<<endl;
    return 0;
}