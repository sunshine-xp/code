#include<iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int a2 = a * a, b2 = b * b, c2 = c * c;
        if(a == b && b == c)cout<<("equilateral\n");
        else if(a2 + b2 == c2 || b2 + c2 == a2 || a2 + c2 == b2) cout<<("right\n");
        else if(a + b <= c || b + c <= a || a + c <= b) cout<<("error\n");
        else cout<<("normal\n");    
    }
    return 0;
}