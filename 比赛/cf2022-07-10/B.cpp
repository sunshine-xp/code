#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        set<char> m;
        int ans = 1;
        for(int i = 0;i<s.size();i++){
            if(m.size()<3)m.insert(s[i]);
            else if(m.size() == 3) {
                if(m.count(s[i]) == 0) {
                    m.clear();
                    ans++;
                    m.insert(s[i]);
                }
            }
        }
        cout<<ans<<endl;
    }
}