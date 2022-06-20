#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    char str[];
    cin >> str;
    vector<char> ans;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] <97) str[i] += 32;
        if(str[i] == 'a'||str[i] == 'o'||str[i] == 'y'||str[i] == 'e'||str[i] == 'u'||str[i] == 'i') continue;
        else {
            ans.push_back('.');
            ans.push_back(str[i]);
        }
    }
    for(int i = 0;i<ans.size();i++) cin >> ans[i];
}