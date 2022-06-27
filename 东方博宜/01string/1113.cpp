#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s;
    cin>>s;
    string num = "",maxv = "";
    int pos = 0;
    fa(i,0,s.size()) {
        if(isdigit(s[i])) num += s[i];
        else {
            if(num == "") continue;
            if(isdigit(s[i-1])){
                if(num.size()>maxv.size()||(num.size() == maxv.size()&&num[0]>maxv[0])) {
                    maxv = num;
                    pos = i - maxv.size()+1;
                }   
                num = "";
            }
        }
    }
    cout<<pos<<endl;
    return 0;
}