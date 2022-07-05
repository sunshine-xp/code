#include <cstdio>
#include <cstring>
using namespace std;
 
const int MaxN = 5003;
int a[MaxN];
int dp[MaxN];
int cnt[MaxN];
 
int pcnt[MaxN];
 
void solve() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		pcnt[i + 1] = 0;
	}
	if (n == 1) {
		printf("1\n");
		return;
	}
 
	int pmaxcnt = 1;
	dp[0] = 1;
	pcnt[a[0]] = 1;
	for (int i = 1; i < n; ++i) {
		int maxcnt = 0;
		int tot = 0;
		for (int j = 1; j <= n; ++j) {
			cnt[j] = 0;
		}
		if (i % 2 == 0 && pmaxcnt <= i / 2) {
			dp[i] = 1;
		} else {
			dp[i] = -1;
		}
		// printf("%d: %d\n", i, dp[i]);
 
		for (int j = i - 1; j >= 0; --j) {
			if (a[j] == a[i] && maxcnt <= tot / 2 && tot % 2 == 0) {
				if (dp[j] > -1 && dp[j] + 1 > dp[i]) {
					dp[i] = dp[j] + 1;
				}
			}
			cnt[a[j]] += 1;
			tot += 1;
			if (cnt[a[j]] > maxcnt) {
				maxcnt = cnt[a[j]];
			}
		}
		pcnt[a[i]] += 1;
		if (pcnt[a[i]] > pmaxcnt) {
			pmaxcnt = pcnt[a[i]];
		}
	}
	// for (int i = 0; i < n; ++i) {
	// 	printf("%d ", dp[i]);
	// }
	// printf("\n");
	for (int j = 1; j <= n; ++j) {
		cnt[j] = 0;
	}
	int ans = 0;
	int maxcnt = 0;
	int tot = 0;
	for (int i = n - 1; i >= 0; --i) {
		if (dp[i] > ans && maxcnt <= tot / 2 && tot % 2 == 0) {
			ans = dp[i];
		}
		cnt[a[i]] += 1;
		tot += 1;
		if (cnt[a[i]] > maxcnt) {
			maxcnt = cnt[a[i]];
		}
	}
	printf("%d\n", ans);
}
 
int main() {
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; ++i) {
		solve();
	}
	return 0;
}