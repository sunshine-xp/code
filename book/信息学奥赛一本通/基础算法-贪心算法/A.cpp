#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b) {
    if(a.second > b.second) return a.second<b.second;
    else return a.first<b.first;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    for(int i = 0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});//pair方法
    }
    sort(v.begin(),v.end(),cmp);
    // for(int i = 0;i<n;i++) cout<<v[i].first<<" "<<v[i].second<<" ";
    // cout<<"\n";
    int ans = 1;
    int end = v[0].first;
    for(int i = 0;i<n;i++) 
        if(v[i].first>=end) {
             ans++;
             end = v[i].second;
        }
    cout<<ans<<endl;
}