#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
const int N = 40005;
int n, m, ss, tt;
int dis[N];
int cur[N];
queue<int> q;
int mark[N],to[N];
struct Edge {
    int to;
    int value;
    int next;
} e[N * 4];
int head[N], cnt = -1;
void add(int from, int to, int value) {
    cnt++;
    e[cnt].to = to;
    e[cnt].value = value;
    e[cnt].next = head[from];
    head[from] = cnt;
}

bool bfs(int s, int t) {
    q = queue<int>();
    memset(dis, -1, sizeof(dis));
    dis[s] = 0;
    q.push(s);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = head[x]; i > -1; i = e[i].next) {
            int now = e[i].to;
            if (dis[now] == -1 && e[i].value != 0) {
                dis[now] = dis[x] + 1;
                q.push(now);
            }
        }
    }
    return dis[t] != -1;
}

int dfs(int x, int t, int maxflow) {
    if (x == t)
        return maxflow;
    int ans = 0;
    for (int i = cur[x]; i > -1; i = e[i].next) {
        int now = e[i].to;
        if (dis[now] != dis[x] + 1 || e[i].value == 0 || ans >= maxflow)
            continue;
        cur[x] = i;
        int f = dfs(now, t, min(e[i].value, maxflow - ans));
        if(f)
	{
		to[x]=e[i].to;
		if(e[i].to-n>0)
			mark[e[i].to-n]=1;
	}
        e[i].value -= f;
        e[i ^ 1].value += f;
        ans += f;
    }
    return ans;
}
int Dinic(int s, int t) {
    int ans = 0;
    while (bfs(s, t)) {
        memcpy(cur, head, sizeof(head));
        ans += dfs(s, t, INF);
    }
    return ans;
}
int main() {
    memset(head, -1, sizeof(head));
    scanf("%d%d", &n, &m);
    int a, b;
    for(int i=1;i<=m;i++) {
	scanf("%d%d",&a,&b);
        add(a, n+b, 1);
        add(n+b, a, 0);
    }
    ss = 0, tt = n+n+1;
    for (int i = 1; i <= n; i++) {
        add(ss, i, 1);
        add(i, ss, 0);
    }
    for (int i = 1; i <= n; i++) {
        add(n+i, tt, 1);
        add(tt, n+i, 0);
    }
    int ans=n-Dinic(ss, tt);
    for(int i=1;i<=n;i++)
    {
        if(mark[i])continue;
        printf("%d",i);
        int k=i;
        while(to[k])
        {
            printf(" %d",to[k]-n);
            k=to[k]-n;
        }
        printf("\n");
    }
    printf("%d\n",ans);
    return 0;
}
