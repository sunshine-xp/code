#include<bits/stdc++.h>
using namespace std;


const double eps = 1e-7;
double l,r;
bool ok(int num)
{

}
// l,r初始化，问题答案的左边界和右边界的确定
void binary()
{
    while (l + eps < r){
    double mid = (l + r) / 2.0;
    if (ok (mid)){
        l = mid;
        // r = mid;   
    }
    else {
        r = mid;
        // l = mid;
    }
    }
}