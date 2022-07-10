#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
int v,e,s,t,ans = 0;
map<int,int> g[MAXN];
vector<int> getsour() {
    vector<int> res;
    int pre[MAXN];
    memset(pre,-1,sizeof(pre));
    queue<int> q;
    q.push(s);
    pre[s] = s;
    while(!q.empty()) {
        int prev = q.front();
        q.pop();
        if(prev == t) break;
        for(auto it:g[prev]) {
            if(pre[it.first] == -1 && it.second>0){
                pre[it.first] = prev;
                q.push(it.first);
            }
        }
    }
    if(pre[t] == -1) return res;
    int cur = t;
    while(cur != s) {
        res.push_back(cur);
        cur = pre[cur];
    }
    res.push_back(s);
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    freopen("network2.txt","r",stdin);
    cin>>v>>e>>s>>t;
    for(int i = 0;i<e;i++) {
        int v1,v2,val;
        cin>>v1>>v2>>val;
        g[v1].insert({v2,val});
        g[v2].insert({v1,0});
    }
    for(int i = 0;i<v;i++) {
        for(auto it:g[i]){
            cout<<i<<"-"<<it.first<<":"<<it.second<<" ";
        }
        cout<<"\n";
    }
    while(true) {
        vector<int> vect = getsour();
        if(vect.size() == 0) break;

        for(int i = 0;i<vect.size();i++) cout<<vect[i]<<" ";
        cout<<"\n";
        //TODO 计算最小值
        int minv = INT_MAX;
        for(int i = 1;i<vect.size();i++) {
            int vpre = vect[i-1];
            int vcur = vect[i];
            if(g[vpre][vcur]<minv) minv = g[vpre][vcur];     
        }
         ans += minv;  
        //TODO 改变网路
        for(int i = 1;i<vect.size();i++) {
            int vpre = vect[i-1];
            int vcur = vect[i];
            g[vpre][vcur] -= minv;
            g[vcur][vpre] += minv;
        }
        for(int i = 0;i<v;i++) {
        for(auto it:g[i]){
            cout<<i<<"-"<<it.first<<":"<<it.second<<" ";
        }
        cout<<"\n";
    }
    }
    cout<<ans<<endl;
}