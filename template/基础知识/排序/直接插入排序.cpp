#include<bits/stdc++.h>
using namespace std;

void insert_sort(int arry[], int left, int right) {
    for(int i = left + 1; i <= right; i++) {
        int tmp = arry[i];
        int j = i - 1;
        while(j >= left && arry[j] > tmp) {
            arry[j + 1] = arry[j];
            j--;
        }
        arry[j + 1] = tmp;
    }
}