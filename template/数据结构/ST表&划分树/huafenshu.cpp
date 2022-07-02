#include<bits/stdc++.h>
using namespace std;
#define LL long int
const int N=1e5+5;

int sorted[N];            //对原来集合中的元素排序后的值
struct node
{
    int valu[N];       //val记录第k层当前位置元素的值
    int num[N];        //num记录元素所在区间的当前位置之前进入左孩子的个数
    LL sum[N];         //sum记录比当前元素小的元素的和
}t[20];
void build(int lft,int rht,int ind)
{
    if(lft==rht) return;
    int mid=MID(lft,rht);
    int same=mid-lft+1,ln=lft,rn=mid+1;
    for(int i=lft;i<=rht;i++)
        if(valu[ind][i]<order[mid]) same--;
    for(int i=lft;i<=rht;i++)
    {
        int flag=0;
        if((valu[ind][i]<order[mid])||valu[ind][i]==order[mid]&&same>
        {
            flag=1;
            valu[ind+1][ln++]=valu[ind][i];
            if(valu[ind][i]==order[mid]) same--;
            lsum[ind][i]=lsum[ind][i-1]+valu[ind][i];
        }
        else
        {
            lsum[ind][i]=lsum[ind][i-1];
            valu[ind+1][rn++]=valu[ind][i];
        }
        toLft[ind][i]=toLft[ind][i-1]+flag;
    }
    build(lft,mid,ind+1);
    build(mid+1,rht,ind+1);
}
int query(int st,int ed,int k,int lft,int rht,int ind)
{
    if(lft==rht) return valu[ind][lft];
    /*
          lx表示从lft到st-1这段区间内有多少个数进入左子树
        ly表示从st到ed这段区间内有多少个数进入左子树
        rx表示从lft到st-1这段区间内有多少个数进入右子树
        ry表示从st到ed这段区间内有多少个数进入右子树
     */
    int mid=MID(lft,rht);
    int lx=toLft[ind][st-1]-toLft[ind][lft-1];
    int ly=toLft[ind][ed]-toLft[ind][st-1];
    int rx=st-1-lft+1-lx;
    int ry=ed-st+1-ly;
    if(ly>=k) return query(lft+lx,lft+lx+ly-1,k,lft,mid,ind+
    else
    {
        isum+=lsum[ind][ed]-lsum[ind][st-1];
        st=mid+1+rx;
        ed=mid+1+rx+ry-1;
        return query(st,ed,k-ly,mid+1,rht,ind+1);
    }
}