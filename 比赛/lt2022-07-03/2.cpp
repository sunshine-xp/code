
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
    vector<vector<int>> ans;
    int count = 0;
}