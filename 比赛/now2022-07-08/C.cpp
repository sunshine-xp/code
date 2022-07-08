#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    vector<string> v;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++) {
        cin>>s1;
        v.push_back(s1);
    }
    sort(v.begin(),v.end());
    int arr[n];
    for(int i = 0;i<n;i++) {
        if(v[i].size() != s.size()) arr[i] = 0;
        else {
            int count = 0;
            for(int j = 0;j<s.size();j++) if(s[j] == v[i][j]) count++;
            
            arr[i] = count;
        }
    }
    int maxp = -1;
    for(int i = 0;i<n;i++) maxp = max(maxp,arr[i]);
    for(int i = 0;i<n;i++) {
        if(arr[i] == maxp) cout<<v[i]<<endl;
    }
    
}