#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int main()
{
    string mi,x;
    int n;
    cin>>n;
    cin>>mi;
    fa(i,2,n) {
        cin>>x;
        if(x < mi) mi = x;
    }
    cout<<mi<<endl;
    return 0;
}