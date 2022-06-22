#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    double i = n + m*1.0/2;
    double j = (n + m)*(100 - a)*0.01;
    cout<<(i<j?"By myself":"Through school")<<endl;
}