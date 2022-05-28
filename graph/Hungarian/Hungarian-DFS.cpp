#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<string.h>
using namespace std;
const int MAXN = 10;
int match[MAXN];
int maxmatch = 0;
bool visited[MAXN];
vector<int> g[MAXN];
bool dfs(int v);
int main()
{
    freopen("a.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    for(int i = 1; i <= m; i ++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    memset(match,-1,sizeof(int));
    for(int i = 0;i < n; i++) {
        memset(visited,false,sizeof(false));
        if(visited[i] == false && match[i] == -1) {
            if(dfs(i)) maxmatch++;
        }
    }
    cout<<maxmatch<<endl;
}

bool dfs(int v)
{
    visited[v] = true;
    for(int it :g[v]){
        if(!visited[it]) {
            visited[it] = true;
            if(match[it] == -1|| dfs(match[it])) {
                match[v] = it;
                match[it] = v;
                return true;
            }
        }
    }
    return false;
}