#include<bits/stdc++.h>
using namespace std;

void arry_add(int arry[], int left, int mid, int right) {
    if(left >= right) return ;
    int i = left, j = mid + 1, k = 0;
    while(i <= mid && j <= right) {
        if(arry[i] <= arry[j]) {
            tmp[k++] = arry[i++];
        } else {
            tmp[k++] = arry[j++];
            cnt += (mid - i + 1);
        }
    }
    while(i <= mid) {
        tmp[k++] = arry[i++];
    } 
    while(j <= right) {
        tmp[k++] = arry[j++];
    }
    for(i = 0; i < k; i++) {
        arry[i + left] = tmp[i];
    }
}
void merge_sort(int arry[], int left, int right) {
    if(left >= right) return ;
    int mid = (left + right) >> 1;
    merge_sort(arry, left, mid);
    merge_sort(arry, mid + 1, right);
    arry_add(arry, left, mid, right);
}