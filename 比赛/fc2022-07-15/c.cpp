#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        string ss[c+1];
        int len[c];
        memset(len,0,sizeof(len));
        for(int i = 1;i<=c;i++) {
            long long int l,r;
            cin>>l>>r;
            ss[i] = s.substr(l,r-l);
        }
        for(int i = 0;i<q;i++) {
            long long int que;
            cin>>que;

        }
    }
}