#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i > (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s;
    cin>>s;
    int arr[26];
    memset(arr,-1,sizeof(arr));
    int maxn = 0,minn = INT_MAX;
    fa(i,0,s.size())arr[s[i]-'a']++;
    fa(i,0,26) if(arr[i]!=-1&&arr[i]>maxn) maxn = arr[i];
    fa(i,0,26) if(arr[i]!=-1&&arr[i<minn]) minn = arr[i];
    if(maxn-minn<2)cout<<"No Answer\n0"<<endl;
    else{
        bool f = true;
        if(maxn-minn==2||(maxn-minn==3)||maxn-minn == 5)f = true;
        if(maxn-minn == 4) f= false;
        else {
            for(int i = 2;i<=(int)sqrt(maxn-minn);i++) {
                if((maxn-minn)%2==0)continue;
                else if((maxn-minn)%3==0)continue;
                if((maxn-minn)%i==0) {
                    f=false;
                    break;
                }
            }
        }
        if(f) {
            cout<<"Lucky Word\n";
            cout<<maxn-minn<<endl;
        }
        else{
            cout<<"No Answer\n0"<<endl;
        }
    }
       
    
    return 0;
}