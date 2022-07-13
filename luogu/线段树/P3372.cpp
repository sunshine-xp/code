#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
int a[MAXN + 5];
int d[(MAXN << 2) + 10], b[(MAXN << 2) + 10];
void build(int s, int t, int p)
{
    if (s == t)
    {
        d[p] = a[s];
        return;
    }
    int m = s + ((t - s) >> 1);
    build(s, m, p * 2), build(m + 1, t, p * 2 + 1);
    d[p] = d[p * 2] + d[(p * 2) + 1];
}



void update(int l, int r, int c, int s, int t, int p)
{
    if (l <= s && t <= r)
    {
        d[p] += (t - s + 1) * c, b[p] += c;
        return;
    }
    int m = s + ((t - s) >> 1);
    if (b[p] && s != t)
    {

        d[p * 2] += b[p] * (m - s + 1), d[p * 2 + 1] += b[p] * (t - m);
        b[p * 2] += b[p], b[p * 2 + 1] += b[p];
        b[p] = 0;
    }
    if (l <= m)
        update(l, r, c, s, m, p * 2);
    if (r > m)
        update(l, r, c, m + 1, t, p * 2 + 1);
    d[p] = d[p * 2] + d[p * 2 + 1];
}
int getsum(int l, int r, int s, int t, int p)
{

    if (l <= s && t <= r)
        return d[p];

    int m = s + ((t - s) >> 1);
    if (b[p])
    {

        d[p * 2] += b[p] * (m - s + 1), d[p * 2 + 1] += b[p] * (t - m),
        b[p * 2] += b[p], b[p * 2 + 1] += b[p];
        b[p] = 0;
    }
    int sum = 0;
    if (l <= m)
        sum = getsum(l, r, s, m, p * 2);
    if (r > m)
        sum += getsum(l, r, m + 1, t, p * 2 + 1);
    return sum;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, n, 1);
    for (int i = 0; i < m; i++)
    {
        int a, b, c, d;
        cin >> a;
        if (a == 2)
        {
            cin >> b >> c;
            cout << getsum(b, c, 1, n, 1) << endl;
        }
        else
        {
            cin >> b >> c >> d;
            update(b, c, d, 1, n, 1);
        }
    }
}