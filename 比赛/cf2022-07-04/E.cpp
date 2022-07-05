#include<bits/stdc++.h>
#define ll long long
#define FIO "e"
using namespace std;
 
const int N=1e6+5,M=5e6+5;
 
int T;
int n,m,ans;
int mx,mn;
//!!! cnt should be int not bool
int cnt[M];
int val[M];
bool b[M];
 
int main(){
  scanf("%d",&T);
  while(T--){
    scanf("%d%d",&n,&m);
    mx=0;mn=5e6;
    for(int i=1;i<=m;i++)
      b[i]=cnt[i]=0;
    for(int i=1,x;i<=n;i++){
      scanf("%d",&x);
      mx=max(mx,x);
      mn=min(mn,x);
      cnt[x]=1;
      b[x]=1;
    }
    ans=mx-mn;
    for(int i=1;i<=mx;i++)
      val[i]=i;
    int tp=mx;
    for(int x=(int)sqrt(mx);x;x--){
      for(int y=x*x;y<=mx;y+=x)if(val[y]>val[y/x]){
        if(b[y])
          cnt[val[y]]--;
        val[y]=val[y/x];
        if(b[y])
          cnt[val[y]]++;
      } 
 
      while(!cnt[tp])tp--;
      if(x<=mn)ans=min(ans,tp-x);
    }    printf("%d\n",ans);
  }
  return 0;
}