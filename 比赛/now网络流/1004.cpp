#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL INF=1000000000000000LL;
struct node
{
    int x,y,next,other;
    LL c;
}a[1110000];int len,last[210000];
struct edge{int x,y;LL c;}e[110000];
void ins(int x,int y,LL c)
{
    len++;
    a[len].x=x;a[len].y=y;a[len].c=c;
    a[len].next=last[x];last[x]=len;
}
void insx(int x,int y,LL c)
{
    int k1,k2;
    k1=++len;
    a[len].x=x;a[len].y=y;a[len].c=c;
    a[len].next=last[x];last[x]=len;
    k2=++len;
    a[len].x=y;a[len].y=x;a[len].c=0;
    a[len].next=last[y];last[y]=len;
    a[k1].other=k2;a[k2].other=k1;
}
int lsitt[51000],n,m;
LL d[1100];
int head,tail;
bool v[1100];
queue<int> q;
void SPFA()
{
    memset(v,false,sizeof(v));v[1]=true;
    for(int i=1;i<=n;i++)d[i]=INF;d[1]=0;
    q.push(1);
    while(!q.empty())
    {
        int x=q.front();
        for(int k=last[x];k;k=a[k].next)
        {
            int y=a[k].y;
            if(d[y]>d[x]+a[k].c)
            {
                d[y]=d[x]+a[k].c;
                if(v[y]==false)
                {
                    v[y]=true;
                    q.push(y);
                }
            }
        }
        q.pop();
        v[x]=false;
    }
}
void build()
{
    len=0;memset(last,0,sizeof(last));
    for(int i=1;i<=m;i++)
    {
        int x=e[i].x,y=e[i].y;
        if(d[x]+e[i].c==d[y])insx(x+n,y,INF);
        if(d[y]+e[i].c==d[x])insx(y+n,x,INF);
    }
}
int h[1100],st,ed;
bool bt_h()
{
    memset(h,0,sizeof(h));h[st]=1;
    lsitt[1]=st;head=1;tail=2;
    while(head!=tail)
    {
        int x=lsitt[head];
        for(int k=last[x];k;k=a[k].next)
        {
            int y=a[k].y;
            if(a[k].c>0 && h[y]==0)
            {
                h[y]=h[x]+1;
                lsitt[tail++]=y;
            }
        }
        head++;
    }
    if(h[ed]>0)return true;
    return false;
}
LL findflow(int x,LL f)
{
    if(x==ed)return f;
    LL s=0,t;
    for(int k=last[x];k;k=a[k].next)
    {
        int y=a[k].y;
        if(h[y]==h[x]+1 && a[k].c>0 && s<f)
        {
            s+=(t=findflow(y,min(a[k].c,f-s)));
            a[k].c-=t;a[a[k].other].c+=t;
        }
    }
    if(s==0)h[x]=0;
    return s;
}
int main()
{
    scanf("%d%d",&n,&m);
    len=0;memset(last,0,sizeof(last));
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d%lld",&e[i].x,&e[i].y,&e[i].c);
        ins(e[i].x,e[i].y,e[i].c);ins(e[i].y,e[i].x,e[i].c);
    }
    SPFA();
    build();
    for(int i=1;i<=n;i++)
    {
        LL tmp;
        scanf("%lld",&tmp);
        if(i!=1 && i!=n)insx(i,i+n,tmp);
    }
    st=n*2+1;ed=n*2+2;
    insx(1,1+n,INF);insx(n,n+n,INF);
    insx(st,1,INF);insx(n+n,ed,INF);
    LL ans=0;
    while(bt_h())ans+=findflow(st,INF);
    printf("%lld\n",ans);
    return 0;
}

/**
 * 
 * 原图SPFA之后最短路上重建图跑网络流，记得拆点。。
判一条边能构成最短路，设这条边连的点是u,v
d[u]+edge.c=d[v]，该边能构成最短路
之后u拆点v拆点，u出的点连向v进的点。。流量INF
输入的吞吐量拆点，u进的点连向u出的点，流量为给出的值
INF要开大点。。因为这个10^9

 * 
 */