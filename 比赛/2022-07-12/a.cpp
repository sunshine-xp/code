#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--) {
        cin>>s;
        int count = 0;
        if(s[0] == 'y'||s[0] == 'Y') count++;
        if(s[1] == 'e'||s[1] == 'E') count++;
        if(s[2] == 's'||s[2] == 'S') count++;
        if(count == 3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}