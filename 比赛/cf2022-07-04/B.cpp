#include <cstdio>
 
int n, a, b;
 
int x[4][4] = {{1,0,0,1},{0,1,1,0},{0,1,1,0},{1,0,0,1}};
 
int main(){
	scanf("%d", &n);
	while(n--){
		scanf("%d%d", &a, &b);
		for(int i = 0; i < a; ++ i){
			for(int j = 0; j < b; ++ j){
				printf("%d ", x[i%4][j%4]);
			}
			puts("");
		}
	}
	return 0;
}