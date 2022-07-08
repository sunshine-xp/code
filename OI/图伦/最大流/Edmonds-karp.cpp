#include<bits/stdc++.h>
using namespace std;
const int MAX = 20;

int v,e;
int s,t;
int ans = 0;
map<int,int> g[MAX];

vector<int> getedge() {
    int pre[MAX];
    memset(pre,-1,sizeof(pre));
    queue<int> q;
    q.push(s);
    pre[s] = s;
    while(!q.empty()) {
        int top = q.front();
        q.pop();
        if(top == t) break;
        for(int i = 0;i<g[top].size();i++) {
            if(pre[g[top][i].to] == -1 && g[top][i].val>0) {
                pre[g[top][i].to] = top;
                q.push(g[top][i].to);
            }
        }
    }
    vector<int> res;
    if(pre[t] == -1) return res;
    int cur = t;
    while(cur != t) {
        res.push_back(cur);
        cur = pre[cur];
    }
    res.push_back(s);
    reverse(res.begin(),res.end());
    return res;

}
int main()
{
    freopen("network.txt","r",stdin);

    cin>>v>>e>>s>>t;
    for(int i = 0;i < e; i++) {
        int v1,v2,val;
        cin>>v1>>v2>>val;
        g[v1].insert({v2,val});
        g[v2].insert({v1,0});
    }
    for(int i = 0;i<v;i++) {
        for(auto it = g[i].begin();it!=g[i].end();it++) cout<<(*it)->first<<" ";
        cout<<"\n";
    }
        while(true) {
            vector<int> vect = getedge();
            for(int i = 0;i<vect.size();i++) cout<<vect[i]<<" ";
            cout<<"\n";
            if(vect.size() == 0) break;
            int premin = INT_MAX;
            //
            for(int i = 1;i<vect.size();i++) 
                for(int j = 0;j<g[vect[i-1]].size();j++) 
                    if(g[vect[i-1]][j].to = vect[i]) 
                        premin = min(premin,g[vect[i-1]][j].val);
            ans += premin;
            for(int i = 1;i<vect.size();i++) 
                for(int j = 0;j<g[vect[i-1]].size();j++) 
                    if(g[vect[i-1]][j].to = vect[i]) {
                        g[vect[i-1]][j].val -= premin;
                        g[j][vect[i-1]].val += premin;
                    }       
        }
    cout<<ans<<endl;
}