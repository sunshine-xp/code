#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}
void count_sort(int arry[], int left, int right) {
    int Max = 0;
    int cnt = right - left + 1;
    for(int i = left; i <= right; i++) {
        Max = max(Max, arry[i]);
    }
    int *count = new int[Max + 1];
    int *tmp = new int[cnt + 1];
    for(int i = left; i <= right; i++) {
        ++count[arry[i]];
    }
    for(int i = 1; i <= Max; i++) {
        count[i] += count[i - 1];
    }
    for(int i = right; i >= left; i--) {
        tmp[count[arry[i]]--] = arry[i];
    }
    memcpy(arry + left, tmp + 1, (cnt)* sizeof(int));
    delete(count);
    delete(tmp);
}