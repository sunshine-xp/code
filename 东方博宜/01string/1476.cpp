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
    getline(cin,s);
    char a,b,c;
    cin>>a;
    switch (a)
    {
    case 'D':{
        cin>>b;
        int m = s.find(b,0);
        if(m == -1) {
            cout<<"Not exist"<<endl;
            return 0;
        }
        else s.erase(m,1);
        cout<<s<<endl;
        break;
        }
    
    case 'I':{
        cin>>b>>c;
        int m = s.rfind(b);
        if(m == -1) {
            cout<<"Not exist"<<endl;
            return 0;
        }
        else s.insert(m,1,c);
        cout<<s<<endl;
        break;
        }
    case 'R':{ 
        cin>>b>>c;
        int m = s.find(b);
       if(m == -1) {
            cout<<"Not exist"<<endl;
            return 0;
        }
        while(s.find(b,m) != -1){
            s[m] = c;
            m = s.find(b) + 1;
        }
        cout<<s<<endl;
        break;
    }
    }
    return 0;
}