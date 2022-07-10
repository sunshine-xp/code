#include<bits/stdc++.h>
#define N 510
#define inf 0x3f3f3f3f
using namespace std;
struct node{
    int next,to,s;
};
node edged[N*N*2];
int n,k,T,too=1;
int a[N],f[N];
int head[N<<1];
int h[N<<1];

void add(int x,int y,int z){
    edged[++too].next=head[x];
    edged[too].to=y;
    edged[too].s=z;
    head[x]=too;
}

void ins(int x,int y,int z){
    add(x,y,z),add(y,x,0);
}

void clear(){
    too=1;
    memset(head,0,sizeof(head));
}

bool bfs(){
    queue<int>Q;
    Q.push(0);
    memset(h,-1,sizeof(h));
    h[0]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=head[u];i;i=edged[i].next)
        {
            int to=edged[i].to,s=edged[i].s;
            if(!s||h[to]!=-1)continue;
            h[to]=h[u]+1;
            Q.push(to);
        }
    }
    if(h[T]==-1)return false;
    return true;
}

int dfs(int u,int x){
    if(u==T)return x;
    int used=0;
    for(int i=head[u];i;i=edged[i].next)
    {
        int to=edged[i].to,s=edged[i].s;
        if(!s||h[to]!=h[u]+1)continue;
        int w=x-used;
        w=dfs(to,min(w,s));
        used+=w;
        edged[i].s-=w;
        edged[i^1].s+=w;
        if(used==x)return x;
    }
    if(!used)h[u]=-1;
    return used;
}

int dinic(){
    int ans=0;
    while(bfs())
        ans+=dfs(0,inf);
    return ans;
}

void solve1(){
    T=2*n+1;
    for(int i=1;i<=n;i++)
    {
        if(f[i]==1)ins(0,i,1);
        if(f[i]==k)ins(i+n,T,1);
        ins(i,i+n,1);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
            if(a[i]<=a[j]&&f[j]==f[i]+1)ins(i+n,j,1);
    }
    cout<<dinic()<<endl;
}

void solve2(){
    clear();
    for(int i=1;i<=n;i++)
    {
        int v=1;
        if(i==1||i==n)v=inf;
        if(f[i]==1)ins(0,i,v);
        if(f[i]==k)ins(i+n,T,v);
        ins(i,i+n,v);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
            if(a[i]<=a[j]&&f[j]==f[i]+1)ins(i+n,j,1);
    }
    int tmp=dinic();
    if(tmp>inf)printf("%d",n);
    else printf("%d\n",tmp);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        for(int j=0;j<i;j++)
            if(a[j]<=a[i])f[i]=max(f[i],f[j]+1);
        k=max(k,f[i]);
    }
    cout<<k<<endl;
    solve1();
    solve2();
    return 0;
}
