#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i < (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
struct node{
    string sortnum,diff,name;
    node(string sortnum = "",string diff = "",string name = ""):sortnum(),diff(),name(){}
};
//enum kind {【入门】=0,【基础】,【提高】};
bool cmp(node a,node b) {
    if(a.diff == "【入门】") {
        if(b.diff == "【入门】") return a.sortnum<b.sortnum;
        if(b.diff == "【基础】") return true;
        if(b.diff == "【提高】") return true;
    }else if(a.diff == "【基础】") {
        if(b.diff == "【入门】") return false;
        if(b.diff == "【基础】") return a.sortnum<b.sortnum;
        if(b.diff == "【提高】") return true;
    }else if(a.diff == "【提高】") {
        if(b.diff == "【入门】") return false;
        if(b.diff == "【基础】") return false;
        if(b.diff == "【提高】") return a.sortnum<b.sortnum;
    }
}

int main(int argc, char const *argv[])
{
    int pnum = atoi(argv[1]);
    freopen(argv[2],"r",stdin);
    freopen(argv[3],"w",stdout);
    node arr[pnum];
    int arri = 0;
    string s;
    int count = 0;
    while(getline(cin,s)) {
        node problem;
        int m = s.find("\t");
        int n;
        problem.sortnum = s.substr(0,m);

        m = s.find("【",0);
        n = s.find("】",m);
        problem.diff = s.substr(m,n-m+3);

        m = s.find("\t",n);
        problem.name = s.substr(n+3,m-n-2);
        arr[arri++] = problem;
       // cout<<count++<<" "<<problem.sortnum<<" "<<problem.diff<<" "<<problem.name<<endl;//
    }
    sort(arr,arr+pnum,cmp);

    for(int i = 0;i<pnum;i++) cout<<arr[i].sortnum<<"\t"<<arr[i].diff<<"\t"<<arr[i].name<<endl;
    
    
    return 0;
}