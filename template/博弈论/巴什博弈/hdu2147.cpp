#include<cstdio>
#include<cstring>
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0)
            return 0;
        if(n%2==1&&m%2==1)
            printf("What a pity!\n");
        else
            printf("Wonderful!\n");
    }
    return 0;
}