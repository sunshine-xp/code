#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int main()
{
    char arr[4] = {'A','C','T','G'};
    int n,k,r;
    cin>>n>>k>>r;
    string s;
    s += arr[r%4];
    fa(i,1,n){
        r = (r*6807+2831)% 201701;
        s += arr[r%4];
    }
    set<string> ss;
    fa(i,0,s.size()-k) ss.insert(s.substr(i,k));
    cout<<ss.size()<<endl;
    return 0;
}