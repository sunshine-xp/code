#include<bits/stdc++.h>
using namespace std;

void shell_sort(int arry[], int left, int right) {
    int n = right - left;
    int gep = 1;
    while(gep <= n) {
        gep = gep << 1 | 1;
    }
    while(gep >= 1) {
        for(int i = left + gep; i <= right; i++) {
            int temp = arry[i];
            int j = i - gep;
            while(j >= left && arry[j] > temp) {
                arry[j + gep] = arry[j];
                j -= gep;
            }
            arry[j + gep] = temp;
        }
        gep = (gep - 1) / 2;
    }
}