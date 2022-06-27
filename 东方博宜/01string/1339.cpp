#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout)
int gys(int a,int b) {
    int t;
    while(a%b!=0) {
        t = a%b;
        a = b;
        b =t;
    }
    return b;
}
string stringadd(string s1,string s2) {
    if(s1.empty()) return s2;
    int a,b,c,d,m,n;
    m = s1.find('/');
    n = s2.find('/');
    a = stoi(s1.substr(0,m));
    b = stoi(s1.substr(m+1));
    c = stoi(s2.substr(0,n));
    d = stoi(s2.substr(n+1));
    int s = gys(b,d);
    int p = b*d/s;
    int q = p/b*a+p/d*c;
    return to_string(q)+"/"+to_string(p);
}

int main()
{
    string s,pres,ans;
    cin>>s;
    s += '+';
    int m = 0,t = 0,p,q;
    while(s.find('+',m) != -1) {
        m = s.find('+',m);
        pres = s.substr(t,m-t);
        ans = stringadd(ans,pres);
        pres = "";
        m++;
        t = m;
    }
    m = ans.find("/");
    p = stoi(ans.substr(0,m));
    q = stoi(ans.substr(m+1));
    if(p%q == 0) cout<<p/q<<endl;
    else{
        int num = gys(p,q);
        cout<<p/num<<"/"<<q/num<<endl;

    }
    return 0;
}