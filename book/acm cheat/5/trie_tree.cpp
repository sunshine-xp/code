#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXN 10000
#define CHAR_COUNT 10
#define MAX_CODE_LEN 10
#define MAX_NODE_COUNT (MAXN * MAX_CODE_LEN +1)

typedef struct trie_node_t {
    struct trie_node_t *next[CHAR_COUNT];
    bool is_tail;
}trie_node_t;


typedef struct trie_tree_t {
    trie_node_t *root;
    int size;

    trie_node_t nodes[MAX_NODE_COUNT];
}trie_tree_t;
/*----创建----*/
trie_tree_t* trie_tree_create(void)
{
    trie_tree_t* tree = (trie_tree_t*)malloc(sizeof(trie_tree_t));
    tree->root = &(tree->nodes[0]);
    memset(tree->nodes, 0, sizeof(tree->nodes));
    tree->size = 1;
    return tree;
}

/*----销毁----*/

void trie_tree_destroy(trie_tree_t *tree) 
{
    free(tree);
    tree = NULL;
}


/**/

void trie_tree_clear(trie_tree_t *tree)
{
    memset(tree->nodes, 0, sizeof(tree->nodes));
    tree->size = 1;
}
/**/

bool trie_tree_insert(trie_tree_t *tree, char *word)
{
    int i;
    trie_node_t *p = tree->root;
    while(*word){
        int curword = *word - '0';
        if(p->next[curword] == NULL) {
            p->next[curword] = &(tree->nodes[tree->size++]);
        }
        p = p->next[curword];
        if(p->is_tail) return false;
        word++;
    }
    p->is_tail = true;

    for(i = 0;i < CHAR_COUNT; i++)
        if(p->next[i] != NULL)
            return false;
    return true;
}
