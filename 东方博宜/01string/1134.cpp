#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

bool istrue(string s,int end) {
    bool f = false;
    if(end %2 == 1) {
        f = true;
        fa(i,0,end/2)
            if(s[i] != s[end - i]) {
                f = false;
                break;
            }
    }else f = false;
    return f;
}
int main()
{
    string s;
    cin>>s;
    int end = s.size() - 1;
    while(istrue(s,end)) end /= 2;
    cout<<end + 1<<endl;
    return 0;
}