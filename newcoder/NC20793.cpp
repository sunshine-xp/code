#include <bits/stdc++.h>
using namespace std;
constexpr int N = 1e4 + 10;
int n, m;
int p[N], cnt[N];
int find(int x){
    if (x != p[x]) p[x] = find(p[x]);
    return p[x];
}
int main(){
    for (int i = 1; i < N; ++ i ) cnt[i] = 1;
    for (int i = 1; i < N; ++ i ) p[i] = i;
    cin >> n >> m;
    for (int i = 1, x, y; i <= m; ++ i ){
        cin >> x >> y;
        int fx = find(x), fy = find(y); 
        if (fx == fy) continue;
        p[fx] = fy;
        cnt[fy] += cnt[fx];
        if (cnt[fy] >= 3){
            cout << "Error" ;
            return 0;
        }
    }
    puts("Nice");
    return 0;
}