#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
vector<int> v;
int main()
{
    int n,m;
    cin>>n>>m;
    fa(i,1,n+1) v.push_back(i);
    int c = -1;
    while (v.size() != 1)
    {
        c = (c + m) % v.size();
        v.erase(v.begin()+c);
        c--;
    }
    cout<<v[0]<<endl;
     
    return 0;
}