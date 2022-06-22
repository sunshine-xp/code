#include<iostream>
using namespace std;
const int MAXN = 100000;
int ranked[MAXN];
int data[MAXN];
void unioni(int v, int u);
int finded(int v);
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i <= n; i ++) ranked[i] = 1; 
    for (int i = 0; i <= n; i ++) data[i] = i;
    for (int i = 0; i < m; i ++)
     {
        int parent, sub;
        cin >> parent >> sub;
        data[finded(sub)] = finded(data[parent]);
    }
    for (int i = 2; i <= n; i ++) {
        if(finded(data[i]) != finded(data[1])) {
            unioni(finded(i), 1);
            ans++;
        }
    }
    cout << ans;
}


int finded(int v)
{
    while(data[v] != v)
    {
        data[v] = data[data[v]];
        v = data[v];
    }
    return v;
}


void unioni(int v,int u)
{
    v = finded(v);
    u = finded(u);
    if(u == v) return;
    if(ranked[v]<ranked[u]) data[v] = u;
    else if( ranked[v] > ranked[u]) data[u] = v;
    else 
    {
        data[u] = v;
        ranked[u]++;
    }

}

/**
 * 4 2
 * 1 2
 * 3 4
 * 
 */