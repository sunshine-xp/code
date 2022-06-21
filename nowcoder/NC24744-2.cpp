#include <iostream>
#include <cmath>
using namespace std;
 
long long a, b;
 
int fj (long long x) {
    int y;
    while (x != 0) {
        y = x % 10;
        x /= 10;
    }
    return y;
}
 
int main() {

    cin >> a >> b;
    for (int e = 0; e <= 62; e ++) {
        long long tmp = pow(2, e);
        if (e > a && fj (tmp) == b) {
            cout << e;
            return 0;
        }
    }
    cout << 0;
    return 0;
}