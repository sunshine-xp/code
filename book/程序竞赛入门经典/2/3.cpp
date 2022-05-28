#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i, j, k;
    for (i = 5 * 7; i % 3 != a; i += 5 * 7)
        ;
    for (j = 3 * 7; j % 5 != b; j += 3 * 7)
        ;
    for (k = 3 * 5; k % 7 != c; k += 3 * 7)
        ;
    int ans = (i + j + k) % (3 * 5 * 7);
    cout << ans;
}