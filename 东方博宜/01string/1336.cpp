#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


int gys(int a,int b) {
    int t;
    while(a%b!=0) {
        t = a%b;
        a = b;
        b =t;
    }
    return b;
}
string s,s1,s2,fz1,fm1,fz2,fm2;
int a1,b1,a2,b2;
int p;
int r1,r2;
int t;
int main()
{
    cin>>s;
    p = s.find("+");
    if(p == -1) p = s.find("-");
    fz1 = s1.substr(0,s1.find("/"));
    fm1 = s1.substr(s1.find("/")+1);

    fz2 = s1.substr(0,s2.find("/"));
    fm2= s2.substr(s2.find("/")+1);

    a1 = stoi(fz1);
    b1 = stoi(fm1);
    a2 = stoi(fz2);
    b2 = stoi(fm2);

    r2 = b1 * b2;
    if(s.find("+") != -1) r1 = a1*a2 + a2*b1;
    else r1 = a1*b2 - a2*b1;
    if(r1<0) {
        cout<<"-";
        r1 = r1*(-1);
    }
    t = gys(r1,r2);

    if(r1%r2 == 0) cout<<r1/r2;
    else cout<<r1/t<<"/"<<r2/t;

    return 0;
}