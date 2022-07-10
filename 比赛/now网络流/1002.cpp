#include <bits/stdc++.h>
#define INF 0x3f3f3f
#define s 0
#define t 10000
#define maxn 1000
using namespace std;
struct Line{
	int r, w;
	bool dir;
	Line(){	}
	Line(int r, int w, bool d): r(r), w(w), dir(d){	} 
};
int num[maxn];
vector<Line> line;
vector<int> g[t + 5];
int deep[t + 5];
bool bfs()
{
	queue<int> que;
	memset(deep, 0, sizeof(deep));
	que.push(s);
	deep[s] = 1;
	while(!que.empty()){
		int top = que.front();
		que.pop();
		for(int i = 0; i < g[top].size(); i ++){
			int z = g[top][i];
			if(!deep[line[z].r] && line[z].w){
				deep[line[z].r] = deep[top] + 1;
				que.push(line[z].r);
				if(deep[t])
					return true;
			}
		}
	}
	return false;
}
int dfs(int x, int mix)
{
	if(x == t || !mix)
		return mix;
	int ap = 0;
	for(int i = 0; i < g[x].size(); i ++){
		int z = g[x][i];
		if(deep[x] < deep[line[z].r] && line[z].w){
			int p = dfs(line[z].r, min(mix, line[z].w));
			mix -= p;
			ap += p;
			line[z].w -= p;
			line[z^1].w += p;
			if(!mix)  
				return ap;
		}
	}
	return ap;
}
int dinic()
{
	int ans = 0;
	while(bfs())
		ans += dfs(s, INF);
	return ans;
}
void add_point(int x)   //x-2*x, x`-2*x+1
{
	line.push_back(Line(2*x, 1, 1));
	g[s].push_back(line.size() - 1);
	line.push_back(Line(s, 0, 0));
	g[2*x].push_back(line.size() - 1);
	line.push_back(Line(t, 1, 1));
	g[2*x+1].push_back(line.size() - 1);
	line.push_back(Line(2*x+1, 0, 0));
	g[t].push_back(line.size() - 1);
	for(int i = sqrt(x); i <= sqrt(x + x); i ++){
		int l = num[i] - x;
		if(l >= 1 && l < x){
			line.push_back(Line(2*x+1, 1, 1));
			g[2*l].push_back(line.size() - 1);
			line.push_back(Line(2*l, 0, 0));
			g[2*x+1].push_back(line.size() - 1);
		}		
	}
}
bool vis[t + 5];
void dfs2(int x)
{
	for(int i = 0; i < g[x].size(); i ++){
		int z = g[x][i];
		if(!vis[line[z].r / 2] && line[z].dir && !line[z].w){
			cout << " " << line[z].r / 2;
			vis[line[z].r / 2] = true;
			dfs2(line[z].r - 1);
			break;
		}
	}
}
int main()
{
	int n;
	for(int i = 0; i < maxn; i ++)
		num[i] = i * i;
	while(cin >> n){
		int k = 0;
		int w = 0;
		do{
			k++;
			add_point(k); 
			w += dinic();    //+=
		}while(k - w <= n);
		cout << k - 1 << endl;
		memset(vis, 0, sizeof(vis));
		for(int i = 1; i <= k - 1; i ++){
			if(!vis[i]){
				cout << i;
				vis[i] = true;
				dfs2(2*i);
				cout << endl;
			}
		}
		for(int i = 0; i <= t; i ++)
			g[i].clear();
		line.clear();
	}
	return 0;
}