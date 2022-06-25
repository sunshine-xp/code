#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    int a = 0,b = 0,c = 0;
    string s;
    getline(cin,s);
    fa(i,0,s.size()) 
        if(islower(s[i])) a++;
        else if(isupper(s[i]))b++;
        else if(isdigit(s[i]))c++;
    cout<<b<<" "<<a<<" "<<c<<endl;
    return 0;
}