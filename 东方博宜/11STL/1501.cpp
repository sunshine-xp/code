#include<bits/stdc++.h>
#include<vector>
#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    fa(i,0,n) {
        int num;
        cin>>num;
        v.push_back(num);
    }
    while(m--) {
        int a,b,c;
        cin>>a;
        if(a == 1) {
            cin>>b>>c;
            v.insert(v.begin()+b,c);
        }else {
            cin>>b;
            v.erase(v.begin()+b-1);
        }
    }
    fa(i,0,v.size()) cout<<v[i]<<" ";
    cout<<"\n";
    
    return 0;
}