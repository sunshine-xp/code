// wikioi 1080 线段树练习 http://www.wikioi.com/problem/1080/*/
#include<stdio.h>
#include<string.h>

#define L(a) ((a)<<1)
#define R(a) (((a)<<1)+1)
#define MAXN 100001
typedef long long int64_t;

typedef struct node_t {
    int left,right;
    int64_t sum;
}node_t;

int A[MAXN];

node_t node[MAXN*4];

void init(){memset(node, 0, sizeof(node));}

void build(int t, int l, int r)
{
    node[t].left = l;
    node[t].right = r;
    if(l == r) {
        node[t].sum = A[l];
        return;
    }
    const int mid = (l + r) / 2;
    build(L(t), l, mid);
    build(R(t), mid + 1, r);
    node[t].sum = node[L(t)].sum + node[R(t)].sum;
}

void update(int t,int l, int r, int pos, int64_t delta)

{
    if(node[t].left > pos || node[t].right < pos ) return ;
    if(node[t].left == node[t].right) {
        node[t].sum += delta;
        return ;
    }
    const int mid = (node[t].left + node[t].right) / 2;
    if(l>mid) update(R(t), l, r, pos, delta);
    else if(r <= mid) update(L(t), l, r, pos, delta);
    else {
        update(L(t), l, mid,pos,delta);
        update(R(t), mid + 1, r, pos, delta);
    }
    node[t].sum = node[L(t)].sum + node[R(t)].sum;
}

int64_t query(int t, int l, int r)
{
    if(node[t].left == l && node[t].right == r) return node[t].sum;
    const int mid = (node[t].left + node[t].right) / 2;
    if(l > mid) return query(R(t), l, r);
    else if(r <= mid) return query(L(t), l, r);
    else return query(L(t), l, mid) + query(R(t), mid + 1, r);
}

int main()
{
    int i, n, q;
    scanf("%d",&n);
    for(i = 1;i <= n;i++) scanf("%d",&A[i]);

    init();

    build(1,1,n);
    scanf("%d",&q);

    while(q--) {
        int cmd;
        scanf("%d",&cmd);
        if(cmd == 2) {
            int a, b;
            scanf("%d%d",&a,&b);
            printf("%lld\n",query(1,a,b));
        }else{
            int a;
            int64_t x;
            scanf("%d%lld",&a,&x);
            if(x != 0) update(1, 1, n, a, x);
        }
    }
    return 0;
}