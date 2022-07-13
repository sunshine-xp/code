#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int a[26];
        memset(a,0,sizeof(a));
        for(int i = 0;i<s.size();i++) a[s[i]-'A']++;
        int ans = 0;
        for(int i = 0;i<26;i++) ans += a[i]==0?0:a[i]+1; 
        cout<<ans<<endl;
    }
    
}