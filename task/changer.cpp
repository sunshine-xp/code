#include<bits/stdc++.h>
using namespace std;

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

int main()
{
    freopen("NOI_NOI+_CTSC.md","r",stdin);
    freopen("NOI_NOI+_CTSC1.md","w",stdout);
    char p[30];
    string s;
    int count = 0;
    while(cin>>p) 
    {
        if(p[0] == 'P' && p[1] >= '0'&& p[1] <= '9') {
            cout<<s<<endl;
            s.clear();
            s += p;
            count++;
        }else{
            s += " ";
            s += p;
        }

    }
    cout<<count<<endl;
    return 0;
}