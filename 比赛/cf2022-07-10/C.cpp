#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<int> v[2*m];
        set<int> s;
        for(int i = 0;i<m;i++) {
            int num;
            cin>>num;
            s.insert(num);
            v[num].push_back(i);
        }

        for(int i = 0;i<n;i++) {
            int a,b;
            cin>>a>>b;
            if(s.count(a) == 0|| s.count(b) == 0){
                cout<<"NO"<<endl;
            }
            else{
                if(v[a][0]<v[b].back()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
}