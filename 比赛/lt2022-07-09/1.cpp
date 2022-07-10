#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool evaluateTree(TreeNode *root)
{
    if(root->left == NULL && root->right == NULL) return root->val>0;
    switch (root->val){
        case 2:return evaluateTree(root->left)|| evaluateTree(root->right);
        case 3:return evaluateTree(root->left)&& evaluateTree(root->right);
    }
}
int main()
{
    TreeNode * root;
    root->val = 2;
    root->left->val = 1;
    root->right->val = 3;
    root->right->left->val = 0;
    root->right->right->val = 1;
    cout<<evaluateTree(root);

}