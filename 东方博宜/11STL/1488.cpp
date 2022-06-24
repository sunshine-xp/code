#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    vector<int> v[100100];
    int n;
    cin>>n;
    while(n--) {
        string s;
        int x,y;
        cin>>s>>x>>y;
        if(s == "ADD") v[x].push_back(y);
        else {
            if(v[x].size() < y) cout<<"-1"<<endl;
            else cout<<v[x][y-1]<<endl; 
        }
    }
    return 0;
}