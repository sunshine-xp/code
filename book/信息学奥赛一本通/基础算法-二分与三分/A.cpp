#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)
#define LL long long 
using namespace std;

#define MAXN 100005
int n,m;
LL arr[MAXN];
bool check(int x)
{
    int cnt = 0;
    for(int i = 1;i <= n;i ++)
    {
        cnt ++;
        int j = i;
        while(j <= n && arr[j] < arr[i] + x) j ++;
        i = j - 1;
    }
    return cnt >= m;
}
int main()
{
    cin>>n>>m;
    fa(i,1,n) cin>>arr[i];
    sort(arr + 1, arr + n + 1);
    int l = 0,r= 1e9;
    while(l < r) {
        int mid = (1 + r + l) >> 1;
        if(check(mid)) l = mid;
        else r = mid - 1;
    }
    cout<<l<<endl;

    return 0;
}
/*
链接：https://ac.nowcoder.com/acm/contest/951/A
来源：牛客网

农夫约翰建造了一座有n间牛舍的小屋，牛舍排在一条直线上，第i间牛舍在x_ix 
i
​
 的位置，但是约翰的m头牛对小屋很不满意，因此经常互相攻击。约翰为了防止牛之间互相伤害，因此决定把每头牛都放在离其它牛尽可能远的牛舍。也就是要最大化最近的两头牛之间的距离。

牛们并不喜欢这种布局，而且几头牛放在一个隔间里，它们就要发生争斗。为了不让牛互相伤害。John 决定自己给牛分配隔间，使任意两头牛之间的最小距离尽可能的大，那么，这个最大的最小距离是多少呢？


*/