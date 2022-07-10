#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
const int maxx=0x7fffffff;
int n,m,x,y,ans;int tot;
struct wakaka{
    int to,next,v;
}e[40010];
int ha[210],queue[210],head[210],father[210];
void addedge(int u,int v,int w){
    tot++;e[tot].to=v;e[tot].v=w;e[tot].next=head[u];head[u]=tot;
    tot++;e[tot].to=u;e[tot].next=head[v];head[v]=tot;
}
bool bfs(){
    int now,t=0,w=1,p,i;
    memset(ha,-1,sizeof(ha));
    queue[t]=ha[0]=0;
    while (t<w){
        now=queue[t];
        t++;
        i=head[now];
        while(i){
            if (e[i].v&&ha[e[i].to]<0){
                queue[w++]=e[i].to;
                ha[e[i].to]=ha[now]+1;
            }
            i=e[i].next;
        }
    }
    if (ha[n+1]==-1) return 0;
    else
    return 1;
}
int dfs(int x,int maxx){
    if(x==n+1)return maxx;
    int i=head[x];
    int w,used=0;
    while(i)
    {
            if(e[i].v&&ha[e[i].to]==ha[x]+1)
            {
                w=maxx-used;
                w=dfs(e[i].to,min(w,e[i].v));
                //if (w!=0) father[x]=e[i].to;
                e[i].v-=w;
                e[i^1].v+=w;
                used+=w;
                if(used==maxx)return maxx;
                }
                i=e[i].next;
    }
    if(used==0)ha[x]=-1;
    return used;
}


int main(){
    tot=1;
    scanf("%d %d",&m,&n);
    scanf("%d %d",&x,&y);
    while (x!=y and x!=-1){
        addedge(x,y,1);
        scanf("%d %d",&x,&y);
    }
    for(int i=1;i<=n;++i){
        if (i<=m)
            addedge(0,i,1);
        else
            addedge(i,n+1,1);
    }
    while(bfs())ans+=dfs(0,maxx);
    if (ans!=0)
    {printf("%d\n",ans);
      //for (int i=1;i<=m;++i)
      //if (father[i])
      //printf("%d %d\n",i,father[i]);
    }
    else
    printf("No Solution!");
    return 0;
}