#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, p, maxv = 0, minv = 0;
    cin >> l >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p;
        maxv = max(maxv, max(l - p + 1, p));
        minv = max(minv, min(l - p + 1, p));
    }
    cout<<minv<<" "<<maxv<<endl;
}