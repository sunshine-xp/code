#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int toTime(string time) {
    int ans = 0;
    ans += ((time[0] - '0') * 10 + (time[1] - '0')) * 3600;
    ans += ((time[3] - '0') * 10 + (time[4] - '0')) * 60;
    ans += (time[6] - '0') * 10 + (time[7] - '0');
    return ans;
}
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    cout<<(toTime(a) - toTime(b))<<endl;
    
    return 0;
}