#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
vector<int> a[1100];
int main()
{
    int n;
    cin>>n;
    fa(i,0,n) {
        int c;
        cin>>c;
        int x;
        fa(j,0,c) {
            cin>>x;
            a[i].push_back(x);
        }
        sort(a[i].begin(),a[i].end());
    }
    sort(a,a+n);
    fa(i,0,n) fa(j,0,a[i].size()) cout<<a[i][j]<<endl;
    cout<<"\n";
    
    return 0;
}