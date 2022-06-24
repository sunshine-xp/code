#include<bits/stdc++.h>

#define fa(i,a,b) for(int (i) = (a);i <= (b);(i)++)
#define fm(i,a,b) for(int (i) = (a);i >= (b);(i)--)

typedef long long LL;
using namespace std;
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int main() 
{
	char a[100];
	cin>>a;
	int n = strlen(a)-1;
	string re = "TRUE";
	for (int i=0; i<=n/2; i++) {
		if (a[i] != a[n-1-i]) {
			re ="FALSE";
			break;
		}
	}
	cout<<re<<endl;
	
}