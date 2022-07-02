#include<bits/stdc++.h>
using namespace std;
#define MAXN 10
int a[MAXN];//元数据
int lowbit(int x)
{
    return x & (-x);
}
void modify(int x,int add)//一维
{  
    while(x<=MAXN)  
    {      
        a[x]+=add;    
        x+=lowbit(x);
    }
}
int get_sum(int x)
{  
    int ret=0;
    while(x!=0)  
    {       
        ret+=a[x];   
        x-=lowbit(x);   
    }  
    return ret;
}
