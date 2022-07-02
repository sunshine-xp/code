#include<bits/stdc++.h>
using namespace std;

void Heap_just(int a[], int root, int heap_size) {
    if(root < heap_size) {
        int Min = root;
        int l_son = root << 1 | 1;
        int r_son = (root << 1) + 2;
        if(l_son < heap_size && a[Min] > a[l_son]) Min = l_son;
        if(r_son < heap_size && a[Min] > a[r_son]) Min = r_son;
        if(Min == root) return ;
        a[root] ^= a[Min];
        a[Min] ^= a[root];
        a[root] ^= a[Min];
        Heap_just(a, Min, heap_size);
    }
}
void build_heap(int a[], int n) {
    for(int i = n / 2; i >= 0; i--) {
        Heap_just(a, i, n);
    }
}
void Heap_sort(int a[], int n) {
    build_heap(a, n);
    for(int i = n - 1; i > 0; i--) {
        a[i] ^= a[0];
        a[0] ^= a[i];
        a[i] ^= a[0];
        Heap_just(a, 0, i);
    }
}