#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string ans;
    reverse(str.begin(),str.end());
    for(int i = 0;i<str.size();i++)
    {
        ans += str[i];
        if(i%3 == 2 && i != str.size() - 1) ans += ',';
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

}