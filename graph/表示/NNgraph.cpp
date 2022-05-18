#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class NNgraph
{
private:
    int E;
    int V;
    vector<vector<int> > G;

public:
    NNgraph(string filename)
    {
        ifstream ifs("NNgraph.txt", ios::in);
        ifs >> V;
        ifs >> E;
        for (int i = 0; i < E;i++) {
            int v1, v2;
            ifs >> v1 >> v2;
            G[v1].push_back(v2);
            G[v2].push_back(v1);
        }
    }
    void printG() {
        cout << "V :" << V << " , "
             << "E :" << E << endl;
        for (int i = 0; i < V; i++)
        {
            cout << i << "-> ";
            for (int j = 0; j < G[i].size(); j++)
                cout << G[i][j] << " ";
        }
    }
};
int main()
{
    NNgraph g("NNgraph.txt");
    g.printG();
}