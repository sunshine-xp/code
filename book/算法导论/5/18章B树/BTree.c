#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define false -1
#define true 1
typedef struct BTNode{
    int size;
    int leaf;
    int dataset[4];
    struct BTNode* nextptr[5];
}BTNode;

typedef struct BTree {
    int volume;

    BTNode* root;
}BTree;

BTree* createBTree() {
    BTree* t = (BTree*)malloc(sizeof(BTree));
    t->root = NULL;
    t->volume = 0;
    return t;
}
BTNode* initBTNode() {
    BTNode* node = (BTNode*)malloc(sizeof(BTNode));
    node->size = 0;
    node->leaf = false;
    memset(node->dataset,-1,sizeof(node->dataset));
    memset(node->nextptr,NULL,sizeof(node->nextptr));
    return node;
}
void add(int data,BTree* tree) {
    if(tree->volume == 0) {
        BTNode* node = initBTNode();
        tree->root = node;
        node->dataset[0] = data;
        tree->volume++;
        node->size++;
        node->leaf = true;
        return;
    }
}

void nadd(int data,BTNode* root) {
    if(root->leaf == false) {
        for(int i = 0;i < root->size;i++) {
            if(i == 0) 
                if(data < root->dataset[i]) 
                    nadd(data,root->nextptr[i]);
                else if(data == root->dataset[i])
                    return;
            else if(i > 0 && i < root->size-1) 
                if(data == root->dataset[i]) 
                    return;
                else if(data > root->dataset[i] && data < root->dataset[i+1])
                    nadd(data,root->nextptr[i]);
            else if(i == root->size-1)
                if(data == root->dataset[i]) 
                    return;
        }
    }else {

    }

}
int main()
{
    BTree* tree = createBTree();
}

