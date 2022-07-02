#include<bits/stdc++.h>
using namespace std;

void dfs(int u) { //从u点开始找一个强连通分量
    pre[u] = lowlink[u] = ++dfs_clock;
    S.push(u);
    for (int i = 0; i < (int)G[u].size(); i++) {
        int v = G[u][i];
        if (!pre[v]) {
            dfs(v);
            if (lowlink[u] > lowlink[v]) lowlink[u] = lowlink[v];
        } else if (!sccno[v]) {
            if (lowlink[u] > pre[v]) lowlink[u] = pre[v];
        }
    }
    if (lowlink[u] == pre[u]) {
        scc_cnt++;
        for(;;) {
            int x = S.top(); S.pop();
            sccno[x] = scc_cnt;
            if (x == u) break;
        }
    }
}
void find_scc(int n) { //n是点的总数，点的范围1-n
    dfs_clock = scc_cnt = 0;
    MEM(sccno); MEM(pre); MEM(ans);
    for (int i = 1; i <= n; i++) {
        if (!pre[i]) dfs(i);
    }
}