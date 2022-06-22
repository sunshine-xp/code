#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    bool visited[n];
    memset(visited,false,sizeof(false));
    for(int i = 0;i<n;i++) cin>>arr[n - 1][i];
    for(int i = n -2;i >= 0;i--)
    {
        int minp = 2000,mini = 0,minj = 0;
        for(int j = 0;j<n;j++)
        {
            arr[i][j] = arr[i + 1][j] + arr[i + 1][j + 1];
            if(minp > arr[i][j]) {
                minp = arr[i][j];
                mini = i;
                minj = j;
            } 
        }
    }
}