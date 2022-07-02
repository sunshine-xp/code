#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void cocktail_sort(int arry[], int left, int right) {
    int i = left, j = right;
    bool isSwap = false;
    do {
        for(int k = i; k < j; k++) {
            if(arry[k] > arry[k + 1]) {
                swap(arry[k], arry[k + 1]);
            }
        }
        isSwap = false;
        j--;
        for(int k = j; k > i; k--) {
            if(arry[k] < arry[k - 1]) {
                swap(arry[k], arry[k - 1]);
                isSwap = true;
            }
        }
        i++;
    } while(i <= j && isSwap);
}