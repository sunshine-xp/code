#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void select_sort(int arry[], int left, int right) {
    for(int i = left; i < right; i++) { 
        int Min = i;
        for(int j = i + 1; j <= right; j++) {
            if(arry[Min] > arry[j]) {
                Min = j;
            }
        }
        if(Min != i) {
            swap(arry[i], arry[Min]);
        }
    }
