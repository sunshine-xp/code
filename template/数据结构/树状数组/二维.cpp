#include<bits/stdc++.h>
using namespace std;
#define MAXN 10
int a[MAXN][MAXN];//元数据
int lowbit(int x)
{
    return x & (-x);
}
void modify(int x,int y,int data)//二维
{
    for(int i=x;i<MAXN;i+=lowbit(i))
        for(int j=y;j<MAXN;j+=lowbit(j))
            a[i][j] += data;
}
int get_sum(int x,int y)
{
    int res=0;
    for(int i=x;i>0;i-=lowbit(i))
        for(int j=y;j>0;j-=lowbit(j))
            res+=a[i][j];
    return res;
}
if (p <= m) update1(p , add ,lson);
  else update1(p , add , rson);
  PushUP(rt);
}
int query(int L,int R,int l,int r,int rt)
{
  if (L <= l && r <= R)
  {
    return MAX[rt];
  }
  int m = (l + r) >> 1;
  int ret = -1;
  if (L <= m) ret = max(ret , query(L , R , lson));
  if (R > m)  ret =  max(ret , query(L , R , rson));
  return ret;
}
int query1(int L,int R,int l,int r,int rt)
{
  if (L <= l && r <= R)
  {
    return MIN[rt];
  }
  int m = (l + r) >> 1;
  int ret = 99999;
  if (L <= m) ret = min(ret , query1(L , R , lson));
  if (R > m)  ret =  min(ret , query1(L , R , rson));
  return ret;
}
int queryhe(int L,int R,int l,int r,int rt)
{
  if (L <= l && r <= R)
  {
    return SUM[rt];