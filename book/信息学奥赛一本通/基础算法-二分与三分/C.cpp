#include<bits/stdc++.h>
using namespace std;
 
#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

const int N = 1e5 + 10;
const double INF = 1e18;
 
int a[N], b[N], c[N];
int n;
 
double cal(double mid) {
    double mx = -INF;
    for(int i = 0; i < n; i++)
            mx = max(mx, a[i] * mid * mid + b[i] * mid + c[i]);
    return mx;
}
 
int main() 
{
    int T;
    cin>>T;
    while(T--) {
        cin>>n;
        fa(i,0,n - 1) cin>>a[i]>>b[i]>>c[i];
            
         
        double l = 0, r = 1000;
        while(r - l > 1e-5) {
            double m1 = l + (r - l) / 3, m2 = r - (r - l) / 3;
            if(cal(m1) < cal(m2)) r = m2;
            else l = m1;
        }
        printf("%.4lf\n", cal(l));
    }
    return 0;
}