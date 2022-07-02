#include<bits/stdc++.h>
using namespace std;

void quick_sort(int arry[], int left, int right) {
    if(left >= right) return ;
    int i = left, j = right;
    int tmp = arry[left];
    do {
        while(arry[j] > tmp && i < j) {
            j--;
        }
        if(i < j) {
            arry[i] = arry[j];
            i++;
        }
        while(arry[i] < tmp && i < j) {
            i++;
        }
        if(i < j) {
            arry[j] = arry[i];
            j--;
        }
    } while(i != j);
    arry[i] = tmp;
    quick_sort(arry, left, i - 1);
    quick_sort(arry, i + 1, right);
}