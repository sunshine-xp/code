#include <bits/stdc++.h>
 
using namespace std;
 
const long long MOD = 1000000007;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ind(n);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ind[a] = i;
        }
        long long ans = 1;
        int low = ind[0], high = ind[0];
        for (int i = 1; i < n; i++) {
            if (ind[i] > low && ind[i] < high)
                ans = (ans * (high - low - i + 1)) % MOD;
            else {
                low = min(low, ind[i]);
                high = max(high, ind[i]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}