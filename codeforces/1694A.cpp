#include <iostream>
#include <string>
using namespace std;
 
int main(){
  int t,c,u;
   cin>>t;
   for(int i=0;i<t;i++){
    string a="";
    cin>>c>>u;
    int sum=c+u;
   for(int j=0;j<sum;j++){
    if(u>0&&j%2==0){
        a+="1";
        u--;
    }else if(c>0&&j%2!=0){
        a+="0";
        c--;
    }else if(u>0&&j%2!=0){
        a+="1";
        u--;
    }else if(c>0&&j%2==0){
        a+="0";
        c--;
    }
 
   }
    cout<<a<<endl;
   }
}