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
    getline(cin,s);
    if(isdigit(s[0])||s == "int"||s == "double"||s=="cout"||s=="cin") {
        cout<<"no"<<endl;
        return 0;
    }
    fa(i,0,s.size()) if(!(s[i] == '_'||isalpha(s[i])||isdigit(s[i]))) {
        cout<<"no"<<endl;
        return 0;
    }
    cout<<"yes"<<endl;
    return 0;
}