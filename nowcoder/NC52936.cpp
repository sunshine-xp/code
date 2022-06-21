#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(n--)
    {
        string name;
        cin>>name;
        int s = 0;
        if(name.size() > 2 && name[name.size() - 2] == 'A' && name[name.size() - 1] == 'K' && s == 0)
        {
            cout<<"a";
        }
    }
}