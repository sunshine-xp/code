#include<iostream>
using namespace std;
int x[1010];
int y[1010];
int ul[101];
int rank[101];
int findv(int v) {
    while(v != ul[v]) v = ul[v];
    return v;
}
void unionv(int v,int u) {
    int x = findv(u);
    int y = findv(v);
    if(x == y) return ;
    ul[x] = y;
}
int main()
{
    int n,str = 1;
    cin>>n;
    for(int i = 1;i<= n;i++) ul[i] = i;
    for(int i = 1;i<= n;i++) {
        int a,b;
        cin>>a>>b;
        if(x[a] == 0&&y[b] == 0) {
            x[a] = str;
            y[b] = str;
            ul[str] = str;
            str++;
        } else if(x[a] != 0&&y[b] == 0 ) {
            ul[str] = x[a];
            y[b] = str;
            str++;
        }else if(x[a] == 0&&y[b] != 0) {
            ul[str] = y[b];
            x[a] =  str;
            str++;
        }

    }
    int ans = 0;
    int sub = findv(1);
    for(int i = 1;i<= n;i++) {
        if(sub != findv(i)) {
            unionv(sub,i);
            ans++;
        }
    }
    cout<<ans;
}