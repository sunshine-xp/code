#include<bits/stdc++.h>
using namespace std;
int t,n; 
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==1) printf("-1\n");
		else printf("%d %d 0\n",n/2,n/2);
	}
	return 0;
}