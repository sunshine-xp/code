#include<bits/stdc++.h>
using namespace std;

string decodeMessage(string key, string message) {
        int a[26],count = 0;
        memset(a,-1,sizeof(a));
        for(int i = 0;i<key.size();i++) 
            if(isalpha(key[i]) && a[key[i]-'a'] == -1)
                a[key[i]-'a'] = count++;
        
        for(int i = 0;i<message.size();i++) {
            if(isalpha(message[i])) 
                message[i] = a[message[i]-'a']+'a';
        }
        return message;
}
int main()
{
    string key,message;
    getline(cin,key);
    getline(cin,message);
    cout<<decodeMessage(key,message)<<endl;
}