#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<map>
using namespace std;
 
int t,n;
map<int,int>ma;
 
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
        ma.clear();
        int f=0;
		for(int i=1,j;i<=n;i++){
			scanf("%d",&j);
			if(ma.find(j)!=ma.end())continue;
			ma[j]=1;f++;
		}
		if((n-f)%2==1)f--;
		printf("%d\n",f);
	}
	return 0;
}