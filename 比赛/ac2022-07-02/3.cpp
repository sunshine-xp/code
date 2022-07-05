#include <bits/stdc++.h>
using namespace std;
const int N = 20010;
int n, fa[N], c[N], ans = 0;
vector<int> son[N];
void dfs(int x, int color) {
    if (c[x] != color) {
        ans++;
        if (son[x].size() == 0) return;
        for (int i = 0; i < son[x].size(); i++) dfs(son[x][i], c[x]);
    }
    else {
        if (son[x].size() == 0) return;
        for (int i = 0; i < son[x].size(); i++) dfs(son[x][i], color);
    }


}
int main() {
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) scanf("%d", &fa[i]);
    for (int i = 1; i <= n; i++) scanf("%d", &c[i]);
    for (int i = 2; i <= n; i++) son[fa[i]].push_back(i);  //添加儿子
    dfs(1, c[1]);
    printf("%d\n", ans + 1);
    return 0;
}
