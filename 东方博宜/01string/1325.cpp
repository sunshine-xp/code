#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main()
{
    string s,s1,s2,s3;
    cin>>s;
    int m = s.find('+');
    int t = s.find('*');
    int a,b,c;
    s1 = s.substr(1,m-1);
    s2 = s.substr(m+1,t-m-2);
    s3 = s.substr(t+1);
    a = stoi(s1);
    b = stoi(s2);
    c = stoi(s3);
    //cout<<s1<<" "<<s2<<" "<<s3<<endl;
    cout<<(a+b)*c<<endl;    
    
    return 0;
}