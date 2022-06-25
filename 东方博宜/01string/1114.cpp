#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,s1,s2;
    cin>>s;
    bool f = false;
    int m = s.find('=');
    s1 = s.substr(0,m);
    s2 = s.substr(m+1);
    int n2 = stoi(s2);
    fa(i,0,s1.size()) {
        int x = stoi(s1.substr(0,i+1));
        int y = stoi(s1.substr(i+1));
        if(x+y == n2) {
            f = true;
            s.insert(i+1,"+");
            break;
        }
    }
    if(f)cout<<s<<endl;
    else cout<<"Impossible!"<<endl;
    
    return 0;
}