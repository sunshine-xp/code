#include<bits/stdc++.h>
using namespace std;

 
int main()
{
    int n;
    char c;
    char arr[205];
    while(scanf("%d",&n)!=EOF)
    {
        c='a'; 
        memset(arr,0,sizeof arr);
        for(int i=0;i<2*n+1;i++)
        {
            for(int j=0;j<2*n+1;j++)
            {
                if(i%2==0)
                    arr[j]=c;
                if(i%2==1)
                    arr[2*n-j]=c;
                c++;
                if(c>'z')
                    c='a';
            }
            printf("%s\n",arr);
        }
    }
    return 0;
}