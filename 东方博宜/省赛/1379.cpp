#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;

int num[50];
int n;
int ind=0;
bool issu(int m)//判断素数
{
    if (m==2)
        return true;
    else if (m%2==0) return false;
    else{
        int k=sqrt(m)+1;
        for (int i=2;i<=k;i++)if (m%i==0) return false;  
    }
    return true;
}


int main()
{

    cin>>n;
    int sum=0,i,j;
    for (int i=2;i<=200;i++)if (issu(i)) num[ind++]=i; //如果是素数，将其存进num数组   
    for ( i=0;sum<n;i++)sum+=num[i];//将素数逐个累加
    if (sum==n) {//如果正好等于n，即为正解
        cout<<i;
        return 0;
    }
    for ( j=2,sum-=n;j<=sqrt(sum);j++) if (sum%j==0)break;//当sum>n时，需要sum-=n，
        //此时sum不是质数就是合数

    if (j>sqrt(sum))i--;//如果是质数将个数减1
    else i-=2;//如果是合数，则减2
    cout<<i;
    return 0;
}
