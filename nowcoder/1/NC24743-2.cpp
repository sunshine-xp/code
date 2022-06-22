#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct time {
    int x,y,z;
    time(int x = 0,int y = 0,int z = 0):x(0),y(0),z(0){}; 
}a[5010];

bool cmp(struct time a, struct time b){
    if(a.x!=b.x){
        return a.x<b.x;
    }
    if(a.y!=b.y){
        return a.y<b.y;
    }
    return  a.z<b.z;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++) cin>>a[i].x>>a[i].y>>a[i].z;
    sort(a,a+n,cmp);
    for(int i = 0;i<n;i++) cout<<a[i].x<<" "<<a[i].y<<" "<<a[i].z<<endl;
}