#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,even = 0,odd = 0;
        for(int i = 0;i<n;i++) {
            cin>>a;
            if(a%2 == 0) even++;
            else odd++;
        }
        int min = even<odd?even:odd;
        cout<<min<<endl;
    }
}