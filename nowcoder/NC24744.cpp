#include<iostream>
#include<string>
using namespace std;
//未通过
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[70];
    for(int i = 1;i <= 62; i++) 
    {
        long long int x = (1<<i);
        string s = to_string(x);
        arr[i] = s[0] - '0';
    }
    int min = 0;
    for(int i = n;i <= 62; i++)
    {
        if(arr[i] >= m && arr[i] > min) min = arr[i];
    }
    cout<<min<<endl;

}