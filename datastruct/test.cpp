#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    set<string> g;
    freopen("Heimskringla.txt","r",stdin);
    freopen("result.txt","w",stdout);
    string name;
    while (cin>>name)   
    {
        if(name[0]>122|| name[0]<97||name[name.size()-1]>122||name[name.size()-1]<97) continue;
        g.insert(name);
    }
    for(set<string>::iterator it = g.begin();it != g.end();it++) cout<<*it<<endl;
    
}