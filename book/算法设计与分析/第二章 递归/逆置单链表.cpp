#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)
#define MAXN 1005
typedef long long LL;
using namespace std;

int main()
{
    freopen("逆置单链表in.txt","r",stdin);
    freopen("逆置单链表out.txt","w",stdout);
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        list<int> l;
        fa(i, 0, n+1) {int num; cin>>num; l.push_back(num);}
    }


    return 0;
} 