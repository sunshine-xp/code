#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
bool ton(int num) {
    int t = num;
    int pnum = 0;
    while(num) {
        int s = num%10;
        pnum = pnum*10+s;
        num/=10;
    }
    if(t == pnum) return true;
    else return false;
}
int main()
{
    int n;
    int count = 0;
    cin>>n;
    fa(i,1,n+1) if(ton(i))count++;
    cout<<count<<endl;
    return 0;
}