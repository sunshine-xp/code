#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int T,n,a[N],p[N];
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i = 1; i <= n; i++) scanf("%d",&a[i]);
		bool fl=1; 
		for(int l = 1,r = 0; l <= n; l = r + 1){
			r=l;
			while(r < n && a[r+1] == a[l]) ++r;
			if(r == l)
			{
				fl=0;
				break;
			}
			for(int i = l + 1; i <= r; i++) p[i] = i - 1;
			p[l] = r;
		}
		if(!fl) puts("-1");
		else{
			for(int i=1;i<=n;++i) printf("%d ",p[i]);
			puts(""); 
		}
	}
	return 0;
}