#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
signed main(){
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=2;i<=n;i++) a[i]+=a[i-1];
	int x,y;
	while(q--){
		cin>>x>>y;
		cout<<a[n-x+y]-a[n-x]<<endl;
	}
	return 0;
}