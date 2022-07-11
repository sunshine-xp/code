#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;
        for(int i = 0;i<=9;i++) {
            if((int)pow(10,i) == x || (int)pow(10,i+1) == x) {
                cout<<"0"<<endl;
                break;
            }
            else if((int)pow(10,i) < x&&(int)pow(10,i+1)> x){
                cout<<x-(int)pow(10,i)<<endl;
                break;
            }
        }
    }
}