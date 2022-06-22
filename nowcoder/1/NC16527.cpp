#include<iostream>
#include<map>
#include <iterator>
using namespace std;
int N;
int M;
int main()
{
    cin>>N>>M;

    map<int, int> G[N];
    for (int i = 0; i < M; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
            G[x][y] = w;
            G[y][x] = w;   
    }
    cout << "----------" << endl;
    cout << N << " " << M << endl;
    for (int i = 0; i < N;i++) {
        cout << i << ":";
        for (map<int, int>::iterator it = G[i].begin(); it != G[i].end(); it++)
            cout <<"("<<it->first<<" "<< it->second << ") ";
        cout << endl;
    }
}