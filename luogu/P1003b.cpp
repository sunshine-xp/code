#include<bits/stdc++.h>
using namespace std;
#define MAXN 10005
int d[MAXN][MAXN];
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i <= n; i++) {
        int a,b,g,k;
        cin>>a>>b>>g>>k;
        for(int x = a;x<=g;x++)
        for(int y = b;y<=k;y++)
            d[x][y] = i;
    }
    int x,y;
    cin>>x>>y;
    if(d[x][y] == 0) cout<<"-1"<<endl;
    else cout<<d[x][y]<<endl;

}