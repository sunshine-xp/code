#include<bits/stdc++.h>
using namespace std;

#define MAX 26
typedef struct Trie   
{   
    Trie *next[MAX];   
    int v;   //根据需要变化
};   
Trie *root;
void createTrie(char *str)
{
    int len = strlen(str);
    Trie *p = root, *q;
    for(int i=0; i<len; ++i)
    {
        int id = str[i]-'0';
        if(p->next[id] == NULL)
        {
            q = (Trie *)malloc(sizeof(Trie));
            q->v = 1;    //初始v==1
            for(int j=0; j<MAX; ++j)
                q->next[j] = NULL;
            p->next[id] = q;
            p = p->next[id];
        }
        else
        {
            p->next[id]->v++;
            p = p->next[id];
        }
    }
    p->v = -1;   //若为结尾，则将v改成-1表示
}
int findTrie(char *str)
{
    int len = strlen(str);
    Trie *p = root;
    for(int i=0; i<len; ++i)
    {
        int id = str[i]-'0';
        p = p->next[id];
        if(p == NULL)   //若为空集，表示不存以此为前缀的串
            return 0;
        if(p->v == -1)   //字符集中已有串是此串的前缀
            return -1;
    }
    return -1;   //此串是字符集中某串的前缀
}