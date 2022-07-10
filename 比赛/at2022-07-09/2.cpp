#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,d;
    cin>>a>>b>>d;
    double cosv = cos(d*1.0/180*M_PI);
    double sinv = sin(d*1.0/180*M_PI);
    double x,y;
    x = a*cosv-b*sinv;
    y = b*cosv+a*sinv;
    cout<<x<<" "<<y<<endl;
}