#include <bits/stdc++.h>
using namespace std;
const int N = 200010;
int n, a[N];
bool b[N];
int main() {
    scanf("%d", &n);
    for (int i = 1;i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i < n; i++)
        if (a[i + 1] <= 2 * a[i]) b[i] = 1;
        else b[i] = 0;
    //标记是否可行
    int res = 0, ans = 0;
    for (int i = 1;i < n; i++) {
        if (b[i] == 0) continue;
        res = 1;
        while (b[i + 1] == 1) res++, i++;
        ans = max(ans, res);
    }
    printf("%d\n", ans + 1);
    return 0;
}
