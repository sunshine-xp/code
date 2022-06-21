/// Source : https://leetcode.com/problems/shortest-bridge/
/// Author : liuyubobobo
/// Time   : 2018-11-03

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


/// From all the nodes of outer-ring in one component,
/// get the shortest one to the other component,
/// Using BFS
///
/// Time Complexity: O((m * n)^2)
/// Space Complexity: O(m * n)
class Solution {

private:
    int m, n;
    const int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

public:
    int shortestBridge(vector<vector<int>>& A) {

        m = A.size();
        n = A[0].size();
        for(int i = 0; i < m; i ++)
            for(int j = 0; j < n; j ++)
                if(A[i][j]){
                    floodfill(A, i, j);
                    goto shortest;
                }

        shortest:
        int res = INT_MAX;
        for(int i = 0; i < m; i ++)
            for(int j = 0; j < n; j ++)
                if(A[i][j] == 3)
                    res = min(res, bfs(A, i, j));
        return res;
    }

private:
    int bfs(const vector<vector<int>>& A, int startx, int starty){

        queue<int> q;
        vector<bool> visited(m * n, false);
        vector<int> prev(m * n, -1);

        q.push(startx * n + starty);
        visited[startx * n + starty] = true;

        int cur;
        while(!q.empty()){

            cur = q.front();
            int curx = cur / n, cury = cur % n;
            q.pop();

            if(A[curx][cury] == 1)
                break;

            for(int i = 0; i < 4; i ++){
                int nextx = curx + d[i][0], nexty = cury + d[i][1];
                int next = nextx * n + nexty;
                if(inArea(nextx, nexty) && !visited[next]){
                    visited[next] = true;
                    prev[next] = cur;
                    q.push(next);
                }
            }
        }

        int res = 0;
        while(cur != -1){
            if(!A[cur / n][cur % n])
                res ++;
            cur = prev[cur];
        }
        return res;
    }

    void floodfill(vector<vector<int>>& A, int x, int y){

        A[x][y] = 2;
        for(int i = 0; i < 4; i ++){
            int nextx = x + d[i][0], nexty = y + d[i][1];
            if(inArea(nextx, nexty)){
                if(A[nextx][nexty] == 1)
                    floodfill(A, nextx, nexty);
                else if(A[nextx][nexty] == 0)
                    A[x][y] = 3; // outer-ring point
            }
        }
    }

    bool inArea(int x, int y){
        return x >= 0 && x < m && y >= 0 && y < n;
    }
};


int main() {

    return 0;
}