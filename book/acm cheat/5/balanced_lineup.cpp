#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#define MAXN  50001
#define INF INT_MAX
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define L(a)  ((a)<<1)
#define R(a) (((a)<<1) + 1)

typedef struct node_t {
    int left,right;
    int max,min;
}node_t;

int A[MAXN];
node_t node[MAXN * 4];
int minx,maxx;

void init(){memset(node, 0, sizeof(node));}

void build(int t, int l, int r)
{
    node[t].left = l,node[t].right = r;
    if(l == r) {
        node[t].max = node[t].min = A[l];
        return ;
    }

    const int mid = (l + r) / 2;
    build(L(t), l, mid);
    build(R(t), mid + 1,r);
    node[t].max = max(node[L(t)].max,node[R(t)].max);
    node[t].min = min(node[L(t)].min,node[R(t)].min);
}

void query(int t,int l,int r) 
{
    if(node[t].left == l && node[t].right == r) {
        if(maxx < node[t].max) maxx = node[t].max;
        if(minx > node[t].min) minx = node[t].min;
        return;
    }
    const int mid = (node[t].left + node[t].right) / 2;
    if(l > mid) query(R(t), l, r);
    else if(r <= mid) query(L(t), l, r);
    else {
        query(L(t), l, mid);
        query(R(t),mid + 1,r);
    }
}

int main()
{
    int n,q,i;
    scanf("%d",&n,&q);
    for(i = 1;i <= n; i++) scanf("%d",&A[i]);

    init();


    build(1,1,n);

    while(q--) 
    {
        int a,b;
        scanf("%d%d",&a,&b);
        maxx = 0;
        minx = INF;
        query(1,a,b);
        printf("%d\n",maxx-minx);
    }
    return 0;
}