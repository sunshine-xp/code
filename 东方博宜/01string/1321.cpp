#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int totime(string time) {
    int ans = 0;
    ans += ((time[0]-'0')*10+(time[1]-'0'))*60;
    ans += (time[3]-'0')*10+(time[4]-'0');
    return ans;
}
int main()
{
    string s,e;
    cin>>s>>e;
    double r = (totime(e)-totime(s))*1.0/(60*12)*360;
    printf("%.1lf",r);
    return 0;
}