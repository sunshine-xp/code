#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,w;
    int x,r,i;
    cin>>s;
    fa(i,0,s.size()) 
        if(isdigit(s[i])) {
            w+=s[i];
            if(i == s.size()-1||!isdigit(s[i+1])) {
                x = stoi(w);
                r+=x;
                w = "";
            }
    }
    cout<<r<<endl;
}