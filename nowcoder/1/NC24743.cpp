#include<iostream>
#include<queue>
using namespace std;
struct node {
    int x,y,z;
    node(int x = 0,int y = 0,int z = 0):x(0),y(0),z(0){}; 
};
bool operator<(node a,node b)
{
    if(a.x == b.x && a.y == b.y) return a.z > b.z;
    if(a.x == b.x) return a.y > b.y;
    return a.x > b.x;
}
int main()
{
    int n;
    cin>>n;
    priority_queue<node> pq;
    for(int i = 0;i < n;i ++)
    {
        node no;
        cin>>no.x>>no.y>>no.z;
        pq.push(no);
    } 
    
    while(!pq.empty()){
        node no = pq.top();
        cout<<no.x<<" "<<no.y<<" "<<no.z<<endl;
        pq.pop();
    }
}