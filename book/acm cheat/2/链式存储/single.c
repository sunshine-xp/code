#include<stdio.h>
typedef struct Node;
typedef struct SingleList {
    int size;
    struct Node * roar;
    struct Node *table;
}SingleList;

typedef struct Node {
    int data;
    struct Node * next;
}Node;

void addhead(SingleList *list,int addnum) {
    if(list == NULL) {
        printf("list Undefind");
        return;
    }
    Node *node = NULL;
    node->data = addnum;
    node->next = list->table;
    list->table = node;
    list->size++;
    return;
}
void addroar(SingleList *list,int addnum) {
    if(list == NULL) {
        printf("list Undefind");
        return;
    }
    Node *node = NULL;
    node->data = addnum;
    node->next = NULL;
    list->size++;
    list->roar->next = node;
    list->roar = node;
    return;
}

int delete() {

}

int modfiy() {

}

int find() {

}

int printList(SingleList*list) {
    if(list == NULL) {
        printf("list Undefind");
        return;
    }
    for(Node *it = list->table;it!=list->roar;it = it->next)
        printf("%d ",it->data);
    printf("\n");
}

int main()
{
    SingleList *list = NULL;
    
}