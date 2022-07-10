#include<bits/stdc++.h>
const int maxn = 1e3;
const int maxm = 1e6;
const int inf = 2147483647;
inline int min_(int x, int y) { return x < y ? x : y; }
inline int max_(int x, int y) { return x > y ? x : y; }
int n, m, l, s, t, ans;
int a;
char ch[30];
int h[maxn], hs = 1;
int et[maxm], en[maxm], ew[maxm];
void add(int u, int v, int w){
    ++hs, et[hs] = v, ew[hs] = w, en[hs] = h[u], h[u] = hs;
    ++hs, et[hs] = u, ew[hs] = 0, en[hs] = h[v], h[v] = hs;
}
int d[maxn], q[maxn], head, tail;
void dfs(){
    memset(d, 0, sizeof(d));
    head = tail = 0;
    d[s] = 1, q[head++] = s;
    while (head > tail)
    {
        a = q[tail++];
        for (int i = h[a]; i; i = en[i])
            if (!d[et[i]] && ew[i])
            {
                d[et[i]] = d[a] + 1;
                if (et[i] == t)
                    return;
                q[head++] = et[i];
            }
    }
}
int ap(int k, int w){
    if (k == t)
        return w;
    int uw = w;
    for (int i = h[k]; i && uw; i = en[i])
        if (d[et[i]] == d[k] + 1 && ew[i])
        {
            int nw = ap(et[i], min_(uw, ew[i]));
            if (nw)
                ew[i] -= nw, ew[i ^ 1] += nw, uw -= nw;
            else
                d[et[i]] = 0;
        }
    return w - uw;
}
void Dinic(){
    while (dfs(), d[t])
        ans -= ap(s, inf);
}
int main()
{
    scanf("%d%d%d", &n, &m, &l);
    s = 0, t = 1;
    for (int i = 1; i <= n; i++){
        scanf("%s", ch + 1);
        for (int j = 1; j <= m; j++){
            a = ch[j] - '0';
            int qp = i * m + j, zp = qp + 500;
            if (a){
                add(qp, zp, a);
                for (int ii = max_(1, i - l); ii <= min_(i + l, n); ii++)
                    for (int jj = max_(1, j - l); jj <= min_(j + l, m); jj++)
                        if ((ii - i) * (ii - i) + (jj - j) * (jj - j) <= l * l) add(zp, ii * m + jj, inf);
                if (i - l < 1 || i + l > n || j - l < 1 || j + l > m) add(zp, t, inf);
            }
        }
    }
    for (int i = 1; i <= n; i++){
        scanf("%s", ch + 1);
        for (int j = 1; j <= m; j++){
            int qp = i * m + j;
            if (ch[j] == 'L') ans++, add(s, qp, 1);
        }
    }
    Dinic();
    printf("%d",ans);
    return 0;
}