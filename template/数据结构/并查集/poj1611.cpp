#include <iostream>
#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)
typedef long long LL;
using namespace std;
int n, m, k, t, f;
int p[30001], ran[30001], a, b;
int find(int x) {
    if (x == p[x]) return x;
    else return p[x] = find(p[x]);
}
void un(int x, int y) {
    a = find(x);
    b = find(y);
    if (a == b) return;
    if (ran[a] > ran[b]) p[b] = a;
    else {
        p[a] = b;
        if (ran[a] == ran[b]) ran[b]++;
    }
}
int main() {
    int sum;
    while (cin >> m >> n && (m || n)) {
        for (int i = 0; i < m; i++) {
            p[i] = i;
            ran[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            cin >> k;
            if (k >= 1)
                cin >> f;
            for (int j = 1; j < k; j++) {
                cin >> t;
                un(f, t);
            }
        }
        sum = 1;
        for (int i = 1; i < m; i++)if (find(i) == find(0))sum++;
        
        cout << sum << endl;
    }
    return 0;
}