#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string a,b;
    cin>>a>>b;
    if(a.size() != b.size()) cout<<"1"<<endl;
    else {
        if(a == b) cout<<"2"<<endl;
        else{
            bool f = true;
            fa(i,0,a.size() - 1)
                if(a[i] == b[i] || a[i] + 'A'-'a' == b[i] || a[i] - ('A'-'a') == b[i]) {}
                else {
                        f = false;
                        break;
                }
            if(f) cout<<"3"<<endl;
            else cout<<"4"<<endl;
        }
    }
    
    return 0;
}
/*可以修改字符串*/